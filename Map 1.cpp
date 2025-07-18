#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mp;
       for(int i=0;i<7;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    return 0;
}