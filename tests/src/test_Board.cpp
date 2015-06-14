#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>

#include <Board.h>

BOOST_AUTO_TEST_SUITE(test_Board)

BOOST_AUTO_TEST_CASE(board_is_empty_after_creation) {
    Board board;
    BOOST_CHECK_EQUAL(true, board.isEmpty());
}

BOOST_AUTO_TEST_SUITE_END()
