#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*TEST_CASE("Verify Tic tac toe game"){
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
}*/

TEST_CASE("Verify Tictactoe v2"){
	TicTacToe ttt;
	ttt.start_game("X");
	REQUIRE(ttt.get_player()=="X");
	ttt.start_game("O");
	REQUIRE(ttt.get_player()=="O");

	ttt.start_game("X");

	ttt.mark_board(1);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(2);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(3);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(4);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(5);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(7);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(6);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(9);
	REQUIRE(ttt.game_over() == false);
	ttt.mark_board(8);
	REQUIRE(ttt.game_over() == true);
	REQUIRE(ttt.get_winner() == "C");
}

TEST_CASE("Test win by first column"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(1);
	ttt.mark_board(4);
	ttt.mark_board(2);
	ttt.mark_board(9);
	ttt.mark_board(3);
	REQUIRE(ttt.game_over()==true);
}

TEST_CASE("Test win by second column"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(2);
	ttt.mark_board(1);
	ttt.mark_board(5);
	ttt.mark_board(4);
	ttt.mark_board(8);
	REQUIRE(ttt.game_over()==true);
}

TEST_CASE("Test win by third column"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(3);
	ttt.mark_board(4);
	ttt.mark_board(6);
	ttt.mark_board(7);
	ttt.mark_board(9);
	REQUIRE(ttt.game_over()==true);
}


TEST_CASE("Test win by first row"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(1);
	ttt.mark_board(5);
	ttt.mark_board(2);
	ttt.mark_board(6);
	ttt.mark_board(3);
	REQUIRE(ttt.game_over()==true);
}

TEST_CASE("Test win by second row"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(4);
	ttt.mark_board(3);
	ttt.mark_board(5);
	ttt.mark_board(7);
	ttt.mark_board(6);
	REQUIRE(ttt.game_over()==true);
}

TEST_CASE("Test win by third row"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(7);
	ttt.mark_board(1);
	ttt.mark_board(8);
	ttt.mark_board(6);
	ttt.mark_board(9);
	REQUIRE(ttt.game_over()==true);
}

TEST_CASE("Test win by diagonally from top left"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(1);
	ttt.mark_board(2);
	ttt.mark_board(5);
	ttt.mark_board(6);
	ttt.mark_board(9);
	REQUIRE(ttt.game_over()==true);
}

TEST_CASE("Test win by diagonally from bottom left"){
	TicTacToe ttt;
	ttt.start_game("X");
	ttt.mark_board(7);
	ttt.mark_board(2);
	ttt.mark_board(5);
	ttt.mark_board(6);
	ttt.mark_board(3);
	REQUIRE(ttt.game_over()==true);
}