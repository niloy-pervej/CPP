#include<bits/stdc++.h>
using namespace std;
class Niloy{
    private:
    int a,b;
    public:
    int c,d,e;
    void SetData(int a1,int b1,int c1);
    void Print_Data(){
        cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e;
    }
};
void Niloy :: SetData(int a1,int b1,int c1){
          a=a1;
          b=b1;
          c=c1;

}
int main(){
    Niloy value;
    //value.a=5; a is private
    value.d=4;
    value.e=5;
    value.SetData(1,2,3);
    value.Print_Data();
    
    return 0;
}