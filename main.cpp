#include <iostream>
#include "sort.h"
#include "util/util.h"

using namespace std;

// 测试 插入排序
void test_insertSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After insertSort\n";
    insertSort(nums);
    print(nums);
}

// 测试 归并排序
void test_mergeSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After MergeSort\n";
    auto res = mergeSort(nums, 0, nums.size()-1);
    print(res);
}

// 测试 随机快速排序
void test_randomQuickSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After randomQuickSort\n";
    randomQuickSort(nums, 0, nums.size()-1);
    print(nums);
}

// 测试 堆排序
void test_heapSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After heapSort\n";
    heapSort(nums);
    print(nums);
}

// 测试 计数排序
void test_countSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After countSort\n";
    auto res = countSort(nums);
    print(res);
}

// 测试 桶排序
void test_bucketSort()
{
    // 返回 15 个 1~100 的随机数
    auto nums = getRandomNumber(15);
    print(nums);
    cout << "After bucketSort\n";
    auto res = bucketSort(nums);
    print(res);
}

int main()
{
    cout << "=================insertSort====================\n";
    test_insertSort();
    cout << "=============================================\n\n";

    cout << "=================mergerSort==================\n";
    test_mergeSort();
    cout << "=============================================\n\n";

    cout << "=================randomQuickSort=============\n";
    test_randomQuickSort();
    cout << "=============================================\n\n";

    cout << "=================heapSort====================\n";
    test_heapSort();
    cout << "=============================================\n\n";

    cout << "=================countSort====================\n";
    test_countSort();
    cout << "=============================================\n\n";

    cout << "=================bucketSort====================\n";
    test_bucketSort();
    cout << "=============================================\n\n";

    return 0;
}