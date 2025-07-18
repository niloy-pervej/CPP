#include<bits/stdc++.h>
using namespace std;
struct dis{
    int feet;
    float inches;
};
void engdis(dis d);
int main(){
    dis d1;
    cout<<"Enter the feet:";
    cin>>d1.feet;
    cout<<"Enter the inches:";
    cin>>d1.inches;
    engdis(d1);
}
void engdis(dis d){
    cout<<d.feet<<"\'-"<<d.inches<<"\"";
}