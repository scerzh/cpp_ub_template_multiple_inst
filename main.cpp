#include <iostream>
#include <vector>

int sum1(const std::vector<int>& vec);
int sum2(const std::vector<int>& vec);

int main(int argc, char **argv)
{
    std::vector<int> intVec {1, 2, 3, 4, 5};

    auto intSum1 = sum1(intVec);
    auto intSum2 = sum2(intVec);

    std::cout << "intSum1 = " << intSum1 << " intSum2 = " << intSum2 << '\n';

    return 0;
}
