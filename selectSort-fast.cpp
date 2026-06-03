#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> selectSort(std::vector<int> &arr);
void print(std::vector<int> arr);
int main()
{
    std::vector<int> a = {45, 1, 23, 11, 5};
    print(a);
    selectSort(a);
    print(a);
    return 0;
}
std::vector<int> selectSort(std::vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; ++i)
    {
        int smallest = i;
        for (int j = i + 1; j < arr.size(); ++j)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        if (smallest != i)
            std::swap(arr[i], arr[smallest]);
    }
    return arr;
}
void print(std::vector<int> arr)
{
    for (int i : arr)
        std::cout << i << " ";
    std::cout << '\n';
}