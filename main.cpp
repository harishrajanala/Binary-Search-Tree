// // Sample driver
// // EE 312 Fall 2018
// //
// // The BST should work for any data type or object.
// // Other user created objects must have the << operator overloaded for 
// // output.
// //

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<int> bst;

    int s;
    inFile >> s;
    while (inFile){ 
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    print(bst.inOrderTraversal());
    cout<<endl;
    print(bst.postOrderTraversal());
    cout<<endl;
    print(bst.preOrderTraversal());
    cout<<endl;
    cout<<"is it empty?"<<bst.isEmpty()<<endl;
    bst.makeEmpty();
    cout<<"is it empty?"<<bst.isEmpty()<<endl;
    cout<<"is it full?"<<bst.isFull()<<endl;
    cout<<"count:"<<bst.countNodes()<<endl;
    
    return 0;
}

