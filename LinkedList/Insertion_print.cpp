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
    
void insertHead(Node* &Head, int d)
{
  Node*temp = new Node(d);
  temp->next = Head;
  Head = temp;
}
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
int main()
{
    Node* Head = new Node(10);
    insertHead(Head,5);
    printLL(Head);
}