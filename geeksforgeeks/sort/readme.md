### 1. terminology
#### 1.1 in-place sorting
	- (definition)
		- 출력을 생성하는 데 일정한 추가 공간을 사용합니다 (given array만 수정). 목록 내에서 요소의 순서를 수정하여 목록을 정렬합니다.
	- ex.
├── in-place 
│   ├── Insertion sort
│   └── Selection sort
├── NOT in place
│   ├── Merge sort
│   └── Counting Sort

#### 1.2. internal/external sorting
  - External : 정렬해야 하는 모든 데이터를 한 번에 메모리에 저장할 수 없는 경우 
    - 외부 정렬은 대량의 데이터에 사용됩니다. 
    - Merge sort and its transformation
    - sometimes HDD, CD, etc is used as an external storage
  - Internal : 모든 데이터가 메모리에 저장되면 정렬을 내부 정렬이라고 합니다.

#### 1.3. Sorting Algs' Stability
  - Stability


- Selection Sort

![selection sort](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Selection-sort-flowchart.jpg)


- Bubble Sort

![bubble sort](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Bubble-sort-flowchart.jpg)


- Insertion Sort

![ins](https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png)

- merge sort

![merge](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png)

- quick sort
  - [link](https://www.geeksforgeeks.org/quick-sort/)
![qick](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/01/QuickSort2.png)

- Heap Sort
[link](https://www.geeksforgeeks.org/heap-sort/)
Input data: 4, 10, 3, 5, 1
         4(0)
        /   \
     10(1)   3(2)
    /   \
 5(3)    1(4)

The numbers in bracket represent the indices in the array 
representation of data.

Applying heapify procedure to index 1:
         4(0)
        /   \
    10(1)    3(2)
    /   \
5(3)    1(4)

Applying heapify procedure to index 0:
        10(0)
        /  \
     5(1)  3(2)
    /   \
 4(3)    1(4)
The heapify procedure calls itself recursively to build heap in top down manner.
