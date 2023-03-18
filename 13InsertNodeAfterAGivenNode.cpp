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

Node *insertNodeAfterAGivenNode(Node *head, int i, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    int cnt = 0;

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
    cout << endl;

    // cout << "enter newData" << endl;
    int pos, data;
    cin >> pos >> data;

    head = insertNodeAfterAGivenNode(head, pos, data);
    Print(head);

    return 0;
}