# Asymptotic Notation
    - time complexity
    - space complexity
- Growth Rate

|Symbol|Think of it as...|	Describes|
|---|---|---|
|$O(f(n))$|≤ (less than or equal to)|Worst-case ceiling|
|$Ω(f(n))$|≥ (greater than or equal to)|Best-case floor|
|$Θ(f(n))$|≈ (approximately equal to)|Average/tight bound|
|$o(f(n))$|< (strictly less than)|Grows slower than f(n)|
|$ω(f(n))$|> (strictly more than)|Grows faster than f(n)|

# Big O Notation
- Total Time = $O(1) + O(n) + O(1) = O(n)$

|Operation|Array (unsorted)|Array (sorted)|Hash Table|Binary Search Tree|
|---|---|---|---|---|
|Insert|$O(1)$|$O(n)$|$O(1)$|$O(log n)$|
|Search|$O(n)$|$O(log n)$|$O(1)$|$O(log n)$|
|Delete|$O(n)$|$O(n)$|$O(1)$|$O(log n)$|

- Halving Process: $O(log n)$
- Merge sort: Divide and conquer $O(n log n)$
    - Divide $O(log n)$
    - Conquer / Merge $O(n)$
|Notation|Name|Example Use Case|
|---|---|---|
|$O(1)$|Constant time|Accessing an array index|
|$O(log n)$|Logarithmic|Binary Search|
|$O(n)$|Linear|Linear Search|
|$O(n log n)$|Linearithmic|Merge Sort, Quick Sort|
|$O(n²)$|Quadratic|Bubble Sort, Nested loops|
|$O(2ⁿ)$|Exponential|Recursive Fibonacci|
|$O(n!)$|Factorial|Traveling Salesman Brute-force|

```C++
//linear
for(int i = 0; i < 2*n; i++) {
    cout << i << endl;
}
```
$O(2n) = O(n)$

```C++
for(int i = 0; i < n; i++) {
    for(int j = 0; j < 2; j++){
        //do stuff
    }
}
```
$O(2n) = O(n)$
```C++
for(int i = 1; i < n; i *= 2) {
    cout << i << endl;
}
```
$O(log n)$
```C++
for ( int i = 1; i < n*n*n; i *= n ) {  3+1
    for ( int j = 0; j < n; j += 2 ) { 3* (n/2 +1)
        for ( int k = 1; k < n; k *= 3 ) {  3*n/2*log3n +1
        // constant number C of operations
        }
    }
}
```
$O(n log n)$
```C++
 int x=0; //constant
 for(int i=4*n; i>=1; i--)// 4n+1
     x=x+2*i; // 4n
```
$O(n)$, The loop runs O(n) times and does O(1) work per iteration.
```C++
int y=0; 
for(int j=1; j*j<=n; j++)
    y++; //constant
```
$O(\sqrt(n))$
```C++
int z=0;
int x=0;
for (int i=1; i<=n; i=i*3){
   z = z+5;
   z++;
   x = 2*x;
}`
```
 Think about the values of i as the loop progresses. It will take on the series of values 1, 3, 9, 27, 81, 243, ..., 3k. Since i is tripling on each iteration, it takes on successive powers of three.

The loop clearly only does O(1) work per iteration, so the main question here is how many total iterations there will be. The loop will stop when i > n. If we let k be some arbitrary iteration of the loop, the value of i on iteration k will be 3k. The loop stops when 3k > n, which happens when k > log3 n. Therefore, the number of iterations is only O(log n), so the total complexity is O(log n).
```C++
int b=0; //constant
for(int i=n; i>0; i--) 
   for(int j=0; j<i; j++) 
      b=b+5;
```
You're actually doubly-counting a lot of the work you need to do. You're correct that the inner loop will run n + (n-1) + (n-2) + ... + 1 times, which is O(𝑛^2) times, but you're already summing up across all iterations of the outer loop. You don't need to multiply that value by O(n) one more time. The most accurate answer would be O(n2).
```C++
int b=0;
for(int i=0; i<n; i++) 
    for(int j=0; j<i*n; j++) 
       b=b+5;
```
The inner loop will run 0 + n + 2n + 3n + 4n + ... + n(n-1) = n(0 + 1 + 2 + ... + n - 1) times, so the total work done is O(𝑛^3). You shouldn't multiply by the number of times the outer loop runs because you're already summing up across all iterations. The most accurate runtime would be O(𝑛^3)
```C++
int t=0;
for(int i=1; i<=n; i++) // n+1
   for(int j=0; j*j<4*n; j++) // n*4n1/2
      for(int k=1; k*k<=9*n; k++) // n*4n1/2 * 9n1/2
        t++;
```
Look at the second loop. This actually runs O(√n) times using the same logic as one of the earlier parts. That third inner loop also runs O(√n) times, and so the total work done will be O(𝑛^2).
```C++
int a = 0;
int k = n*n;
while(k > 1) 
{
    for (int j=0; j<n*n; j++) 
       { a++; }
     k = k/2;
}
```
The outer loop starts with k initialized to n2, but notice that k is halved on each iteration. This means that the number of iterations of the outer loop will be log (n2) = 2 log n = O(log n), so the outer loop runs only O(log n) times. That inner loop does do O(𝑛^2) work, so the total runtime is O(𝑛^2 log n).


