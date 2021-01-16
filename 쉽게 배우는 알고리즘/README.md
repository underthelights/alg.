Prof. Byung-Ro Moon 
*****

### TOC
- ch01: 알고리즘 설계와 분석의 기초 
- ch02: 점화식과 점근적 복잡도 분석 
- [ch03: 정렬](#3-sorting)
- [ch04: 선택 알고리즘](#4.-Selection)
- ch05: 검색 트리 
- ch06: 해시 테이블 
- ch07: 상호배타적 집합의 처리 
- ch08: 동적 프로그래밍 
- ch09: 그래프 알고리즘 
- ch10: 문자열 매칭 
- ch11: NP-완비 
- ch12: 상태공간 트리의 탐색 
- Textbook problem solutions [pdf]

*****

### 3. Sorting

#### 3.1. Selection Sort
```
selectionSort(A[], n) ▷ 배열 A[1 ... n]을 정렬한다 
{
  for last ← n downto 2 { -------- 1
    A[1 ... last] 중 가장 큰 수 A[k]를 찾는다; -------- 2
    A[k] ↔ A[last]; ▷ A[k]와 A[last]의 값을 교환 -------- 3
  } 
}
```
- 수행시간:
  — 1의 for 루프는 n-1번 반복
  — 2에서 가장 큰 수를 찾기 위한 비교 횟수: n-1,n-2,...,2,1 
  — 3의 교환은 상수 시간 작업
- time complexity: (n-1)+(n-2)+···+2+1 = $O(n^2)$

#### 3.2. Bubble Sort

```
bubbleSort(A[], n) ▷ A[1 ... n]을 정렬한다 {
for last ← n downto 2 ----------------- 1 for i ← 1 to last-1 ------------------ 2 if (A[i] > A[i+1]) then A[i] ↔ A[i+1]; ▷ 원소 교환 -- 3
}
```
 수행시간:
— 1의 for 루프는 n-1번 반복
—2의for루프는각각 n-1,n-2,...,2,1번반복 — 3은 상수 시간 작업
 (n-1)+(n-2)+···+2+1 = O(n2)

#### 3.3. Insertion Sort

```
insertionSort(A[], n) ▷ A[1 ... n]을 정렬한다 {
for i ← 2 to n ---------------------- 1 A[1 ... i]의 적당한 자리에 A[i]를 삽입한다; ----------- 2
}

```
 수행시간:
— 1의 for 루프는 n-1번 반복
— 2의 삽입은 최악의 경우 i-1회 비교 Worst case: 1+2+···+(n-2)+(n-1) = O(n2)
Average case: 1⁄2 (1+2+···+(n-2)+(n-1)) = O(n2)

#### 3.4. Merge Sort

```
mergeSort(A[ ], p, r) ▷ A[p ... r]을 정렬한다 {
if (p < r) then {
q ← (p+q)/2;
merge(A, p, q, r); ------------------ 4
} }
merge(A[ ], p, q, r) {
Mergesort
----------------------- 1 mergeSort(A, p, q); ---------------- 2 mergeSort(A, q+1, r); -------------- 3

```
▷ p, q의 중간 지점 계산 ▷ 전반부 정렬
▷ 후반부 정렬
▷ 병합
정렬되어 있는 두 배열 A[p ... q]와 A[q+1 ... r]을 합하여
정렬된 하나의 배열 A[p ... r]을 만든다. }

#### 3.5. Quicksort

```
quickSort(A[], p, r) ▷ A[p ... r]을 정렬한다 {
  if (p < r) then {
    q = partition(A, p, r); ▷ 분할
  } 
}
quickSort(A, p, q-1); 
quickSort(A, q+1, r);

```
▷ 왼쪽 부분배열 정렬 ▷ 오른쪽 부분배열 정렬


```partition(A[], p, r) {
배열 A[p ... r]의 원소들을 A[r]을 기준으로 양쪽으로 재배치하고 A[r]이 자리한 위치를 return 한다;
}

```
#### 3.6. Heap Sort

```
heapSort(A[ ], n) {
  buildHeap(A, n);
  for i ← n downto 2 {
    A[1] ↔ A[i];
    heapify(A, 1, i-1); }
    ▷ 힙 만들기 ▷ 교환
  }
}
  
```
- time complexity : O(nlogn)
        
#### 3.7. Counting Sort

```
countingSort(A[ ], n) ▷ simple version { 
  ▷A[]:입력배열, n:입력크기
  for i = 1 to k C[i] ← 0;
  for j = 1 to n C[A[j]]++;
  ▷ 이 지점에서 C[i]:값이 i인 원소의 총수 
  for i = 1 to k
}

```

Simple version
.
print C[i] i’s; ▷ i를 C[i]번 출력
       원리에
집중하기 위한 임
 
#### 3.8. Radix Sort
```
radixSort(A[ ], d) {
Radix Sort
for j = d downto 1 {
Do a stable sort on A[ ] by jth digit;
} }
```
 Stable sort
— 같은 값을 가진 item들은 sorting 후에도 원래의 순서가 유지되는 성질을 가진 sort를 일컫는다. 

### 4. Selection
