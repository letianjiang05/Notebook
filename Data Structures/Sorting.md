# Sorting

# Insertion Sort
```
INSERTION-SORT (A, n)
    for j ← 2 to n
        do key ← A[j]
            i ← j – 1
            while i > 0 and A[i] > key
                do A[i+1] ← A[i]
                    i ← i – 1
            A[i+1] = key
```

# Shell Sort
- Improved Insertion Sort
- $h = 1$: insertion sort
## PseudoCode
```
ShellSort(A, n)
    h ← 1
    while h ≤ n {
        h ← 3h + 1
    }
    repeat
        h ← h/3
        for i = h to n do {
            key ← A[i]
            j ← i
            while key < A[j - h] {
                A[j] ← A[j - h]
                j ← j - h
                if j < h then break
            }
            A[j] ← key
        }
    until h ≤ 1
```

# Bubble Sort
- Compare pairs of adjacent elements
    - If out of order, swap them
- After the first pass
    - the largest element must be in the correct place
- After the second pass
    - the second largest element must be in the correct place

## PseudoCode
```
for i←1 to length[A]
    for  j←length[A] down to i+1
      if (A[j] <  A[j-1])
        swap(A[j] ,A[j-1]);
```
## Time Complexity
|Case|Time Complexity|
|---|---|
|Best, sorted|$ O(N-1) = O(n) $|
|Worst, reverse order|$ O(\frac{N(N-1)}{2}) = O(n^2) $|
|Avg |$ O(n^2) $|
## Quiz
2. How does the number of comparisons required change as the pass number increases?
   - Each pass requires one fewer comparison than the last.
3. How does the algorithm know when the list is sorted?
   - When a pass with no exchanges occurs.
4. What is the maximum number of comparisons required for a list of 10 numbers?
   - 9 comparisons, then 8, 7, 6, 5, 4, 3, 2, 1 so total 45


# Selection Sort
1. Find $x_{min}$
2. $x_1 \gets x_{min}$
3. Find $x_{min}$ in the remaining elements
```
SELECTION-SORT(A, n)
    for i ← 1 to n - 1
        k ← i
        for j ← i + 1 to n  {Find the i th smallest element.}
            if A[j] < A[k] then k ← j
        end for
        if k ≠ i then interchange A[i] and A[k]
    end for
```
## Pros
- The simplest sorting techniques. 
- A good algorithm to sort a small number of elements
- An incremental algorithm – induction method
## Cons
- Not efficient for large data sets
## Time Complexity
$T(n) = \sum_{i=1}^{n-1} find-min + swap = \frac{n(n-1)}{2} = O(n^2)$

# Divide and conquer
- **Divide** the problem into sub-problems
- **Conquer** the sub-problems
- **Combine** the solutions
# Merge Sort (Divide and conquer)
- **Divide**: Divide the n-element sequence to be sorted into two subsequences of n/2 elements each
- **Conquer**: Sort the two subsequences
- **Combine**: Merge the two sorted subsequences
## merge two Arrays
- Three counters: Actr, Bctr, and Cctr
- Time: $O(m1 + m2)$
- linear extra memory, additional work to copy to the temporary array and back

```
MERGE(A, p, q, r)
    n1 ← q - p + 1
    n2 ← r - q
    create arrays L[1 .. n1 + 1] and R[1 .. n2 + 1]
    for i ← 1 to n1
        do L[i] ← A[p + i - 1]
    for j ← 1 to n2
        do R[j] ← A[q + j]
    L[n1 + 1] ← ∞
    R[n2 + 1] ← ∞
    i ← 1
    j ← 1
    for k ← p to r
        do if L[i] ≤ R[j]
            then A[k] ← L[i]
                i ← i + 1
            else A[k] ← R[j]
                j ← j + 1
```
```
MERGE-SORT(A, p, r)
    if p < r
        q ← ⌊(p + r) / 2⌋
        MERGE-SORT(A, p, q)
        MERGE-SORT(A, q + 1, r)
        MERGE(A, p, q, r)
``` 
## Time Complexity
$T(n) = 2T(\frac{n}{2}) + O(n)$

|Case|Time Complexity|
|---|---|
|Best, sorted|$O(n \log n)$|
|Worst, reverse order|$O(n \log n)$|
|Avg |$O(n \log n)$|
# Quick Sort (Divide and Conquer)
1. **Divide**: Pick pivot $v$
    - $v$: Median of array, better creates two even sized partitions
    - Partition S – {v} into two disjoint groups
        - $S_1 < v$
        - $S_2 > v$
2. **Conquer**: Recursively quicksort $S_1$ and $S_2$
3. **Combine**: Concatenate $S_1$, $v$, and $S_2$.

- An obvious difference is that we do most of the work in the divide stage, with no work at the combine one.

## Pros
- Sorts in place
- Sorts $O(n \log n)$ in the average case
- Very efficient in practice , it’s quick
## Cons
- Sorts $O(n^2)$ in the worst case
- the worst case doesn’t happen often … sorted
## PseudoCode
```
QUICKSORT(A, p, r)
    if p < r
        q ← PARTITION(A, p, r)
        QUICKSORT(A, p, q - 1)
        QUICKSORT(A, q + 1, r)
```
```
PARTITION(A, p, r)
    x ← A[r]
    i ← p - 1
    for j ← p to r - 1
        if A[j] ≤ x
            i ← i + 1
            swap A[i] and A[j]
    swap A[i + 1] and A[r]
    return i + 1
```

# Counting Sort
- Assumption: n input elements are integers in the range of 0 to k (integer).

1|2|3|4|5|6|7|8|
|---|---|---|---|---|---|---|---|
|2|5|3|0|2|3|0|3|
|0|0|2|2|3|3|5|0|


|0|1|2|3|4|5|
|---|---|---|---|---|---|
|2|0|2|3|0|1|
|**2**|2|4|**7**|7|8|
|**1**|2|4|**5**|7|8|

```
COUNTING-SORT(A, B, k)
    for i ← 0 to k
        do C[i] ← 0
    for j ← 1 to length[A]
        do C[A[j]] ← C[A[j]] + 1
    ▷ C[i] now contains the number of elements equal to i.
    for i ← 1 to k
        do C[i] ← C[i] + C[i - 1]
    ▷ C[i] now contains the number of elements less than or equal to i.
    9  for j ← length[A] downto 1
    10     do B[C[A[j]]] ← A[j]
    11     C[A[j]] ← C[A[j]] - 1
```
# Radix Sort
- Sort on the least significant digit first
```
RADIX-SORT(A, d)
    for i ← 1 to d
        do use a stable sort to sort array A on digit i
```
```
329 -> 9 -> 2 -> 3
457 -> 7 -> 5 -> 4
```
- $d = 3$ digits
- $n = 2$ numbers
- $k = 10$ (0-9 digits)
- RADIX-SORT correctly sorts these numbers in $Θ(d(n+k))$ time
- Use counting sort to sort each digit: $Θ(n+k)$
- When d is constant and k=O(n) $Θ(n)$

# Bucket Sort
- Bucket sort runs in linear time when the input is drawn from a uniform distribution over the interval $[0, 1)$
    - Divide $[0,1)$ into $n$ equal-sized subintervals (buckets)
    - Distribute the $n$ numbers into the buckets
    - Sort the numbers in each bucket
    - Go through the buckets in order, list the elements in each
```
0: 
1: 0.17
2: 0.26 -> 0.28
3: 0.35
...
9: 0.99
```
## PseudoCode
- $A[1..10]$
- $B[0..9]$
```
BUCKET-SORT(A)
    n ← length[A]
    for i ← 1 to n
        do insert A[i] into list B[⌊nA[i]⌋]
    for i ← 0 to n - 1
        do sort list B[i] with insertion sort
    concatenate the lists B[0], B[1], ..., B[n - 1] together in order
```
## Time Complexity
As long as the input has the property that the sum of the squares of the bucket size is linear in the total number of elements, bucket sort will run in linear time

# Summary
|Algorithm|Best|Worst|Average|
|---|---|---|---|
|Insertion Sort|Sorted, $O(n)$|Reverse sorted, $O(n^2)$|$O(n^2)$|
|Shell Sort|$O(n \log n)$|$O(n^2)$|$O(n \log n)$|
|Bubble Sort|$O(n)$|$O(n^2)$|$O(n^2)$|
|Merge Sort|$O(n \log n)$|$O(n \log n)$|$O(n \log n)$|
|Quick Sort|$v$ is median $O(n \log n)$|$v$ is min or max $O(n^2)$|$O(n \log n)$|
