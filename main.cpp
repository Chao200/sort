#include <iostream>
#include "sort.h"
#include "util/util.h"

using namespace std;

void test_mergeSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After MergeSort\n";
    auto res = mergeSort(nums, 0, nums.size()-1);
    print(res);
}


void test_randomQuickSort()
{
    srand((unsigned)time(NULL));
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After randomQuickSort\n";
    randomQuickSort(nums, 0, nums.size()-1);
    print(nums);
}

int main()
{
    cout << "=================mergerSort==================\n";
    test_mergeSort();
    cout << "=============================================\n\n";

    cout << "=================randomQuickSort=============\n";
    test_randomQuickSort();
    cout << "=============================================\n\n";
    return 0;
}