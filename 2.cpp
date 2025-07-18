#include<bits/stdc++.h>
using namespace std;
class toolbooth{
    private:
    int cars;
    double amount;
    public:
    toolbooth():cars(0),amount(0){}
    void paying_car(){
        cars++;
        amount=amount+.50;
    }
    void nopayCar(){
        cars++;
    }
    void display(){
        cout<<"Total cars:"<<cars<<endl;
        cout<<"Total cash:"<<amount<<endl;
        int unpaidCars=(cars-(amount)/.5);
        cout<<"Paid cars:"<<cars-unpaidCars<<endl;
        cout<<"Unpaid cars:"<<unpaidCars<<endl;
    }
};

int main(){
    toolbooth t;
    while(true){
        char c;
        cout<<"Input 'p' for paying cars, Input 'n' for nonpaying cars, 'd' for exit:";
        cin>>c;
        if(c=='d'){
            t.display();
            break;
        }
        else if(c=='p')
        t.paying_car();
        else if(c=='n')
        t.nopayCar();
        else
        cout<<"Invalid Input"<<endl;

    };
}
