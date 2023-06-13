#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
      int val;
      Node * next;
      Node(int v){
        this->val=v;
        this->next=NULL;
      }
};
void insert_any_position(Node * head,int val,int pos){
       Node * temp = head;
       Node * newNode = new Node(val);
    for(int i=1;i<=pos-1;i++){
        temp=temp->next;
        if(temp ==NULL){
            cout<<"Invalid Index"<<endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main()
{
    Node * head =new Node(5);
    Node * a =new Node(20);
    Node * b =new Node(30);
    head->next=a;
    a->next=b;
    //  int pos = 1;
     insert_any_position(head,10,1);
     insert_any_position(head,100,100);
     insert_any_position(head,101,1);

    Node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
   

    return 0;
}