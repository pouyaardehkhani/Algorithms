# Succinct Encoding of Binary Tree
A succinct encoding of Binary Tree takes close to minimum possible space. The number of structurally different binary trees on n nodes is n’th Catalan number. For large n, this is about 4n; thus we need at least about log2 4 n = 2n bits to encode it. A succinct binary tree therefore would occupy 2n+o(n) bits.

One simple representation which meets this bound is to visit the nodes of the tree in preorder, outputting “1” for an internal node and “0” for a leaf. If the tree contains data, we can simply simultaneously store it in a consecutive array in preorder.

**Below is algorithm for encoding:**

```
function EncodeSuccinct(node n, bitstring structure, array data) {
    if n = nil then
        append 0 to structure;
    else
        append 1 to structure;
        append n.data to data;
        EncodeSuccinct(n.left, structure, data);
        EncodeSuccinct(n.right, structure, data);
}
```

**Below is algorithm for decoding:**

```
function DecodeSuccinct(bitstring structure, array data) {
    remove first bit of structure and put it in b
    if b = 1 then
        create a new node n
        remove first element of data and put it in n.data
        n.left = DecodeSuccinct(structure, data)
        n.right = DecodeSuccinct(structure, data)
        return n
    else
        return nil
}
```

