#include<bits/stdc++.h>
using namespace std;
float lbstokg(float pounds);
int main(){
    float lbs;
    cout<<"Enter your weight in pounds: ";
    cin>>lbs;
    cout<<"Your wight in kg: ";
    float kg=lbstokg(lbs);
    cout<<kg;

}
float lbstokg(float pounds){
    float kg=pounds*.453592;
   return kg;
}