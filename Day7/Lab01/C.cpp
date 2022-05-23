#include<bits/stdc++.h>
using namespace std;

class node{
private:
    int data;
public:
    node(){};
    node(int data)
    {
        this->data=data;
    }
    void setdata(int d)
    {
        data=d;
    }
    double getdata()
    {
        return data;
    }
};

int main(){
    node *next = new node();
    next->setdata(12);
    cout<<next->getdata();
}
