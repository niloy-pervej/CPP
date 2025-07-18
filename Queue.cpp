#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>st;
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    while(st.empty()==0){
        cout<<st.front()<<" ";
        st.pop();

    }

    return 0;
}