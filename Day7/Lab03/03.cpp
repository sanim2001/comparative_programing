#include "Queue.h"
int main()
{
    Queue* que = new Queue();
    int temp;
    for( int i = 0 ; i < 5 ; i++ )
    {
        cin >> temp;
        que -> enque(temp);
    }
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( que -> show() >= 0)
        {
            temp = que -> show();
            que -> deque();
            que -> enque(temp);
        }
        else
        {
            que -> deque();
        }
    }
    que -> showAll();
}
