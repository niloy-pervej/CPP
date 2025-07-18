#include<bits/stdc++.h>
using namespace std;
struct Time{
    int hour,minite;
};
//Time d1,d2;
int second_calculate(Time d){
    return (d.hour*60+d.minite);
}
int main(){
    Time d1,d2;
    cout<<"Enter hour and minite for d1:\n";
    cin>>d1.hour>>d1.minite;
    cout<<"Enter hour and minite for d2:\n";
    cin>>d2.hour>>d2.minite;
    cout<<"Total minite for d1:"<<second_calculate(d1)<<"\n";
    cout<<"Total minite for d2:"<<second_calculate(d2)<<"\n";
    cout<<"Difference between d1 and d2:"<<second_calculate(d1)-second_calculate(d2);
}