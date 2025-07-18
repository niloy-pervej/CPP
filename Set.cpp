#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    s={3,7,1,7,5};
    for(auto i:s)cout<<i<<" ";
    cout<<endl;
    cout<<s.begin()+3;
    int x;
    cin>>x;
    s.insert(x);
    return 0;
}