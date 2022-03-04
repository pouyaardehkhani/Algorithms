#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    struct Node *left, *right;
};

Node *newNode(int key) {
    Node *temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return (temp);
}

void EncodeSuccinct(Node *root, list<bool> &struc, list<int> &data) {
    // If root is NULL, put 0 in structure array and return
    if (root == NULL) {
        struc.push_back(0);
        return;
    }

    // Else place 1 in structure array, key in 'data' array
    // and recur for left and right children
    struc.push_back(1);
    data.push_back(root->key);
    EncodeSuccinct(root->left, struc, data);
    EncodeSuccinct(root->right, struc, data);
}

Node *DecodeSuccinct(list<bool> &struc, list<int> &data) {
    if (struc.size() <= 0)
        return NULL;

    // Remove one item from structure list
    bool b = struc.front();
    struc.pop_front();

    // If removed bit is 1,
    if (b == 1) {
        // remove an item from data list
        int key = data.front();
        data.pop_front();

        // Create a tree node with the removed data
        Node *root = newNode(key);

        // And recur to create left and right subtrees
        root->left = DecodeSuccinct(struc, data);
        root->right = DecodeSuccinct(struc, data);
        return root;
    }

    return NULL;
}

void preorder(Node* root) {
    if (root) {
        cout << "key: " << root->key;
        if (root->left)
            cout << " | left child: " << root->left->key;
        if (root->right)
            cout << " | right child: " << root->right->key;
        cout << endl;
        preorder(root->left);
        preorder(root->right);
    }
}