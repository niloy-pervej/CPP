#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int x=4,y=6;
    swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}