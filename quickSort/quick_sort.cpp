#include <iostream>
#include <vector>
#include <random>

#include "quick_sort.h"

using namespace std;

int quickSort(vector<int>& nums, int left, int right)
{
    int base = random() % (right - left + 1) + left;
    swap(nums[left], nums[base]);
    int index = left;
    for (int i = left+1; i <= right; ++i)
    {
        if (nums[i] < nums[left])
        {
            index++;
            swap(nums[i], nums[index]);
        }
    }
    swap(nums[index], nums[left]);
    return index;
}


void randomQuickSort(vector<int>& nums, int left, int right)
{
    if (left < right)
    {
        int pos = quickSort(nums, left, right);
        randomQuickSort(nums, left, pos - 1);
        randomQuickSort(nums, pos + 1, right);
    }
}