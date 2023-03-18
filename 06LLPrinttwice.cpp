#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void Print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    // STATICALLY
    Node n1(10);
    Node *head = &n1;

    Node n2(20);
    n1.next = &n2;

    Node n3(30);
    n2.next = &n3;

    Print(head); // 10 20 30
    Print(head); // 10 20 30
    return 0;
}