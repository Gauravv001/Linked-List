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

int main(){

    //DYNAMICALLY 
    Node *n1 = new Node(1);
    Node *head = n1;

    Node *n2 = new Node(2);
    n1->next = n2;

    Node *n3 = new Node(3);
    n2->next = n3;

    cout << n1->data << " " << n2->data << " " << n3->data << " " << endl;

    return 0;
}