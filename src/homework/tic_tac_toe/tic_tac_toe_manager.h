//tic_tac_toe_manager.h
#include<iostream>
#include "tic_tac_toe.h"
#include<memory>
#include<utility>

using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager{
public:
    void save_game(unique_ptr<TicTacToe> &game);
    friend std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager);
    void get_winner_total(int& o, int& w, int& t);
private: 
    std::vector<unique_ptr<TicTacToe>> games;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;
    void update_winner_count(string winner);
};
#endif