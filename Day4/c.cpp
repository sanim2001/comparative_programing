#include<bits/stdc++.h>
using namespace std;
int main(){

        int n,flag = 0;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
           cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1]>1) flag = 1;
        }
        if(flag==0){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }


    return 0;
}
