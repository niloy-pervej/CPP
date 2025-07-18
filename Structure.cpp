#include<bits/stdc++.h>
using namespace std;
struct dis{
    int fit;
    float inch;
};
struct room{
    dis length;
    dis width;
};
int main(){
    room myroom;
    cin>>myroom.length.fit;
    cin>>myroom.length.inch;
    cin>>myroom.width.fit;
    cin>>myroom.width.inch;
    double l= myroom.length.fit+myroom.length.inch/12;
    double w= myroom.width.fit+myroom.width.inch/12;
    cout<<"My room area is: "<<l*w<<" square fit";
    
    return 0;
}