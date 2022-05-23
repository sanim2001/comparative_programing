#include "Queue.h"
int main()
{
    Queue* que= new Queue();
    Queue* queset = new Queue();
    int temp;
    for( int i = 0 ; i < 5 ; i++ )
    {
        cin >> temp;
        que -> enque(temp);
    }
    for( int i = 0 ; i < que -> size() ; i++ )
    {
        queset -> enque( que -> show() );
        temp = que -> show();
        que -> deque();
        que -> enque(temp);
    }
    queset -> showAll();
}
