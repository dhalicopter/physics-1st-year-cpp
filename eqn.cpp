#include<iostream>
#include<cmath>
using namespace std;
void eqn(double a, double b, double c){
    double rec = (b*b-4*a*c);
    if(rec == 0){
        cout<<-b/(2*a)<<endl;
    }
    else if(rec>0){
        cout<<(-b/(2*a)-sqrt(rec)/(2*a))<<endl;
        cout<<(-b/(2*a)+sqrt(rec)/(2*a))<<endl;
    }
    else{
        cout<<-b/(2*a)<<"-"<<sqrt(-1*rec)/(2*a)<<"i"<<endl;
        cout<<-b/(2*a)<<"+"<<sqrt(-1*rec)/(2*a)<<"i"<<endl;
    }
    
}
int main(){
    eqn(2,3,5);
    return 0;
}