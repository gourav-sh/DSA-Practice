#include <iostream>
using namespace std;

class Node
{   public:
    int val;
    Node*next;

    Node(int val)
    {
    this->val = val;
    this->next = NULL;
    }
};
    void printLL(Node* &Head)
{
    Node* temp = Head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtTail(Node* &tail, int d)
{
  Node*temp = new Node(d);
  tail->next = temp;
  tail = temp;
}
int main()
{
Node* node1 = new Node(5);
 Node* Head = node1;
 Node* tail = node1;
 InsertAtTail(tail,10);
 InsertAtTail(tail,15);
 printLL(Head);
}
