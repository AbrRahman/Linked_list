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
 void insert_at_head(Node * &head,int v){
    Node * newNode = new Node(v);
    newNode->next = head;
    head = newNode;
 }
int main()
{
    Node * head =new Node(5);
    Node * a =new Node(20);
    Node * b =new Node(30);
    head->next=a;
    a->next=b;
    insert_at_head(head,12);
    insert_at_head(head,18);

    Node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
   

    return 0;
}