#include <iostream>
using namespace std;

// Global declaration
int countk = 0;

// Structure declaration
//ssn = leave code, dept = reason why he or she leave
struct node {
    struct node* prev;
    int ssn;
    long int phno;
    float sal;
    char name[20], dept[10];
    struct node* next;

    int data;
    struct node* link;
} * h, *temp, *temp1, *temp2, *temp4;
struct node* top;

void push(int data)
{

    struct node* temp1;
    temp1 = new node();
    if (!temp1){
        exit(1);
    }
    temp1->data = data;
    temp1->link = top;
    top = temp1;
}
void pop(){

    struct node* temp1;
    if (top == NULL){
            exit(1);

    }
    else{
        temp1 = top;
        top = top->link;
        temp1->link = NULL;

        free(temp1);

    }
}

// elements of the stack

void display()
{

    struct node* temp1;
    if (top == NULL){
        exit(1);
    }else{

        temp1 = top;
        while (temp1 != NULL){
            cout << temp1->data << " ";
            temp1 = temp1->link;

        }

    }
}
// Function to create node
void create()
{
    int ssn;
    long int phno;
    float sal;
    char name[20], dept[10];
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;

    cout<<"Name: "<<endl;
    cin>>name;
    cout<<"Leave Type: "<<endl<<"Casual(15), Sick(12), Annual Leave(2) & Maternity Leave(1) :"<<endl;
    cin>> ssn;
    cout<< "Reason why you leave: "<<endl;
    cin>>dept;
    cout<<"Are you male(1) or Are you Female(2): "<<endl;
    cin>>sal;
    cout<<"Phone Number: "<<endl;
    cin>>phno;

    temp->ssn = ssn;
    strcpy(temp->name, name);
    strcpy(temp->dept, dept);

    temp->sal = sal;
    temp->phno = phno;
    countk++;
}

// Function to insert at beginning
void insertbeg()
{
    if (h == NULL) {
        create();
        h = temp;
        temp1 = h;
    }
    else {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

// Function to insert at end
void insertend()
{
    if (h == NULL) {
        create();
        h = temp;
        temp1 = h;
    }
    else {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}
void displaybeg()
{
    temp2 = h;
    if (temp2 == NULL) {
        cout<<"\n list is empty\n"<<endl;
        return;
    }
    cout<<"\n linked list elements "
           "from beginning:\n";
    while (temp2 != NULL) {
            cout<<"Name: "<<temp2->name <<endl;
            if(temp->ssn == 15){
            cout<<"Leave type : (Casual)"<<endl;
            }
        if(temp->ssn == 12){
            cout<<"Leave type : (Sick)"<<endl;
        }
        if(temp->ssn == 2){
            cout<<"Leave type : (Annual)"<<endl;
        }
        if(temp->ssn == 1){
            cout<<"Leave type : (Maternity)"<<endl;
        }
        if(temp2->sal==1 && temp->ssn ==1){
            cout<<"You are Male so You can not take this Maternity Leave"<<endl;
        }
        if(temp2->sal==1 &&temp->ssn !=1 ){
            cout<<"You are Male so You can take this leave"<<endl;
        }
        if(temp2->sal==2 && temp->ssn ==1){
            cout<<"You are FeMale so You can take this Maternity Leave"<<endl;

        }
        if(temp2->sal==2 && temp->ssn !=1){
            cout<<"You are FeMale so You can take this leave"<<endl;

        }
        cout<<"Reason for Leave: "<<temp->dept<<endl;

        cout<<"Phone Number: "<<temp2->phno<<endl;


        temp2 = temp2->next;
           cout<<"number of employees= "<<countk<<endl;
           cout<<endl<<endl;
    }

}


int deleteend()
{
    struct node* temp;
    temp = h;
    if (temp == NULL) {
        cout<<"list is empty\n"<<endl;
        return 0;
    }
    if (temp->next == NULL) {
        printf("%d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept,
               temp->sal, temp->phno);
        free(temp);
        h = NULL;
    }
    else {
        temp = temp1;
        temp2 = temp1->prev;
        temp2->next = NULL;
        printf("%d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->sal, temp->phno);
        free(temp);
        temp1 = temp2;
    }
    countk--;
    return 0;
}


int deletebeg()
{
    struct node* temp;
    temp = h;
    if (temp == NULL) {
        cout<<"list is empty\n"<<endl;
        return 0;
    }
    if (temp->next == NULL) {
        printf("%d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept,
               temp->sal, temp->phno);
        free(temp);
        h = NULL;
    }
    else {
        h = h->next;
        h->prev = NULL;
        printf("%d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept,
               temp->sal, temp->phno);
        free(temp);
    }
    countk--;
    return 0;
}

void employerDetails()
{
    int ch, n, i;
    h = NULL;
    temp = temp1 = NULL;
    cout<<endl;
    cout<<"-------------**************************************-----------\n";
    cout<<"-------------<<<Employee Leave Management System>>>-----------\n";
    cout<<"\n 1.Number Of Employee";
    cout<<"\n 2.display from beginning";
    cout<<"\n 3.insert at end";
    cout<<"\n 4.delete at end";
    cout<<"\n 5.insert at beginning";
    cout<<"\n 6.delete at beginning";
    cout<<"\n 7.to show Leave Management as Queue";
    cout<<"\n 8.to show Leave Management as Stack";
    cout<<"\n 9.exit\n";
    cout<<"----------------------\n";
    while (1) {
        cout<<"\n enter choice : ";
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("\n enter number of"
                   " employees:");
            cin>>n;
            for (i = 0; i < n; i++)
                insertend();
            break;
        case 2:
            displaybeg();
            break;
        case 3:
            insertend();
            break;
        case 4:
            deleteend();
            break;
        case 5:
            insertbeg();
            break;
        case 6:
            deletebeg();
            break;
        case 7:
            cout<<
                "\n to show DLL as queue"
                " \n1.perform insert and"
                " deletion operation by "
                "calling insertbeg() and "
                "deleteend() respectively\n "
                "\t OR \n 2.perform insert "
                "and delete operations by"
                "calling  insertend() and "
                "deletebeg() respectively\n"<<endl;
            break;
    case 8:
            cout<<
                "\n to show DLL as Stack"
                " \n1.perform push and"
                " deletion operation by "
                "calling push() and "
                "pop() respectively\n "
                "\t OR \n 2.perform insert "
                "and delete operations by"
                "calling  push() and "
                "pop() respectively\n"<<endl;
            break;

        case 9:
            exit(0);
        default:
            cout<<"wrong choice"<<endl;
        }
    }
}
int main()
{
    employerDetails();

    return 0;
}
