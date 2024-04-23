#include <iostream>
#include <vector>

#include "heap_sort.h"

using namespace std;

// 建立最大堆
void buildMaxHeap(std::vector<int>& nums)
{
    int n = nums.size();
    for (int i = n / 2; i >= 0; --i)
    {
        maxHeapify(nums, i, n);
    }
}

// 保持最大堆性质
void maxHeapify(std::vector<int>& nums, int i, int n)
{
    while ((2 * i + 1) < n)
    {
        int leftSon = 2 * i + 1;
        int rightSon = 2 * i + 2;
        int larger = i;

        if (leftSon < n && nums[leftSon] > nums[i]) larger = leftSon;
        if (rightSon < n && nums[rightSon] > nums[larger]) larger = rightSon;

        if (larger != i)
        {
            swap(nums[i], nums[larger]);
            i = larger;
        }
        else break;
    }
}

// 堆排序
void heapSort(std::vector<int>& nums)
{
    int n = nums.size();
    buildMaxHeap(nums); // 构建大根堆

    // 将最大的元素移动到最后面，并减少 n
    for (int i = n - 1; i >= 1; --i)
    {
        swap(nums[0], nums[i]);
        --n;
        maxHeapify(nums, 0, n);
    }
}