```
Algorithm shortestPath()
n = number of nodes in the graph;
for i = 1 to n
    cost[vi] = w(v1, vi);
VS = { v1 };
for step = 2 to n {
    find the smallest cost[vi] s.t. vi is not in VS;
    include vi to VS;
    for (all nodes vj not in VS) {
        if (cost[vj] > cost[vi] + w(vi, vj))
            cost[vj] = cost[vi] + w(vi, vj);
    }
}
```