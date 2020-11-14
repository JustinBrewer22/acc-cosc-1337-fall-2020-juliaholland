//tic_tac_toe_manager.cpp
#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<memory>
#include"tic_tac_toe_manager.h"

using std::cout; using std::cin;

void TicTacToeManager::save_game(unique_ptr<TicTacToe> &game){

    update_winner_count(game->get_winner());

    games.push_back(std::move(game));
    
    //get_winner_total(o_win, x_win, ties);
};

std::ostream& operator<<(std::ostream& out, TicTacToeManager &manager){
    for(int i=0; i<manager.games.size(); i++){
        cout<<"Game"<<i+1<<"\n";
        cout<<*manager.games[i]; 
        cout<<"\n";
    }
    return out;
};

void TicTacToeManager::get_winner_total(int& o, int& x, int& t){
    x = x_wins;
    o = o_wins;
    t = ties;
};
void TicTacToeManager::update_winner_count(string winner){
    if (winner == "X"){
        x_wins++;
    } else if (winner == "O"){
        o_wins++;
    } else if (winner == "C"){
        ties++;
    }
};