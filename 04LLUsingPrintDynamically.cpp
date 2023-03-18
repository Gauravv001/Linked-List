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
    Node *n1 = new Node(10);
    Node *head = n1;

    Node *n2 = new Node(20);
    n1->next = n2;

    Node *n3 = new Node(30);
    n2->next = n3;

    Node *n4 = new Node(40);
    n3->next = n4;

    Node *n5 = new Node(50);
    n4->next = n5;

    Print(head);
    return 0;
}