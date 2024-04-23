```
├── README.md
├── main.cpp                // 测试
├── makefile                // makefile
├── sort.h                  // 各种排序算法头文件
├── heapSort                // 堆排序
│   ├── heap_sort.cpp
│   └── heap_sort.h
├── mergeSort               // 归并排序
│   ├── merge_sort.cpp
│   └── merge_sort.h
├── quickSort               // 随机快速排序
│   ├── quick_sort.cpp
│   └── quick_sort.h
└── util                    // 辅助函数，创建和输出数组
    ├── util.cpp
    └── util.h
```


## 归并排序

- `merge_sort.cpp`
- `merge_sort.h`

分：不断二分

合：对以及有序的两个子数组进行合并

- 时间复杂度: $O(n\cdot{logn})$，递归的趟数是 $O(logn)$，每次合并是 $O(n)$，所以时间复杂度是 $O(n\cdot{logn})$
- 空间复杂度: $O(n)$，需要额外创建一个数组存储新的排序数组
- 稳定排序算法，如果两个有序子数组有相同元素，仍然可以保持顺序

## 快速排序

- `quick_sort.cpp`
- `quick_sort.h`

原地排序，选取主元 base，小于 base 的放在左侧，大于等于的在右侧

递归的对左右区间进行快排，直到区间元素 left >= right

引入随机选取 base

- 时间复杂度: $O(n\cdot{logn})\sim{O(n^2)}$，如果每次选取的主元恰好是中位数，则在随机情况下，平均时间复杂度是  $O(n\cdot{logn})$；最坏情况，原数组已经有序，时间复杂度为 $O(n^2)$
- 空间复杂度: $O(logn)\sim{O(n)}$，最坏情况就是原数组有序
- 不稳定排序算法：选取的主元会被交换到相等元素的右侧

