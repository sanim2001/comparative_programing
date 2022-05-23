#include<bits/stdc++.h>
#include "Queue.h";
using namespace std;
int main()
{
    Queue* que = new Queue();
    Queue* queueCopy = new Queue();
    int temp, flag = 0;
    for( int i = 0 ; i < 5 ; i++ )
    {
        cin >> temp;
        que -> enque(temp);
    }
    cout << "Group1: ";
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( que -> show() < 18)
        {
            cout << que -> show() << " ";
            flag = 1;
        }
        temp = que -> show();
        temp = que -> show();
        que -> deque();
        que -> enque(temp);
        flag = 1;

    }
    if( flag == 0 )cout << "NULL" << endl;
    else
    {
        cout << endl;
        flag = 0;
    }
    cout << "Group2: ";
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( que -> show() >= 18 && que -> show() <= 35 )
        {
            cout << que -> show() << " ";
            flag = 1;
        }
        temp = que -> show();
        temp = que -> show();
        que -> deque();
        que -> enque(temp);
        flag = 1;
    }
    if( flag == 0 )cout << "NULL" << endl;
    else
    {
        cout << endl;
        flag = 0;
    }
    cout << "Group3: ";
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( que -> show() >= 36 && que -> show() <= 45 )
        {
            cout << que -> show() << " ";
            flag = 1;
        }
        temp = que -> show();
        temp = que -> show();
        que -> deque();
        que -> enque(temp);
        flag = 1;

    }
    if( flag == 0 )cout << "NULL" << endl;
    else
    {
        cout << endl;
        flag = 0;
    }
    cout << "Group4: ";
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( que -> show() >= 46 )
        {
            cout << que -> show() << " ";
            flag = 1;
        }
        temp = que -> show();
        que -> deque();
        que -> enque(temp);
    }
    if( flag == 0 )cout << "NULL" << endl;
    else
    {
        cout << endl;
        flag = 0;
    }
}
