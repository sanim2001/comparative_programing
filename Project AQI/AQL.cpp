#include<bits/stdc++.h>
using namespace std;
string maxxCity="Empty";
int maxx=0;
string minnCity="Empty";
int minn=0;
void display1(){
    cout<<"============================================================\n";
    cout<<"\n";
    cout<<"Menu:\n";
    cout<<"Enter 'x', to take the AQIs of all cities into 'aqi' array of size N\n";
    cout<<"Enter 'y', to find and display the highest AQI among all the cities.\n";
    cout<<"Enter 'z', to display the AQIs that are less than half the highest AQI.\n";
    cout<<"Enter 'q', to quit/exit the menu system.\n";
    cout<<"----------------------\n";
    cout<<"Enter choice : ";

}
void cities_aqi(){

}
void display(){

    string menuName;
    cin>>menuName;
    do{


        if(menuName=="x"){
            int cities,sum=0;
            cout<<"Enter Array size of total cities: \n";
            cin>>cities;
            string a[cities];
            int b[cities],c[cities];
            cout<<"Now Enter all cities name and aqi index value one by one: \n";

            for(int i=0; i<cities; i++){
                cin>>a[i]>>b[i];
            }
            for(int i=0; i<cities; i++){
                cout<<"Cities Name: "<<a[i]<<" || "<<" AQI: "<<b[i]<<"\n";
                //sum+=b[i];
            }
            for(int i=0; i<cities; i++){
                c[i]=b[i];
            }
            cout<<"\n";
            sort(b,b+cities);

            maxx = b[cities-1];//max index
            for(int i=0; i<cities; i++){
                if(maxx==c[i]){
                    maxxCity=a[i];
                }
            }
            minn = b[0];
            for(int i=0; i<cities; i++){
                if(minn==c[i]){
                    minnCity=a[i];
                }
            }
        }
        else if(menuName=="y"){
            cout<<"The highest AQI among all the cities is: \n";
            cout<<"City Name:"<<maxxCity<<" "<<"Index AQI: "<<maxx<<"\n";
        }
        else if(menuName=="z"){
            cout<<"The Minimum AQI among all the cities is: \n";
            cout<<"City Name:"<<minnCity<<" "<<"Index AQI: "<<minn<<"\n";
        }
        else{
            cout<<"Invalid Input\n"<<"\n";
        }
        cout<<"\n\n\n";
        display1();

        cin>>menuName;
    }while(menuName!="q");
}

int main(){
    cout<<"======= BD Air Quality Index (AQI) Tracking System =========\n";
    display1();
    display();

    cout<<"Submitted by Tanjil Ahmed\nCompleted!!";
    return 0;
}
