#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

bool isBST(Node* root, Node* min = NULL, Node* max = NULL) {
    if (!root) 
        return true;

    if ((min && root->data <= min->data) || (max && root->data >= max->data)) 
        return false;

    return isBST(root->left, min, root) && isBST(root->right, root, max);
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);

    if (isBST(root)) 
        cout << "This is a BST." << endl;
    else 
        cout << "This is NOT a BST." << endl;

    return 0;
}
