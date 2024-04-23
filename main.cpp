#include <iostream>
#include "sort.h"
#include "util.h"

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

int main()
{
    test_mergeSort();
    return 0;
}