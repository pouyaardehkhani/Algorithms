# K Centers Problem(Greedy Approximate Algorithm)
Given n cities and distances between every pair of cities, select k cities to place warehouses (or ATMs or Cloud Server) such that the maximum distance of a city to a warehouse (or ATM or Cloud Server) is minimized. 

### The 2-Approximate Greedy Algorithm: 
```
1) Choose the first center arbitrarily. 
2) Choose remaining k-1 centers using the following criteria. 
       Let c1, c2, c3, … ci be the already chosen centers. Choose 
       (i+1)’th center by picking the city which is farthest from already 
       selected centers, i.e, the point p which has following value as maximum 
                 Min[dist(p, c1), dist(p, c2), dist(p, c3), …. dist(p, ci)] 
```
