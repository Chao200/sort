CXX = g++
TARGET = build
OBJ = main.o util.o merge_sort.o quick_sort.o heap_sort.o insert_sort.o count_sort.o bucket_sort.o radix_sort.o

CXXFLAGS = -c -Wall -std=c++11

$(TARGET) : $(OBJ)
	$(CXX) -o $(TARGET) $(OBJ)

main.o: main.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

util.o: ./util/util.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

merge_sort.o: ./mergeSort/merge_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

quick_sort.o: ./quickSort/quick_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

heap_sort.o: ./heapSort/heap_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

insert_sort.o: ./insertSort/insert_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

count_sort.o: ./countSort/count_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

bucket_sort.o: ./bucketSort/bucket_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

radix_sort.o: ./radixSort/radix_sort.cpp
	$(CXX)  $(CXXFLAGS) $(^) -o $(@)

.PHONY: clean
clean:
	rm -f *.o $(TARGET)