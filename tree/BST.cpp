#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* Mroot;

Node* GetNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* Insert(Node* root, int data){
    
    if(root == NULL){
        root = GetNewNode(data);
    }else if(data <= root->data){
        root->left = Insert(root->left, data);
    }else{
        root->right = Insert(root->right, data);
    }

    return root;
}

bool Search(Node* root, int data){
    if(root == NULL){
        return false;
    }else if(root->data == data){
        return true;
    }else if(data <= root->data){
        return Search(root->left, data);
    }else{
        return Search(root->right, data);
    }
}

int main(){

    Mroot = Insert(Mroot, 15);
    Insert(Mroot, 10);
    Insert(Mroot, 20);
    Insert(Mroot, 25);
    Insert(Mroot, 8);
    Insert(Mroot, 12);


    int n;
    cin >> n;

    if(Search(Mroot, n) == true){
        cout << "NYES\n";
    }else{
        cout << "NO\n";
    }



    return 0;
}