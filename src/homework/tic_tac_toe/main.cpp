#include<iostream>
#include"tic_tac_toe.h"
#include<string>
#include"tic_tac_toe_manager.h"

using std::string; using std::cout; using std::cin;

using std::cout; using std::cin;

int main() 
{
	TicTacToe ttt;
	TicTacToeManager manager;

	std::string player;
	//int choice;
	char option;
	
		do {
            cout<<"Pick X or O: ";
            cin>>player;
            if(player == "x"){
                player = "X";
            } else if (player == "o"){
                player = "O";
            }   
        } while (player != "X" && player !="O");
        
	do {	
		ttt.start_game(player);

		do {
			cin>>ttt;
			cout<<ttt;	
		} while(ttt.game_over() == false);

		string winner = ttt.get_winner();
		cout<<"The winner is: "<< winner<<"\n";

		manager.save_game(ttt);

		cout<<"Do you want to continue the game?(Y/N): ";
		cin>>option;

	}while (option == 'Y' || option == 'y');
	cout<<manager;
	return 0;
}