#include <iostream>
#include "tree/tree.hpp"

using namespace std;

int main()
{
    Tree tree;

    tree.insert(5);
    tree.insert(3);
    tree.insert(8);
    tree.insert(1);
    tree.insert(4);
    tree.insert(7);
    tree.insert(9);

    tree.print();

    cout << endl;

    return 0;
}
