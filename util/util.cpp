#include <vector>
#include <iostream>
#include <random>
#include "util.h"

using namespace std;

// 打印数组元素
void print(const vector<int>& nums)
{
    for (int i = 0; i < nums.size(); ++i) cout << nums[i] << " ";
    cout << endl;
}

// 得到 n 个随机数构成的 vector
vector<int> getRandomNumber(int n)
{
    vector<int> res;
    for (int i = 0; i < n; ++i)
    {
        res.push_back(random() % 100 + 1);
    }
    return res;
}
