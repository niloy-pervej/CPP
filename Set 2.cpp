#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s={1,3,5,7};
    auto it=s.find(3);
    if(it!=s.end())
    cout<<"found";
    else
    cout<<"No found";
    return 0;
}