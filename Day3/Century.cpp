#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp =a, s=a,temp1 =a, s1=a;

    int rem1,rev;
    //2021//250
    rem1 = a%100;//21
    if (a <= 100){
        cout<<1<<endl;
        cout << "The year "<<a<<" is in the 1-st century.";
    }else if(a==1500 || a==2500){
        int b =(a/100);
        cout<<b<<endl;
        cout<<"This year "<<a<<" is in the "<<b<<"-th century.";
    }
    else if(rem1==0){
        rev = a/100;
        cout<<rev<<endl;
        if(a==2000 || a==1000 || a==3000){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";

        }
        else if(rev==1){
            cout<<"The year "<<a<<" is in the "<<rev<<"-st century.";
        }
        else if (rev==2){
            cout<<"The year "<<a<<" is in the "<<rev<<"-nd century.";
        }
        else if(rev==3){
            cout<<"The year "<<a<<" is in the "<<rev<<"-rd century.";
        }
        else if (rev==4){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }
        else if(rev==5){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }
        else if (rev==6){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }
        else if(rev==7){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }
        else if (rev==8){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }
        else if(rev==9){
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }
        else if(rev==21){
            cout<<"The year "<<a<<" is in the "<<rev<<"-st century.";
        }
        else if(rev==22){
            cout<<"The year "<<a<<" is in the "<<rev<<"-nd century.";
        }
        else if(rev==23){
            cout<<"The year "<<a<<" is in the "<<rev<<"-rd century.";
        }
        else{
            cout<<"The year "<<a<<" is in the "<<rev<<"-th century.";
        }

    }
    //250//50
    else if(a<1000 && rem1!=0){
        temp1 = (a/100)+1;//
        s1 = a%10;//1
        if(temp1==1){
            cout<<temp1<<endl;
            cout<<"This year "<<a<<" is in the "<<temp1<<"-st century.";
        }
        else if(temp1==2){
            cout<<temp1<<endl;
            cout<<"This year "<<a<<" is in the "<<temp1<<"-nd century.";
        }
        else if(temp1==3){
            cout<<temp1<<endl;
            cout<<"This year "<<a<<" is in the "<<temp1<<"-rd century.";
        }
        else if(temp1<=9){
            cout<<temp1<<endl;
            cout<<"This year "<<a<<" is in the "<<temp1<<"-th century.";
        }
        else{
            cout<<temp1<<endl;
            cout<<"This year "<<a<<" is in the "<<temp1<<"-th century.";
        }

    }



    else if(a>1000 && 3000>a){
        temp = (a/100)+1;//21
        s = a%10;//1
        if(temp==21){
            cout<<temp<<endl;
            cout<<"This year "<<a<<" is in the "<<temp<<"-st century.";
        }
        else if(temp==22){
            cout<<temp<<endl;
            cout<<"This year "<<a<<" is in the "<<temp<<"-nd century.";
        }
        else if(temp==23){
            cout<<temp<<endl;
            cout<<"This year "<<a<<" is in the "<<temp<<"-rd century.";
        }
        else{
            cout<<temp<<endl;
            cout<<"This year "<<a<<" is in the "<<temp<<"-th century.";
        }
    }

    return 0;

}
