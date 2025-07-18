#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mp;
       for(int i=0;i<2;i++){
        int x,y;
        cin>>x>>y;
        mp[x]=y;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    return 0;
}