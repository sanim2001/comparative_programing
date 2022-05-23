#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0,rem=0;
    while (cin>>n){
        int arr[n],diff[n-1]{0};
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
           diff[i]= abs(arr[i]-arr[i+1]);
        }
        sort(diff,diff+(n-1));
        for(int i=0 ;i<n-2;i++){
            rem = abs(diff[i]-diff[i+1]);
            if(rem!=1){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
        flag =0;
    }
    return 0;

}
