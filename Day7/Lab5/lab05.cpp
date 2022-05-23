#include"BST.h"
using namespace std;
int main()
{
    BST* tree = new BST();
    int data[] = {50,30,70,20,40,60,80};
    for(int i = 0 ; i < 7 ; i++ )
        tree -> root = tree -> insert(tree -> root, data[i]);
    while(true)
    {
        cout <<endl<<"1.Insert data" << endl
             <<"2.Search data" << endl
             <<"3.Traversal data" << endl
             <<"4.Delete data" << endl
             <<"5.Find max and min data"<< endl
             <<"0.Exit"<< endl;
        int cases;
        cin >> cases;
        if( cases == 1 )
        {
            cout <<"Enter data to insert in BST :";
            int data;
            cin >> data;
            tree -> root = tree -> insert(tree -> root, data);
        }
        else if( cases == 2)
        {
            if(tree -> root == NULL )
            {
                cout << "BST is still empty" << endl;
            }
            else
            {
                cout <<"Enter data to search in BST :";
                int data;
                cin >> data;
                if( tree -> search(data)!= NULL )
                {
                    cout << data << " found in BST" << endl;
                }
                else cout << data << " not found in BST" << endl;
            }
        }
        else if( cases == 3)
        {
            cout <<"1.Pre order traversal of BST"<<endl
                 <<"2.Post order traversal of BST"<<endl
                 <<"3.In order traversal of BST"<<endl;
            int cases1;
            cin >> cases1;
            if( cases1 == 1 )tree -> Preorder( tree -> root );
            else if( cases1 == 2 )tree -> Postorder( tree -> root );
            else if( cases1 == 3 )tree -> Inorder( tree -> root );
        }
        else if( cases == 4)
        {

        }
        else if( cases == 5)
        {
            cout <<"1.Find largest value of BST"<<endl
                 <<"2.Find smallest value of BST"<<endl;
            int cases1;
            cin >> cases1;
            if( cases1 == 1 )cout << tree -> findMax()<< " is the largest value" << endl;
            else if( cases1 == 2 )cout << tree -> findMin()<< " is the smallest value" << endl;
        }
        else if( cases == 0)break;
    }

}
