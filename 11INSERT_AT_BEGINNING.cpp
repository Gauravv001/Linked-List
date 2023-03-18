#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor call
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeInput()
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

Node *insertNodeAtBeg(Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = takeInput();
    Print(head);
    cout<<endl;
    cout<<"enter newData:"<<endl;
    int data;
    cin >> data;

    head=insertNodeAtBeg(head, data);
    Print(head);

    return 0;
}