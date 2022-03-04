import java.util.Vector;

public class SEBT {
    static class Node {
        int key;
        Node left, right;
    }

    static Node newNode(int key) {
        Node temp = new Node();
        temp.key = key;
        temp.left = temp.right = null;
        return (temp);
    }

    static Vector<Boolean> struc;
    static Vector<Integer> data;
    static Node root;

    static void EncodeSuccinct(Node root) {

        // If root is null, put 0 in
        // structure array and return
        if (root == null) {
            struc.add(false);
            return;
        }

        // Else place 1 in structure array,
        // key in 'data' array and recur
        // for left and right children
        struc.add(true);
        data.add(root.key);
        EncodeSuccinct(root.left);
        EncodeSuccinct(root.right);
    }

    static Node DecodeSuccinct() {
        if (struc.size() <= 0)
            return null;

        // Remove one item from structure list
        boolean b = struc.get(0);
        struc.remove(0);

        // If removed bit is 1,
        if (b == true) {

            // Remove an item from data list
            int key = data.get(0);
            data.remove(0);

            // Create a tree node with the
            // removed data
            Node root = newNode(key);

            // And recur to create left and
            // right subtrees
            root.left = DecodeSuccinct();
            root.right = DecodeSuccinct();
            return root;
        }
        return null;
    }

    static void preorder(Node root) {
        if (root != null) {
            System.out.print("key: " + root.key);
            if (root.left != null)
                System.out.print(" | left child: " +
                        root.left.key);
            if (root.right != null)
                System.out.print(" | right child: " +
                        root.right.key);
            System.out.println();

            preorder(root.left);
            preorder(root.right);
        }
    }
}
