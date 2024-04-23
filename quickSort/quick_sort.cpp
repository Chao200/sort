#include <iostream>
#include <vector>
#include <random>

#include "quick_sort.h"

using namespace std;

int quickSort(vector<int>& nums, int left, int right)
{
    // 随机选取 base
    int base = random() % (right - left + 1) + left;
    swap(nums[left], nums[base]);

    // index 指向的是小于等于 base 的最后一个元素
    int index = left;
    for (int i = left+1; i <= right; ++i)
    {
        if (nums[i] < nums[left])
        {
            index++;
            swap(nums[i], nums[index]);
        }
    }
    swap(nums[index], nums[left]);  // 和 base 交换
    return index;
}


void randomQuickSort(vector<int>& nums, int left, int right)
{
    if (left < right)
    {
        int pos = quickSort(nums, left, right);
        // 递归左右子区间
        randomQuickSort(nums, left, pos - 1);
        randomQuickSort(nums, pos + 1, right);
    }
}