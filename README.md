```
├── README.md
├── main.cpp                // 测试
├── makefile                // makefile
├── sort.h                  // 各种排序算法头文件
├── insertSort              // 插入排序
│   ├── insert_sort.cpp
│   └── insert_sort.h
├── mergeSort               // 归并排序
│   ├── merge_sort.cpp
│   └── merge_sort.h
├── quickSort               // 随机快速排序
│   ├── quick_sort.cpp
│   └── quick_sort.h
├── heapSort                // 堆排序
│   ├── heap_sort.cpp
│   └── heap_sort.h
├── countSort               // 计数排序
│   ├── count_sort.cpp
│   └── count_sort.h
├── bucketSort              // 桶排序
│   ├── bucket_sort.cpp
│   └── bucket_sort.h
└── util                    // 辅助函数，创建和输出数组
    ├── util.cpp
    └── util.h
```

## 测试

```shell
make clean
make && ./build
```

## 插入排序

- [`insert_sort.cpp`](./insertSort/insert_sort.cpp)
- [`insert_sort.h`](./insertSort/insert_sort.h)

对每个元素遍历，并放到对应的位置

- 时间复杂度: $O(n)\sim{O(n^2)}$，最好情况 $O(n)$，元素基本有序；平均和最坏是 $O(n^2)$
- 空间复杂度: $O(1)$，原地排序
- 稳定排序算法，每次讲元素插入到相等元素右边


## 归并排序

- [`merge_sort.cpp`](./mergeSort/merge_sort.cpp)
- [`merge_sort.h`](./mergeSort/merge_sort.h)

分：不断二分

合：对以及有序的两个子数组进行合并

- 时间复杂度: $O(n\cdot{logn})$，递归的趟数是 $O(logn)$，每次合并是 $O(n)$，所以时间复杂度是 $O(n\cdot{logn})$
- 空间复杂度: $O(n)$，需要额外创建一个数组存储新的排序数组
- 稳定排序算法，如果两个有序子数组有相同元素，仍然可以保持顺序

## 快速排序

- [`quick_sort.cpp`](./quickSort/quick_sort.cpp)
- [`quick_sort.h`](./quickSort/quick_sort.h)

原地排序，选取主元 base，小于 base 的放在左侧，大于等于的在右侧

递归的对左右区间进行快排，直到区间元素 left >= right

引入随机选取 base

- 时间复杂度: $O(n\cdot{logn})\sim{O(n^2)}$，如果每次选取的主元恰好是中位数，则在随机情况下，平均时间复杂度是  $O(n\cdot{logn})$；最坏情况，原数组已经有序，时间复杂度为 $O(n^2)$
- 空间复杂度: $O(logn)\sim{O(n)}$，最坏情况就是原数组有序，递归的时候栈存储元素
- 不稳定排序算法：选取的主元会被交换到相等元素的右侧

## 堆排序

- [`heap_sort.cpp`](./heapSort/heap_sort.cpp)
- [`heap_sort.h`](./heapSort/heap_sort.h)

根节点保持最大或最小性质，使用数组存储

利用父节点和子节点之间索引关系，从而根据父节点可以找到子节点，也可以根据子节点找到父节点

对于 $n$ 个节点的数组，从 $n/2$ 开始维持最大堆性质

- 时间复杂度: $O(n\cdot{logn})$，时间花费在建立初始堆和下移调整，总共需要调整的节点个数是 $O(n)$ 的，每次调整下移的最大高度是 $O(logn)$，所以时间复杂度是 $O(n\cdot{logn})$
- 空间复杂度: $O(1)$
- 不稳定排序算法：在下移的过程，相等的元素相对位置可能发生变化


## 计数排序

- [`count_sort.cpp`](./countSort/count_sort.cpp)
- [`count_sort.h`](./countSort/count_sort.h)

对每个数字进行计数，对计数数组求前缀和，这样对应元素的最远位置，就是前缀和对应的数字

为了保证稳定性，需要反向遍历前缀和数组

局限性: 1) 最大值和最小值差距过大; 2) 只适用于整数

- 时间复杂度: $O(n+m)$，其中 $n$ 是数组元素，$m$ 是最大值和最小值的差值
- 空间复杂度: $O(m)$，不考虑原始数据
- 稳定排序算法


## 桶排序

- [`bucket_sort.cpp`](./bucketSort/bucket_sort.cpp)
- [`bucket_sort.h`](./bucketSort/bucket_sort.h)

根据最大值和最小值的差值，划分出多个等间隔的区间，对每个区间内的数可以使用不同的排序算法，最后拼接

打破了计数排序整数的限制，只要可以按照区间划分到不同的桶，都可以使用桶排序

- 时间复杂度: $O(n)$
- 空间复杂度: $O(n+m)$，$n$ 是数据个数，$m$ 是桶的个数
- 稳定性取决于桶内使用的排序算法


## 基数排序

- [`radix_sort.cpp`](./radixSort/radix_sort.cpp)
- [`radix_sort.h`](./radixSort/radix_sort.h)

将整数按位数切割成不同的数字，然后从低位开始，依次到高位，逐位进行排序，从而达到排序的目的


- 时间复杂度: $O(n\cdot{k})$，$k$ 是数字的位数
- 空间复杂度: $O(n+k)$
- 稳定的排序算法
