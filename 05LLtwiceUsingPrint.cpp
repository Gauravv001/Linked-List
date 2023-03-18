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

//Using temp is to be considered as a very good practice because our address of 1st node is safe now. 
void Print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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

    Print(head);  //print twice 
    return 0;
}