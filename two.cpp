#define WORKAROUND 1

#include "shared.hpp"

#include <vector>

int sum2(const std::vector<int>& vec)
{
    return sum<int>(vec.begin(), vec.end());
}

