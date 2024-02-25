#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int GetAverage(const std::vector<int>& vec)
{
    return std::accumulate(vec.begin(), vec.end(), 0) / vec.size();
}

int main()
{
    constexpr auto RANDOM_MAX = 10000;
    std::srand(std::time(nullptr));
    std::vector<int> vec;
    for (auto i = 0; i < std::rand() % RANDOM_MAX; ++i)
        vec.push_back(std::rand() % RANDOM_MAX);

    std::cout << "Max: " << *std::max_element(vec.begin(), vec.end()) << std::endl;
    std::cout << "Min: " << *std::min_element(vec.begin(), vec.end()) << std::endl;
    std::cout << "Average: " << GetAverage(vec) << std::endl;
    return 0;
}
