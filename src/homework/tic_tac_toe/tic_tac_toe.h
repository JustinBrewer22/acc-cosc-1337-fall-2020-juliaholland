//h
#include<iostream>
#include<string>
#include<vector>

using std::string; using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
class TicTacToe {
    private: 
        string player;
        
    std::vector<std::string> pegs = {9," "};

    public: 
        bool game_over();
        void start_game(string first_player);
        void mark_board(int postion);
        string get_player() const;
        void display_board() const;

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
};
#endif 