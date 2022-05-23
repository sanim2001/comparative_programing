#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    while(1){
        int user,random;
        cout<<"Enter the number 1 to 5:";
        cin>>user;

        random = 1+ rand()%5;//1,2,3,4,5
        //cout<<random;
        if(user==random){
            cout<<"Congratulation, You Win!!";
            break;
        }
        else{
            cout<<random<<endl;
            cout<<"Sorry try Again"<<endl;
        }
    }



    return 0;

}
