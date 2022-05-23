#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int c=0,t=a,reb1,reb,rev1;
    while(t!=0){
        reb = t%10;
        reb1 =reb1*10 +reb;
        t = t/10;
        c++;
    }


    int rem,rem1,rev;
    //2021//200
    rem1 = a%100;//21
    if(rem1==0 && c==3){
        rev = a/100;
        cout<<rev<<endl;
        if(rev==1){
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
    }
    else if(rem!=0){
        rev1 = a%10;
        if(rev1==1){
            cout<<rem1<<endl;
            cout<<"This year "<<a<<" is in the "<<rem1<<"-st century.";
        }
        else if(rev1==2){
            cout<<rem1<<endl;
            cout<<"This year "<<a<<" is in the "<<rem1<<"-nd century.";
        }
        else if(rev1==3){
            cout<<rem1<<endl;
            cout<<"This year "<<a<<" is in the "<<rem1<<"-rd century.";
        }
        else{
            cout<<rem1<<endl;
            cout<<"This year "<<a<<" is in the "<<rem1<<"-th century.";
        }

    }

    else if(rem1==0 && c==4){
        rev = a/1000;
        cout<<rev<<"0"<<endl;
        if(rev==1){
            cout<<"The year "<<a<<" is in the "<<rev<<"0-th century.";
        }
        else if(rev==2){
            cout<<"The year "<<a<<" is in the "<<rev<<"0-th century.";
        }
        else if(rev==3){
            cout<<"The year "<<a<<" is in the "<<rev<<"0-th century.";
        }
    }



    return 0;
}
