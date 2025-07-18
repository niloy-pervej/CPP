#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    double cgpa;

    public:
    int roll,id;
    void set_cgpa(double x);
    void print_data(){
        cout<<"CGPA = "<<cgpa<<endl;
        cout<<"Roll = "<<roll<<endl;
        cout<<"ID = "<<id<<endl;
    }
};
 void student :: set_cgpa(double x){
        cgpa=x;
    }
int main(){
    student niloy;
    niloy.roll=350;
    niloy.id=28;
    niloy.set_cgpa(3.75);
    niloy.print_data();
}