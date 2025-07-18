#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    while(st.empty()==0){
        cout<<st.top()<<" ";
        st.pop();

    }

    return 0;
}