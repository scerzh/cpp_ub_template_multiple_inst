#include "shared.hpp"

#include <vector>

int sum1(const std::vector<int>& vec)
{
    return sum<int>(vec.begin(), vec.end());
}
