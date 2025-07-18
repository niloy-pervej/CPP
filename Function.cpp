#include<bits/stdc++.h>
using namespace std;
void repchar(char ch,int n);
int main(){
    repchar('*',77);
    repchar('#',63);
}
void repchar(char ch,int n){
     for(int i=0;i<n;i++)
     cout<<ch;
     cout<<"\n";
}