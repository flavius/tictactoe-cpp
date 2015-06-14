#define BOOST_TEST_MAIN
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>

#include <Tictactoe.h>
#include <Board.h>

BOOST_AUTO_TEST_CASE(when_starting_the_game_the_board_is_empty_and_the_next_player_is_x) {
    Board board;
    Tictactoe game(board);
    BOOST_CHECK_EQUAL('X', game.nextPlayer());
    BOOST_CHECK_EQUAL(true, game.board().isEmpty());
}
