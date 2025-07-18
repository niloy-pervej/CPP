#include<iostream>
using namespace std;
struct date{
    int year;
    int month;
    int day;
};
date d1,d2;
int daycount(date &d){
    int days=d.year*365+d.month*30+d.day;
    return days;
}
int deference(date d1,date d2){
    int deff=daycount(d1)-daycount(d2);
    return deff;
}
int main(){
    date d1,d2;
    cin>>d1.year>>d1.month>>d1.day;
    cin>>d2.year>>d2.month>>d2.day;
    //daycount(d1);
    //daycount(d2);
    cout<<abs(deference(d1,d2));

}
