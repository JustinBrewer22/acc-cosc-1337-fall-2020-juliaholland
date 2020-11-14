//cpp
#include<iostream>
#include<string>
#include<vector>
#include"tic_tac_toe.h"

using std::string; using std::vector;
using std::cout; using std::cin;


bool TicTacToe::game_over(){
    if (check_column_win()==true || check_row_win()==true || check_diagonal_win() == true ){
        set_winner();
        return true;
    }
    else if(check_board_full() == true){
        winner = "C";
        return true;
    }
    else if (check_board_full() == false)
    {
        return false;
    }
    
};

void TicTacToe::start_game(string first_player){
    next_player = first_player;
    clear_board();
};

void TicTacToe::mark_board(int postion){
    pegs[postion - 1] = next_player;

    if (game_over() == false) {
        set_next_player();
    }
};
std::string TicTacToe::get_player()const{
    return next_player;
};

string TicTacToe::get_winner(){
    return winner;
};

bool TicTacToe::check_column_win(){
    return false;   
};
bool TicTacToe::check_row_win(){
    return false;
};
bool TicTacToe::check_diagonal_win(){
    return false;
};
void TicTacToe::set_winner(){
    
    if (next_player == "X")
    {
        winner = "X";
    }
    else 
    {
        winner = "O";
    }
};

void TicTacToe::set_next_player(){
    if(next_player == "X")
    {
        next_player = "O";
    }
    else 
    {
        next_player = "X";
    }
};

bool TicTacToe::check_board_full(){
    for (int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ") {
            return false;
        }
      }    
        return true;   
   
};
void TicTacToe::clear_board(){
    for (int i = 0; i < pegs.size(); i++)
    {
    pegs[i] = " ";
    }
};

void operator>>(std::istream& in, TicTacToe& ttt){
	int choice;
        cout<<"Enter your number from 1-9: ";
		cin>>choice;
		ttt.mark_board(choice);				
};
void operator<<(std::ostream& out, TicTacToe& ttt) {
    if (ttt.pegs.size() == 9){
    cout<<ttt.pegs[0]<<"|"<<ttt.pegs[1]<<"|"<<ttt.pegs[2]<<"\n";
    cout<<ttt.pegs[3]<<"|"<<ttt.pegs[4]<<"|"<<ttt.pegs[5]<<"\n";
    cout<<ttt.pegs[6]<<"|"<<ttt.pegs[7]<<"|"<<ttt.pegs[8]<<"\n";
    }
    else if (ttt.pegs.size() == 16) {
    cout<<ttt.pegs[0]<<"|"<<ttt.pegs[1]<<"|"<<ttt.pegs[2]<<"|"<<ttt.pegs[3]<<"\n";
    cout<<ttt.pegs[4]<<"|"<<ttt.pegs[5]<<"|"<<ttt.pegs[6]<<"|"<<ttt.pegs[7]<<"\n";
    cout<<ttt.pegs[8]<<"|"<<ttt.pegs[9]<<"|"<<ttt.pegs[10]<<"|"<<ttt.pegs[11]<<"\n";
    cout<<ttt.pegs[12]<<"|"<<ttt.pegs[13]<<"|"<<ttt.pegs[14]<<"|"<<ttt.pegs[115]<<"\n";
    }
};
