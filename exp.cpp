#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double fact(int n){
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
double ex(double x, int n){
    double result = 0;
    for(int i=0;i<=n;i++){
        result +=pow(x,i)/fact(i); 
    }
    return result;
}
int main(){
    ofstream fout("data.dat");
    for(double x = 0; x<=5; x+=0.01){
       fout<<x<<" "<<ex(x,50)<<endl; 
    }
}