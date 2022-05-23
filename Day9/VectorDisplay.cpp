#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}
int main(){
    int element,length;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the Elements: ";
    vector<int> vec1;
    for(int i=0; i<length; i++){
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    cout<<endl;
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,3,7);
    display(vec1);

}
