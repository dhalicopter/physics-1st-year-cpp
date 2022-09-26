#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double dfact(int n){
    if(n==1){
        return 1;
    }
    return n * dfact(n-2);
}

double gerf(double x, int n){
    double temp=0;
    for(int i=0;i<n;i++){
        temp += pow(2,i)*pow(x,(2*i+1))/dfact(2*i+1);
    }
    return 2*exp(-pow(x,2))/pow(M_PI,.5)*temp;
}

int main(){
    ofstream fout ("data.dat");
    for(double i=-2;i<2;i+=.01){
        fout<<i<<" "<<gerf(i,20)<<endl;
    }

    return 0;
}