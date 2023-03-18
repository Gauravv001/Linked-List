#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // statically

    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    n1.next = &n2;

    Node n3(3);
    n2.next = &n3;

    cout << n1.data << " " << n2.data << " " << n3.data << " " << endl;
    return 0;
}