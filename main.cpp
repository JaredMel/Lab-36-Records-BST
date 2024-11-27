#include <iostream>
#include "IntBinaryTree.h"
#include <fstream>
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
            addData(tree);
            break;
        case 2:
            deleteData(tree);
            break;
        case 3:
            searchData(tree);
            break;
        case 4:
            modifyData(tree);
            break;
        default:
            break;
        }
    }

    return 0;
}

void dataRead(IntBinaryTree &tree)
{
    ifstream ifs;
    string code;
    bool somethin = true;

    ifs.open("codes.txt");
    if (ifs)
    {
        while (somethin)
        {
            if (ifs.eof())
            {
                somethin = false;
                break;
            }
            getline(ifs,code);
            tree.insertNode(code);
        }
    }
}

void addData(IntBinaryTree &tree)
{
    string data;

    cout << "Type the code you wish to add to the tree:" << endl;
    getline(cin, data);

    tree.insertNode(data);
}

void deleteData(IntBinaryTree &tree)
{
    string data;

    cout << "Type the code you wish to delete from the tree:" << endl;
    getline(cin, data);

    tree.remove(data);
}

void searchData(IntBinaryTree tree)
{
    string data;
    bool ans;

    cout << "Type the code you wish to search for in the tree:" << endl;
    getline(cin, data);

    ans = tree.searchNode(data);
    if (ans)
    {
        cout << data << " is in the tree" << endl;
    }
    else
    {
        cout << data << " is not in the tree" << endl;
    }
}