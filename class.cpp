#include<iostream>
using namespace std;

class Cordinate {
private:
    double x, y;
public:
    Cordinate():x(0),y(0){}
    Cordinate(double a, double b) : x(a), y(b) {}
    void SetCordinate(){
        cout<<"X=:";
        cin>>x;
        cout<<"Y=:";
        cin>>y;
    }
    void addCordinate(Cordinate p,Cordinate q){
        x=p.x+q.x;
        y=p.y+q.y;
    }
     void display() {
        cout << "(" << x << "," << y << ")";
    }
};

int main() {
    Cordinate c1(2, 2),c2,c3;
    c2.SetCordinate();
    c1.display();
    c2.display();
    c3.addCordinate(c1,c2);
    c3.display();
}