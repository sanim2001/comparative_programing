#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int width;
    int length;
public:
    void set(int w,int l)
    {
        width = w;
        length = l;
        cout<<width<<" "<<length<<endl;
    }
    int area(int width, int length){
        return width*length;
    }
};
int main(){

    Rectangle r1;
    r1.set(5,8);
    Rectangle *r2;
    r2 = &r1;
    r2->set(8,10);

    Rectangle *r3;
    r3 = new Rectangle();
    r3->set(80,100);
    cout<<r3->area(5,6);

}

