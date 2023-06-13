#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
      this->val=val;
      this->next=NULL;
    }
};
void delete_at_head(Node * &head){
    if(head==NULL){
        cout<<"Head value is null";
        return;
    }
   Node * deleteNode = head;
   head = head->next;
   delete deleteNode;
}
int main()
{

    Node * head =NULL;
    // Node * head = new Node(10);
    // Node * b = new Node(20);
    // Node * c = new Node(30);
    // Node * d = new Node(40);
    // head->next=b;
    // b->next=c;
    // c->next=d;
    
    delete_at_head(head);
    // print linked list;
    Node * temp = head;
    while (temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
    return 0;
}