#ifndef HEAP_SORT_H
#define HEAP_SORT_H

// 堆排序
void heapSort(std::vector<int>& nums);
// 建立最大堆
void buildMaxHeap(std::vector<int>& nums);
// 保持最大堆性质
void maxHeapify(std::vector<int>& nums, int i, int n);

#endif