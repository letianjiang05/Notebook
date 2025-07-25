# Asymptotic Notation
- time complexity
- space complexity

|Symbol|Think of it as...|	Describes|
|---|---|---|
|$O(f(n))$|≤ (less than or equal to)|Worst-case ceiling|
|$Ω(f(n))$|≥ (greater than or equal to)|Best-case floor|
|$Θ(f(n))$|≈ (approximately equal to)|Average/tight bound|
|$o(f(n))$|< (strictly less than)|Grows slower than f(n)|
|$ω(f(n))$|> (strictly more than)|Grows faster than f(n)|

# Big O Notation
- Total Time = $O(1) + O(n) + O(1) = O(n)$

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
for(int i = 0; i < 2*n; i++) {
}

for(int i = 0; i < n; i++) {
    for(int j = 0; j < 2; j++){
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
        for ( int k = 1; k < n; k *= 3 ) {
        }
    }
}
```
$O(n \log n)$
```C++
for(int j=1; j*j<=n; j++)
```
$O(\sqrt n)$
```C++
int b=0;
for(int i=0; i<n; i++) 
    for(int j=0; j<i*n; j++) 
       b=b+5;
```
$0 + n + 2n + 3n + 4n + ... + n(n-1) = n \cdot \frac{(n-1)n}{2} = O(n^3)$
```C++
int t=0;
for(int i=1; i<=n; i++) // n+1
   for(int j=0; j*j<4*n; j++) // n*4n1/2
      for(int k=1; k*k<=9*n; k++) // n*4n1/2 * 9n1/2
        t++;
```
$O(𝑛^2)$
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
The outer loop starts with $k$ initialized to $n^2$, but notice that $k$ is halved on each iteration. This means that the number of iterations of the outer loop will be $\log (n^2) = 2 \log n = O(\log n)$, so the outer loop runs only $O(\log n)$ times. That inner loop does do $O(n^2)$ work, so the total runtime is $O(n^2 \log n)$.