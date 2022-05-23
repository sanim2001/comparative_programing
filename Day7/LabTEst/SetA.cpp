#include <iostream>
using namespace std;


struct node
{
    char data;
    node* next;
};

node* add(char data)
{
    node* newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void print(node* head){
    node* curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
}
node* callsplit(string str, node* head)
{


    return head;
}
void addList(string str, node* head){

    /*while (curr != null) {

    }*/

}
int main()
{

    string str;
    getline(cin,str);

    string line = "";
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == ' ')
        {
            //addList(str);
        }
        else{
            line += str[i];
        }
    }

    node* head = NULL;
    head = callsplit(line, head);

    print(head);
    return 0;
}
