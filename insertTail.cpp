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

void insert_at_tail(Node *&head,int val){
  Node * newNode = new Node(val);
  if(head==NULL){
    head = newNode;
    return;
  }
  Node * temp = head;
   while (temp->next!=NULL)
   {
     temp = temp->next;
   }
   temp->next = newNode;
}
void print_list(Node * head){
   Node * temp = head;
   while (temp !=NULL)
   {  
     cout<<temp->val<<" ";
     temp = temp->next;
   }
   cout<<endl;
}
int main()
{
    Node * head = NULL;
    
    while (true)
    {
     cout<<"option 1: Insert value"<<endl;
      cout<<"option 2: print value"<<endl;
      cout<<"option 3: terminate "<<endl;
      int op; cin>>op;
      if(op==1){
        cout<<"Enter num"<<endl;
        int v; cin>>v;
        insert_at_tail(head,v);
      }else if (op==2)
      {
        print_list(head);
      }else if(op ==3){
        break;
      }
      
    }
    

    return 0;
}