// Print ith node
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

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void printIthNode(Node *head, int i)
{
    Node *temp = head;
    int pos = 0;
    while (temp != NULL && pos < i)
    {
        pos++;
        temp = temp->next;
    }
    if (temp != NULL)
    {
        cout << temp->data;
    }
}

int main()
{

    Node *head = takeInput();
    int pos;
    cin >> pos;
    printIthNode(head, pos);
    cout << endl;

    return 0;
}