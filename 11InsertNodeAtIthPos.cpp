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

Node *insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    int cnt = 0;

    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while (temp != NULL && cnt < i - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp != NULL)
    {
        Node *address = temp->next;
        temp->next = newNode;
        newNode->next = address;
    }
    return head;
}

void Print(Node *head)
{
    // Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = takeInput();
    Print(head);

    cout << endl;

    int pos, data;
    cin >> pos >> data;

    head = insertNode(head, pos, data);
    Print(head);

    return 0;
}