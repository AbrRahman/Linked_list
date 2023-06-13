#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int vla;
    Node * next;
    Node(int val){
      this->vla=val;
      this->next=NULL;
    }
};
int main()
{

    Node *head=new Node(10);
    Node *b =new Node(20);
    Node *c =new Node(30);
    head->next=b;
    b->next=c;
  
    Node * tmp =head; 
    while (tmp!=NULL)
    {
        cout<<tmp->vla<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->vla<<" ";
        tmp = tmp->next;
    }
    return 0;
}