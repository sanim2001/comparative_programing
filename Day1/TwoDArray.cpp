#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a matrix: ";
    int a[3][3];
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
            }
    }
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
            }
            cout<<endl;
    }
    cout<<"Enter b Matrix: ";
    int b[3][3];
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cin>>b[i][j];
            }
    }
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cout<<b[i][j]<<" ";
            }
            cout<<endl;
    }

    int sum[3][3];
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
            cout<<endl;
    }
    cout<<"The Summation is: "<<endl;
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cout<<sum[i][j]<<" ";
        }
            cout<<endl;
    }



    return 0;
}
