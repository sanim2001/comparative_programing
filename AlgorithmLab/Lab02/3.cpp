#include<bits/stdc++.h>
using namespace std;
struct time{
    int start;
    int finish;
}a[100],temp;


int main(){

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i].start>>a[i].finish;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if(a[i].finish > a[j].finish)
            {

                temp = a[i];
                a[i] = a[j];
                a[j] = temp ;
            }
        }
    }
//    for(int i=0; i<n; i++){
//        cout<<a[i].start<<" "<<a[i].finish<<endl;
//    }
    int c=1,j=0;
    for(int i=0; i<n; i++){
        if(a[i].start>=a[j].finish){
            c++;

            //cout<<a[i].start<<" "<<j<<endl;
            j=i;
        }
    }
    cout<<c<<endl;

}
