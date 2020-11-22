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
        string winner;
        string next_player;

    public: 
        //TicTacToe(){};
        TicTacToe(int size): pegs(size*size, " "){};
        TicTacToe(std::vector<std::string> p, std::string win) : pegs(p), winner(win){};
        bool game_over();
        void start_game(string first_player);
        void mark_board(int postion);
        string get_player() const;
        string get_winner();
        std::vector<std::string>get_pegs() const{return pegs; };
        friend void operator<<(std::ostream& out, TicTacToe& ttt);
        friend void operator>>(std::istream& in, TicTacToe& ttt);
    
     protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        void set_winner();
};
#endif 