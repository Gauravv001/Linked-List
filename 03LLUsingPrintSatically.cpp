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
//here Node*head argument contains the address of first node.

//(head != NULL) ---> whenever you want to traverse the whole list. 10 20 30 40 50 
//(head ->next != NULL) --> whenever you want to stop at the last node.  10 20 30 40
void Print(Node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node n1(10);
    Node *head = &n1;

    Node n2(20);
    n1.next = &n2;

    Node n3(30);
    n2.next = &n3;

    Node n4(40);
    n3.next = &n4;

    Node n5(50);
    n4.next = &n5;

    Print(head);
    return 0;
}