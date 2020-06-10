#include "ctest.h"

#include "board_print_plain.h"

#include "chess.h"





CTEST(arithmetic_suite, simple_sum)

{

    // Given

    const int a = 1;

    const int b = 2;



    // When

    const int result = a+b;



    // Then

    const int expected = 12;

    ASSERT_EQUAL(expected, result);

}
