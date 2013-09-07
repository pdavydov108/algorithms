#pragma once

#include <cstdio>
#include <functional>

namespace algo {
	template <class Range, class Compare = std::less<typename Range::value_type>> 
	std::size_t countSortInversions(Range&& range, Compare compare = std::less<typename Range::value_type>()) {
		return 0;
	}
}
