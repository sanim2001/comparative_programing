#include<bits/stdc++.h>
using namespace std;

struct student{
    int id;
    float cgpa;
};

int main(){
    int a;
    struct student s1,s2[3],*s3,*s4;

    cin>>s1.id >>s1.cgpa;
    cout<<s1.id <<" "<< s1.cgpa<<endl;
    s3 = &s1;
    cout<<(*s3).id <<" "<< (*s3).cgpa<<endl;
    cout<<s3->id <<" "<< s3 ->cgpa<<endl;
    /*for(int i=0; i<3; i++){
        cin>>s2[i].id >>s2[i].cgpa;
    }
    for(int i=0; i<3; i++){
        cout<<s2[i].id <<" "<<s2[i].cgpa<<endl;
    }*/


}
