#include <vector>
#include <iostream>
#include <random>
#include "util.h"

using namespace std;

void print(const vector<int>& nums)
{
    for (int i = 0; i < nums.size(); ++i) cout << nums[i] << " ";
    cout << endl;
}


vector<int> getRandomNumber(int n)
{
    vector<int> res;
    for (int i = 0; i < n; ++i)
    {
        res.push_back(random() % 100 + 1);
    }
    return res;
}
