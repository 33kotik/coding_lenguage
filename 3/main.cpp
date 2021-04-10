#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


using namespace std;

class node {
public:
    string element;
    node *parent;
    node *left;
    node *right;
};

class tree {
public:
    node *start;

    void add(string s) {
        node *cur = start;
        if (cur == nullptr) {
            start = new node;
            start->parent = nullptr;
            start->left = nullptr;
            start->right = nullptr;
            start->element = s;
        } else {
            while (cur->left != nullptr && cur->left != nullptr) {
            }
            if (cur->left != nullptr) {
                cur->left = new node;
                cur->left->parent = cur;
                cur->left->left = nullptr;
                cur->left->right = nullptr;
                cur->left->element = s;
            } else if (cur->right != nullptr) {
                cur->left = new node;
                cur->left->parent = cur;
                cur->left->left = nullptr;
                cur->left->right = nullptr;
                cur->left->element = s;


            }

        }
    }
};

int main() {
    freopen("input.xml", "r+", stdin);
    string inp = "22";
//    while (inp!=EOF) {
    regex nod (R"(<node>)");
    regex lef (R"((left):(/left);)");

    cin>>inp;
    cout<<regex_search(inp,nod);


//    }
    return 0;
}