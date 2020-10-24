#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Tic tac toe game"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(1);
	ttt.mark_board(2);
	ttt.mark_board(3);
	ttt.mark_board(4);
	ttt.mark_board(5);
	ttt.mark_board(6);
	ttt.mark_board(7);
	ttt.mark_board(8);
	ttt.mark_board(9);
	REQUIRE (ttt.game_over() == TRUE);
}