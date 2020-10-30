#include<iostream>
#include"tic_tac_toe.h"
#include<string>

using std::string; using std::cout; using std::cin;

using std::cout; using std::cin;

int main() 
{
	TicTacToe ttt;

	std::string player;
	int choice;
	char option;
	do {
		do {
			cout<<"Pick X or O: ";
			cin>>player;
			if(player == "x"){
				player = "X";
			} else if (player == "o"){
				player = "O";
			}	
		} while (player != "X" && player !="O");
		
		ttt.start_game(player);

		do {
			cout<<"Enter your number from 1-9: ";
			cin>>choice;
			ttt.mark_board(choice);
			ttt.display_board();
			
		} while(ttt.game_over() == false);

		string winner = ttt.get_winner();
		cout<<"The winner is: "<< winner<<"\n";

		cout<<"Do you want to continue the game?(Y/N): ";
		cin>>option;

	}while (option == 'Y' || option == 'y');

	return 0;
}