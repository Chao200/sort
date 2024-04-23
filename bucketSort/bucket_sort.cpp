#include <iostream>
#include <vector>

#include "../insertSort/insert_sort.h"
#include "bucket_sort.h"

using namespace std;

std::vector<int> bucketSort(std::vector<int>& nums, int bucket_size)
{
    int min_val = nums[0], max_val = nums[0];
    for (int val: nums)
    {
        min_val = min(min_val, val);
        max_val = max(max_val, val);
    }

    // 向下取整，所以需要 +1
    int bucket_count = (max_val - min_val) / bucket_size + 1;

    // 把每个 val，加入到正确的 bucket 中
    vector<vector<int>> buckets(bucket_count, vector<int>());
    for (int val: nums)
    {
        buckets[(val - min_val) / bucket_size].push_back(val);
    }

    vector<int> res;
    // 对每个 bucket 排序
    for (auto bucket: buckets)
    {
        insertSort(bucket);
        for (int val: bucket) res.push_back(val);
    }

    return res;
}