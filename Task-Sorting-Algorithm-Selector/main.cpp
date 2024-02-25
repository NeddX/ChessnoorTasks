#include <iostream>
#include <vector>
#include <utility>
#include <string>

template <typename T>
using SortFn = void(std::vector<T>&);

template <typename T>
void BubbleSort(std::vector<T>& vec)
{   
    for (auto i = 0; i < vec.size(); ++i)
    {
        for (auto j = i + 1; j < vec.size(); ++j)
        {
            if (vec[i] > vec[j])
                std::swap(vec[i], vec[j]);
        }
    }
}

template <typename T>
void SelectionSort(std::vector<T>& vec)
{
    int j, min_idx; 
    const auto n = vec.size();
    
    // One by one move boundary of 
    // unsorted subarray 
    for (auto i = 0; i < n - 1; i++) 
    { 
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (vec[j] < vec[min_idx]) 
                min_idx = j; 
        } 
  
        if (min_idx != i) 
            std::swap(vec[min_idx], vec[i]); 
    } 
}

template <typename T>
void Sort(std::vector<T>& cont, SortFn<T> fn)
{
    fn(cont);
}

template <typename T>
std::ostream& operator<<(std::ostream& stream, const std::vector<T>& vec) noexcept
{
    stream << "[ ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {   
        if (std::next(it) != vec.end())
            stream << *it << ", ";
        else
            stream << *it;
    }
    stream << " ]";
    return stream;
}

int main()
{
    std::vector<int> vec{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    std::cout << "Initial array:\n" << vec << std::endl;

    std::cout << "Choose a sorting algorithm (bubble, selection): ";
    std::string input;
    std::getline(std::cin, input);
    if (input == "bubble")
    {
        std::cout << "Sorting with bubble sort.\n";
        Sort(vec, BubbleSort);
    }
    else
    {
        std::cout << "Sorting with selection sort.\n";
        Sort(vec, SelectionSort);
    }
    
    std::cout << "After sorting:\n" << vec << std::endl;
    return 0;
}
