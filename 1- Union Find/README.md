# Quick Find
We use an ***eager approach*** to improve the **connected** method time complexity **O(1)** 
but indoing so we sacrifice the functionality of ***Union*** proccess **O(n)** which make the Union 
too expensive when we have large Union commands.

#### Pseudo Code

```
Data structure.	
	Integer array id[] of length N.
	Interpretation: p and q are connected iff they have the same id.
Find. 
	Check if p and q have the same id.
Union.
	To merge components containing p and q, change all entries
	whose id equals id[p] to id[q].
```

# Quick Union
We use an ***lazy approach*** to implement **Union Find** which makes the **Union** method time complexity **O(N †)** († includes cost of finding roots)
and ***connected*** method time complexity **O(n)** (in worst case) which make the **Quick Union** 
too expensive.

### why is so expensive?

#### Quick-find defect.

* Union too expensive (N array accesses).
* Trees are flat, but too expensive to keep them flat.

#### Quick-union defect.

* Trees can get tall.
* Find too expensive (could be N array accesses).

#### Pseudo Code

```
Data structure.	
	Integer array id[] of length N.
	Interpretation: id[i] is parent of i.
	Root of i is id[id[id[...id[i]...]]].
Find. 
	Check if p and q have the same root.
Union.
	To merge components containing p and q,
	set the id of p's root to the id of q's root.
```

# Weighted quick union
To improve the performance of Quick-union we add weights to avoid tall trees, keep track of 
size of each tree, balance by linking root of smaller tree to root of larger tree.

#### Analysis
Time complexity of **union** is **O(lg N)**.

Time complexity of **connected** is **O(lg N †)**. († includes cost of finding roots)

# QU + path compression(QUPC)
For further improvment if we add **path compression** to **Quick Union**, we would have a better algorithm.

```
Simpler one-pass variant: Make every other node in path point to its
grandparent (thereby halving path length).

private int root(int i)
{
	while (i != id[i]){
		id[i] = id[id[i]];
		i = id[i];
	}
	return i;
}
```

# Weighted quick union + path compression(WQUPC)
In here we simply add **path compression** to **weighted Quick-union**.

# Summary

| algorithm | worst-case time |
| :-------: | :-------------:|
| quick-find | M N |
| quick-union | M N |
| weighted QU | N + M log N |
| QU + path compression | N + M log N |
| weighted QU + path compression | N + M lg* N |