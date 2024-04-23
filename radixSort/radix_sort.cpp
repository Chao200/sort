#include <iostream>
#include <vector>
#include <string>

#include "radix_sort.h"
using namespace std;

int pow(int n, int i)
{
    if (i == 0) return 1;
    int sum = n;
    i--;
    while (i--)
    {
        sum *= n;
    }
    return sum;
}

void radixSort(std::vector<int>& nums)
{
    // 最大值
    int max_val = nums[0];
    for (int val: nums) max_val = max(max_val, val);

    // 最大值长度
    int size = to_string(max_val).size();

    // 遍历每一位
    for (int i = 0; i < size; ++i)
    {
        // 存储 0~9
        vector<vector<int>> buckets(10, vector<int>());
        // 根据位数，到对应的 bucket
        for (int val: nums)
        {
            buckets[(val / pow(10, i)) % 10].push_back(val);
        }

        nums.clear();

        // 重新赋值 nums
        for (auto bucket: buckets)
        {
            for (int val: bucket)
            {
                nums.push_back(val);
            }
        }
    }
}