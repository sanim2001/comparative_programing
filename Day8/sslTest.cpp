#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next = NULL;
    }

};
Node* newnode, *head=NULL;

void display(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}
void addBegin(int val){
    newnode = new Node(val);
    newnode->next=head;
    head = newnode;

}
void newinsert(int data)
{
 Node* newnode, *temp= head;
 newnode = new Node(data);
 while(temp->next!= NULL && temp->next->val <newnode->val)
 {
 temp = temp->next;
 }
 //newnode->next = temp->next;
 temp->next = newnode;
 }

int main(){
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        newnode = new Node(data);
        if(head==NULL){
            head = newnode;
        }
        else{
            Node* temp=head, *temp1=temp;//1 1
            while(temp!=0){
                temp1 =temp;//1 2 3
                temp= temp->next;//2 3 0
            }
            temp1->next = newnode;

        }

    }
    display();
    cout<<endl;
    //addBegin(5);
    cout<<endl;
    newinsert(4);
    newinsert(5);
    display();
    return 0;
}
