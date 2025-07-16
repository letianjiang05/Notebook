# Recursive
```
Algorithm dfs(v)
print v; // you can do other things!
mark v as visited;
for (each unvisited node u adjacent to v)
    dfs(u);
```
# Non-Recursive
```
Algorithm dfs(v)
s.createStack();
s.push(v);
mark v as visited;
while (!s.isEmpty()) {
    let x be the node on the top of the stack s;
    if (no unvisited nodes are adjacent to x)
        s.pop(); // blacktrack
    else {
        select an unvisited node u adjacent to x;
        s.push(u);
        mark u as visited;
    }
}
