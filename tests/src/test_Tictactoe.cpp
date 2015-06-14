#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>

#include <Tictactoe.h>

BOOST_AUTO_TEST_SUITE(test_Tictactoe)

BOOST_AUTO_TEST_CASE(the_game_starts_with_x_active_player) {
    Tictactoe game;
    BOOST_CHECK_EQUAL('X', game.nextPlayer());
}

BOOST_AUTO_TEST_SUITE_END()

