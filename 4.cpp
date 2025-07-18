#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    int num;
    float salary;
    public:
    void input();
    void display();
};
void employee :: input(){
    cout<<"Enter employee number:"<<endl;cin>>num;
    cout<<"Enter employee salary:"<<endl;cin>>salary;
}
void employee :: display(){
    cout<<"Employee Number = "<<num<<endl;
    cout<<"Employee salary = "<<salary<<endl;
}

int main(){
    employee e1,e2,e3;
    e1.input();
    e2.input();
    e3.input();
    e1.display();
    e2.display();
    e3.display();
    
    return 0;
}