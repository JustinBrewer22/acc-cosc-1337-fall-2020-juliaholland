//tic_tac_toe_dat.cpp
#include "tic_tac_toe_data.h"
#include"tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<fstream>
#include<memory>

    void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games){
        std::ofstream out_file;
        out_file.open(file_name);

        for(auto& game: games){
            for(auto ch:game->get_pegs()){
                out_file<<ch;
            }
            out_file<<game->get_winner()<<"/n";
        }
        out_file.close();
    };

    std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games(){
        std::vector<std::unique_ptr<TicTacToe>> boards;

        std::ifstream read_file;
        read_file.open(file_name);

        string line;
        vector<string>  pegs;
        
        while(getline(read_file, line))
        {
            for(auto& ch:line){
                pegs.push_back(string(1,ch));
            }
            string winner = pegs[pegs.size() - 1];

            std::unique_ptr<TicTacToe> board;

            if (pegs.size() == 9){
                board = std::make_unique<TicTacToe3>(pegs, winner);
            }
            else if (pegs.size() == 16){
                board = std::make_unique<TicTacToe4>(pegs, winner);
            }

            boards.push_back(std::move(board));

        }
        read_file.close();
        return boards;


    };
