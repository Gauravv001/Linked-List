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
    cin >> data;    //taking current Node data from user

    Node *head = NULL; //creating head and put the value equal to NULL.

    while (data != -1)  // if user enters the value "-1" linked list terminates
    {
        Node *newNode = new Node(data);   //creating newNode by using datd entered by the user.

        if (head == NULL)       // for starting node when head contains NULL 
        {
            head = newNode;         
        }
        else
        {
            Node *temp = head;           //creates an Temp ptr to store the value of head.
            while (temp->next != NULL)   //loop condition
            {
                temp = temp->next;         
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}

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
    Node *head = takeInput();
    Print(head);
    return 0;
}