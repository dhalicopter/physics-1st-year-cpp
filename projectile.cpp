#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double velocity, angle;
    cout<<"velocity: ";
    cin>>velocity;
    cout<<"angle: ";
    cin>>angle;
    double angleInRadian = M_PI*angle/180;
    double distance = pow(velocity,2)*sin(2*M_PI*angle/180)/9.8;
    cout<<"Distance = "<<distance<<endl;
    return 0;
}