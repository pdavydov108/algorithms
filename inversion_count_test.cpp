#define BOOST_TEST_MODULE inversion_count_tests
#define BOOST_TEST_MAIN 1
#define BOOST_TEST_DYN_LINK 1
#include <inversion_count.hpp>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(inversion_count_tests);
using namespace std;
using namespace algo;
using IntVector = vector<int>;

BOOST_AUTO_TEST_CASE(empty_array_case) {
	BOOST_CHECK_EQUAL(countSortInversions(IntVector{}), 0);
}

BOOST_AUTO_TEST_SUITE_END();
