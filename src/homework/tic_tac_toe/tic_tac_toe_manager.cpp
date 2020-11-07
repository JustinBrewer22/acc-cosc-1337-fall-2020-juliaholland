//tic_tac_toe_manager.cpp
#include<iostream>
#include<string>
#include<vector>
#include"tic_tac_toe_manager.h"

using std::cout; using std::cin;

void TicTacToeManager::save_game( TicTacToe b){
    games.push_back(b);
    update_winner_count(b.get_winner());
    get_winner_total(o_win, x_win, ties);
};

std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager){
    for(int i=0; i<manager.games.size(); i++){
        cout<<"Game#"<<i+1<<"\n";
        cout<<manager.games[i]; 
        cout<<"\n";
    }
    return out;
};

void TicTacToeManager::get_winner_total(int& o, int& x, int& t){
    cout<<"O wins: "<<o<<"\n";
    cout<<"X wins: "<<x<<"\n";
    cout<<"Ties: "<<t<<"\n\n";
};
void TicTacToeManager::update_winner_count(string winner){
    if (winner == "X"){
        x_win++;
    } else if (winner == "O"){
        o_win++;
    } else if (winner == "C"){
        ties++;
    }
};