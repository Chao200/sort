#include <iostream>
#include <vector>

#include "merge_sort.h"

using namespace std;

// 合
vector<int> merge(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> res;
    int n1, n2;
    for (n1 = 0, n2 = 0; n1 < nums1.size() && n2 < nums2.size(); )
    {
        if (nums1[n1] > nums2[n2])
        {
            res.push_back(nums2[n2]);
            ++n2;
        }
        else
        {
            res.push_back(nums1[n1]);
            ++n1;
        }
    }

    while (n1 < nums1.size()) res.push_back(nums1[n1++]);
    while (n2 < nums2.size()) res.push_back(nums2[n2++]);

    return res;
}

// 分
vector<int> mergeSort(vector<int>& nums, int left, int right)
{
    if (left == right) return {nums[left]};

    int mid = left + (right - left) / 2;
    vector<int> leftMerge = mergeSort(nums, left, mid);
    vector<int> rightMerge = mergeSort(nums, mid+1, right);
    return merge(leftMerge, rightMerge);
}