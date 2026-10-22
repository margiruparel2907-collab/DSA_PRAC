
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int code) {
    if (root == NULL) {
        Node* temp = new Node;
        temp->data = code;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    if (code < root->data) {
        root->left = insert(root->left, code);
    } else if (code > root->data) {
        root->right = insert(root->right, code);
    }

    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    int n, code;

    cout << "Enter number of books: ";
    cin >> n;

    cout << "Enter book codes: ";

    for (int i = 0; i < n; i++) {
        cin >> code;
        root = insert(root, code);
    }

    cout << "Inorder sequence: ";
    inorder(root);

    cout << endl;
    return 0;
}
