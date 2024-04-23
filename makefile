CXX = g++
TARGET = build
OBJ = main.o util.o merge_sort.o quick_sort.o

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


.PHONY: clean
clean:
	rm -f *.o $(TARGET)