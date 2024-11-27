#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

void dataRead(IntBinaryTree&);
void addData(IntBinaryTree&);
void deleteData(IntBinaryTree&);
void searchData(IntBinaryTree);
void modifyData(IntBinaryTree&);

int main() {
    IntBinaryTree tree;
    int choice;

    dataRead(tree);

    while (choice != 0)
    {
        do
        {
            cout << "BST Menu:" << endl;
            cout << "[1] Add" << endl;
            cout << "[2] Delete" << endl;
            cout << "[3] Search" << endl;
            cout << "[4] Modify" << endl;
            cout << "[0] Exit" << endl;
            cout << "Enter your choice:" << endl;
            cin >> choice;
        } while (choice < 0 || choice > 4);
        
        switch (choice)
        {
        case 1:
            
            break;
        case 2:

            break;
        case 3:
            
            break;
        case 4:
            
            break;
        default:
            break;
        }
    }

    return 0;
}