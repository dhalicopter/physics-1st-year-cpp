#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
double gamma1(int n, double x){
    double temp=0;
    for(int i=0;i<=n-1;i++){
        temp+=pow(x,i)/fact(i);
    }
    return fact(n-1)*(1-exp(-x)*temp);
}
double gamma2(int n, double x){
    int temp=0;
    for(int i=0;i<=n-1;i++){
        temp+=pow(x,i)/fact(i);
    }
    return fact(n-1)*(exp(-x)*temp);
}
double potential(double r){
    return 1/(2*r)*gamma1(3,2*r)+gamma2(2,2*r);
}
double check(double r){
    return 1/r;
}
int main(){
    ofstream fout ("data.dat");
    /*for(double r=0;r<=4;r+=.01){
        fout<<r<<" "<<potential(r)<<endl;
    }*/
    for(double r=1000;r<=4000;r+=1){
        fout<<r<<" "<<check(r)<<endl;
    }

return 0;
}
