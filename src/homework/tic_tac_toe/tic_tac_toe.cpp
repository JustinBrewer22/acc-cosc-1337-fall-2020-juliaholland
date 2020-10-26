//cpp
#include<iostream>
#include<string>
#include<vector>
#include"tic_tac_toe.h"

using std::string; using std::vector;
using std::cout; using std::cin;


bool TicTacToe::game_over(){
    return check_board_full();
};

void TicTacToe::start_game(string first_player){
    player = first_player;
    clear_board();
};

void TicTacToe::mark_board(int postion){
    pegs[postion - 1] = player;
    
    set_next_player();
};
std::string TicTacToe::get_player()const{
    return player;
};
void TicTacToe::display_board() const{
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"\n";
    cout<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"\n";
    cout<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"\n";

};
void TicTacToe::set_next_player(){
      if(player == "X" || player == "x"){
        player = "O";
    }
    else {
        player = "X";
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
