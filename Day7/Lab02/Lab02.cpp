#include<bits/stdc++.h>
#include "SLL.h"
using namespace std;
int main()
{
    SLL *s1 = new SLL();
    int flag = 1;
    while(flag){

    int Operation,data,pos;
    cout<< "Enter Operation Number:"<<endl;
    cin>>Operation;
    int size;
    switch(Operation)
    {
        case 0:
                s1 -> display();
                break;
        case 1:
                cout<< "Enter data:"<<endl;
                cin>>data;
                s1->add(data);
                break;
        case 2:
                cout<< "Enter data:"<<endl;
                cin >> data;
                s1->addbegin(data);
                break;
        case 3:
                size = s1->size();
                cout<< "Enter position( 0 - "<< size-1 << " ):"<<endl;
                cin >> pos;
                cout<< "Enter data:"<<endl;
                cin >> data;
                s1->addanypos(pos,data);
                break;
        case 4:
                cout << "data"<<endl;
                cin >> data;
                if( s1 -> contains(data)){
                cout << "Data found" << endl;
                }
                else{
                    cout << "Data not found" << endl;
                }
                break;
        case 5:s1 -> size();
                break;
        case 6:
                if( s1 -> isEmpty())
                cout << "Empty" << endl;
                else
                cout << "Not Empty" << endl;
                break;
        case 7:
                cout << "position" << endl;
                cin >> pos;
                if( s1 -> get(pos))
                cout << s1 -> get(pos) << endl;
                else{
                    size = s1->size()-1;
                    cout << "Position must be 0 to "<< size << endl;
                }
                break;

        case 8:
                cout << "data "<< endl;
                cin >> data;
                if( s1 -> indexOf(data) != -1)
                cout <<"Position:" << s1 -> indexOf(data) << endl;
                else{
                    cout << "Invalid data" << endl;
                }
                break;
        case 9:
                s1 -> removefirst();
                break;
        case 10:
                s1 -> removelast();
                break;
        case 11:
                cout << "position" << endl;
                cin >> pos;
                if( pos < s1-> size() ){
                    cout << s1 -> remove(pos) << endl;
                }
                else{
                    cout << "Invalid position" << endl;
                }
                break;
        case 12:
                cout <<"Reversed order" << endl;
                s1 -> reverse();
                s1 -> display();
                break;
        case 13:
                cout <<"List sorted "<< endl;
                s1 -> sort();
                s1 -> display();
                break;
        case 14:
                flag = 0;
                break;

    }
    }
    return 0;
}
