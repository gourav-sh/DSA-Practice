#include <iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node*next;


    Node(int data){
    this->data = data;
    this->next = NULL;
} 

};


int main()
{
    Node* Node_1 = new Node(5);
    cout<<Node_1->data<<endl;
    cout<<Node_1->next<<endl;

}