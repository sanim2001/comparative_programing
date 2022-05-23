#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    double height;
    double width;
public:
    Rectangle() {};
    Rectangle(double height,double width)
    {
        this->height=height;
        this->width=width;
    }
    void setheight(double h)
    {
        height=h;
    }
    void setwidth(double w)
    {
        width=w;
    }
    double getheight()
    {
        return height;
    }
    double getwidth()
    {
        return width;
    }
    void displayArea(){
        double area=height*width;
        cout <<"Area: "<< area<<endl;
    }
};


int main(){

    Rectangle r1;
    r1.setheight(20);
    r1.setwidth(40);
    r1.displayArea();

    Rectangle *r2 = new Rectangle();
    r2->setheight(10);
    r2->setwidth(30);
    r2->displayArea();




    cout<<"Height : "<<r1.getheight()<<endl<<"Width : "<<r1.getwidth();

}
