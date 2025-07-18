#include<bits/stdc++.h>
using namespace std;
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    int x=4,y=6;
    swap(&x,&y);
    cout<<x<<endl<<y;
    return 0;
}