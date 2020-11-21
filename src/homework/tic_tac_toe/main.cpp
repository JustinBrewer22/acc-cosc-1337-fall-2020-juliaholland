#include<iostream>
#include"tic_tac_toe.h"
#include<string>
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<memory>
#include<utility>

using std::string; using std::cout; using std::cin;

using std::cout; using std::cin;

int main() 
{
	std::string player;
	int type;
	std::string  option;

	int x = 0;
	int o = 0;
	int t = 0;

	std::unique_ptr<TicTacToe> game;
	TicTacToeData data;
	TicTacToeManager manager(data);
	do {
		do{
			cout<<"Choose tictactoe 3 or 4? (3/4): ";
			cin>>type;
			if(type == 3) {
				game = std::make_unique<TicTacToe3>();
			} 
			else if(type == 4){
				game = std::make_unique<TicTacToe4>();
			}
			else {
				cout<<"Invalid";
			}
		}	
		while (type!=3 && type!=4);

		do {
			cout<<"Pick X or O: ";
			cin>>player;
			if(player == "x")
			{                
				player = "X";
			} else if (player == "o"){
				player = "O";
			}   
		} while (player != "X" && player !="O");
			
	
			option ="N";	
			game->start_game(player);
			cout<<"after start game";
			do {
				cin>>*game;
				cout<<*game;
			} while(game->game_over() == false);

			string winner = game->get_winner();
			cout<<"The winner is: "<<winner<<"\n\n";

			manager.save_game(game);

			manager.get_winner_total(o, x, t);

			cout<<"X wins: "<<x<<"\n";
			cout<<"O wins: "<<o<<"\n";
			cout<<"Ties: "<<t<<"\n\n";

			cout<<"Do you want to continue the game?(Y/N): ";
			
			cin>>option;

		} while (option == "Y" || option == "y");
		cout<<manager;
		return 0;
}