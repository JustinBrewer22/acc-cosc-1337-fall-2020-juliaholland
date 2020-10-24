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
	 do {
         cout<<"Pick X or O: ";
		 cin>>player;
    } while (player != "X" && player != "x" && player != "o" && player !="O");
	
	ttt.start_game(player);

	do {
		cout<<"Enter your number from 1-9: ";
		cin>>choice;
		ttt.mark_board(choice);
		ttt.display_board();
		
	} while(ttt.game_over() == false);

	

	return 0;
}