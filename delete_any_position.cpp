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
void delete_any_position(Node * head,int idx){
    Node * temp = head;

   for(int i=1;i<=idx-1;i++){
      temp = temp->next;
      if(temp==NULL){
        cout<<"Invalid Indx"<<endl;
        return;
      }
   
   }
    if(temp==NULL || temp->next==NULL){
        cout<<"Invalid Indx"<<endl;
        return;
    };
   Node * deleteItem = temp->next;
    temp->next = temp->next->next;
    delete deleteItem;
}
int main()
{
    // Node * head = NULL;
    Node * head =new Node(5);
    Node * a =new Node(20);
    // Node * b =new Node(30);

    head->next=a;
    // a->next=b;
   delete_any_position(head,2);
//    delete_any_position(head,3);
    Node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
   

    return 0;
}