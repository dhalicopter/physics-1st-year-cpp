#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double fact(int n){
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
double brnli(int m){
    double result =0;
    for(int p = 1;p<=20;p++){
        result += pow(p,-m);
    }
    return pow(-1,(m/2+1))*2*fact(m)/(pow(2*M_PI,m));
}
int main(){
    ofstream fout ("data.dat");
    for(int i =2; i<=20; i=i+2){
        fout<<i<<" "<<brnli(i)<<endl;
    }
    return 0;
}
