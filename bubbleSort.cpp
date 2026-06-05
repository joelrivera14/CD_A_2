#include <iostream>
#include <vector>
#include <algorithm>

void bubbleSort(std::vector<int> &arr);
void print(std::vector<int> arr);

int main()
{
    std::vector<int> nums = {23231, 1, 123, 2, 23, 2};
    print(nums);
    bubbleSort(nums);
    print(nums);

    return 0;
}

void bubbleSort(std::vector<int> &arr)
{
    int n = arr.size();
    // or i < n - 1
    for (int i = 0; i < n; ++i)
    {
        // j < n - i - 1
        for (int j = 0; j < n - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
        }
    }
}

void print(std::vector<int> arr)
{
    for (auto i : arr)
        std::cout << i << " ";
    std::cout << "\n";
}