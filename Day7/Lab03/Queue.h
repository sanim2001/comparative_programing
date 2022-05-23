#include"Node.h"
class Queue
{
public:

    Node *head= NULL;
    Node *newdata= NULL;

    void enque(int item){
        newdata = new Node(item);

        if(head==NULL)
        {
            head = newdata;
        }
        else
        {
            Node *temp = head;
            while(temp -> next != NULL )
            {
                temp = temp -> next;
            }
            temp -> next = newdata;
            newdata -> next = NULL;
        }
    }

    int size(){
        Node *temp= head;
        int count = 0;
        while(temp!= NULL)
        {
            temp = temp->next;
            count++ ;
        }
        return count;
    }
    bool isEmpty(){
        if(head == NULL)return true;
        else return false;
    }

    void deque(){
        Node* temp = head -> next;
        delete head;
        head = temp;

    }
    int show(){
        return head -> data;
    }
    void showAll(){
        for( int i = 0 ; i < size() ; i++ )
        {
            int temp = show();
            cout << temp << " ";
            deque();
            enque(temp);
        }
    }

};
