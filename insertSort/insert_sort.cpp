#include <iostream>
#include <vector>

#include "insert_sort.h"

using namespace std;

void insertSort(std::vector<int>& nums)
{
    // 第一个位置已经有序，从第二个位置开始遍历
    for (int i = 1; i < nums.size(); ++i)
    {
        // 记录当前元素
        int temp = nums[i];
        int j = i;
        // 找到排序的位置
        while (j > 0 && nums[j-1] > temp)
        {
            nums[j] = nums[j-1];
            --j;
        }
        nums[j] = temp;
    }
}
