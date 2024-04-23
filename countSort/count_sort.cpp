#include <iostream>
#include <vector>

#include "count_sort.h"

using namespace std;

std::vector<int> countSort(std::vector<int>& nums)
{
    // 得到最大值和最小值 O(n)
    int min_val = nums[0], max_val = nums[0];
    for (int val: nums)
    {
        min_val = min(min_val, val);
        max_val = max(max_val, val);
    }

    // 统计每个数出现的次数 O(n)
    vector<int> count(max_val-min_val+1);
    for (int val: nums)
    {
        count[val-min_val]++;
    }

    // 累积次数，这样 count[i] 记录的就是 i+min_val 最后出现的位置 O(m)
    for (int i = 1; i < count.size(); ++i)
    {
        count[i] += count[i-1];
    }

    vector<int> res(nums.size());
    // 反向遍历，保证稳定性 O(n)
    for (int i = nums.size() - 1; i >= 0; --i)
    {
        int num = nums[i];
        // 需要减 1，索引从 0 开始
        res[count[num-min_val] - 1] = num;
        count[num-min_val]--;
    }

    return res;
}