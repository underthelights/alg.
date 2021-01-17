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

#### 4.1. 평균 선형시간 Selection Algorithm
```
select (A, p, r, i){
  ▷ 배열 A[p ... r]에서 i번째 작은 원소를 찾는다 
  if(p=r)thenreturnA[p]; ▷원소가하나뿐인경우. i는반드시1.
  q ← partition(A, p, r) ;
  k←q-p+1; ▷k:기준원소가전체에서k번째작은원소임을의미
  if (i < k) 
    then return select(A, p, q-1, i) ; ▷ 왼쪽 그룹으로 범위를 좁힘
  }
  else if (i = k) 
    then return A[q] ; else return select(A, p, q-1, i) ;
  ▷ 기준원소가 바로 찾는 원소임 ▷ 오른쪽 그룹으로 범위를 좁힘
```
- 평균 수행시간: Θ(n) 
- 최악의 경우 수행시간: Θ(n2)

#### 4.2. Linear Select

```
linearSelect (A, p, r, i) {
▷ 배열 A[p...r]에서 i번째 작은 원소를 찾는다 
1원소의 총 수가 5개 이하이면 원하는 원소를 찾고 알고리즘을 끝낸다. 
2 전체 원소들을 5개씩의 원소를 가진 개의 그룹으로 나눈다.
(원소의 총수가 5의 배수가 아니면 이중 한 그룹은 5개 미만이 된다.) 
3 각 그룹에서 중앙값을 (원소가 5개이면 3번째 원소) 찾는다.
이렇게 찾은 중앙값들을 m1, m2, ..., m n/5 이라 하자. 
4m1,m2,...,mn/5 들의 중앙값 M을 재귀적으로 구한다.
원소의 총수가 홀수면 중앙값이 하나이므로 문제가 없고, 원소의 총수가 짝수일 경우는 두 중앙값 중 아무거나 임의로 선택한다. 
▷ call linearSelect( ) 5 M을 기준원소로 삼아 전체 원소를 분할한다. (M보다 작거나 같은 것은
M의 왼쪽에, M보다 큰 것은 M의 오른쪽에 오도록)
6 분할된 두 그룹 중 적합한 쪽을 선택하여 단계 1~6을 재귀적으로 반복한다. ▷ 
call linearSelect( ) 
}

```
### 5. Search Tree

#### 5.1. BST

t: 트리의 루트 노드
x: 검색하고자 하는 키
r: 새 노드

##### 5.1.1. 검색



```
treeSearch(t, x) {
  if (t=NIL or key[t]=x) then return t; if (x < key[t])
  then return treeSearch(left[t], x); else return treeSearch(right[t], x);
}
```


##### 5.1.2. 삽입

```
treeInsert(t, x) {
  if (t=NIL) then { 
    key[r] ← x;
    return r; 
  }
  if (x < key(t))
    then {
      left[t] ← treeInsert(left[t], x); 
      return t;
    } 
    else {
      right[t] ← treeInsert(right[t], x); 
      return t;
    }
}

```
##### 5.1.3. 삭제 
t: 트리의 루트 노드
r: 삭제하고자 하는 노드 ▷ Case 1

```
Sketch-TreeDelete(t, r) {
  if (r이 리프 노드) 
    then 그냥 r을 버린다;
  else if (r의 자식이 하나만 있음) 
    then r의 부모가 r의 자식을 직접 가리키도록 한다;
  else 
    r의 오른쪽 서브트리의 최소원소 노드 s를 삭제하고, s를 r 자리에 놓는다;
}
```

t: 트리의 루트 노드
r: 삭제하고자 하는 노드 p: r의 부모 노드


```
treeDelete(t, r, p) {
  if (r = t) then root ← deleteNode(t); else if (r = left[p])
  then left[p] ← deleteNode(r); else right[p] ← deleteNode(r);
} 

deleteNode(r) {
  if (left[r] = right[r] = NIL) then return NIL;
  else if (left[r] = NIL and right[r] ≠ NIL)
    then return right[r]; 
  else if (left[r] ≠ NIL and right[r] = NIL) 
    then return left[r]; 
  else {
    s ← right[r];
  while (left[s] ≠ NIL){
    parent ← s; s ← left[s];} key[r] ← key[s];
    if (s = right[r]) then right[r] ← right[s]; 
    else left[parent] ← right[s];
  return r; 
  }
}

```

#### B Tree
##### 삽입
BTreeInsert(t, x) {
B-Tree에서의 삽입
▷ t:트리의루트노드
x를 삽입할 리프 노드 r을 찾는다; x를 r에 삽입한다;
if (r에 오버플로우 발생) then clearOverflow(r);
} clearOverflow(r) {
if (r의 형제 노드 중 여유가 있는 노드가 있음) then {r의 남는 키를 넘긴다}; else {
} }
r을 둘로 분할하고 가운데 키를 부모 노드로 넘긴다;
if (부모 노드 p에 오버플로우 발생) then clearOverflow(p);

##### 삭제

```
BTreeDelete(t, x, v) {
▷ t : 트리의 루트 노드
  if (v가 리프 노드 아님) 
    then {
      x의 직후원소 y를 가진 리프 노드를 찾는다; x와 y를 맞바꾼다;
    ▷ x : 삭제하고자 하는 키 ▷ v : x를 갖고 있는 노드
  }
리프노드에서 x를 제거하고 이 리프노드를 r이라 한다; 
  if (r에서 언더플로우 발생) 
    then clearUnderflow(r);
  } clearUnderflow(r) 
  {
  if ( r의 형제 노드 중 키를 하나 내놓을 수 있는 여분을 가진 노드가 있음) 
    then { r이 키를 넘겨받는다;
  }else {
  } 
  }
r의 형제 노드와 r을 합병한다;
if (부모 노드 p에 언더플로우 발생) then clearUnderflow(p);

```

### 6. 

```
```
### 7. 

```
```
### 8. 

```
```
### 9. 

```
```
### 10. 

```
```
### 11. 

```
```
### 12. 
### 13. 
