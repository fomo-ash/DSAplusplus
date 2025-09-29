#include<iostream>
using namespace std;

struct Node{
    char ch;
    int freq;
    Node* left;
    Node* right;

    Node(char character, int frequency
    ){
        ch=character;
        freq=frequency;
        left= right= nullptr;
    }

    void printCodes(Node* root, string code){
        if(!root)return;

        if(!root->left && !root->right){
            co
        }
    }

}