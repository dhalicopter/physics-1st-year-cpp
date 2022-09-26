#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
int fact (int n) {
    if(n==0 || n==1) {
        return 1;
    }
    return n*fact(n-1);
}
double mySin(double x){
    double result=0;
    for(int i=0;i<=100;i++){
        result += pow(-1,i)*pow(x,2*i+1)/fact(2*i+1);
    }
    return result;
}
int main ()
{
    ofstream fout("data.dat");
    //for(double i=0;i<20;i+=.01){
        fout<<" "<<mySin(-2*M_PI)<<endl;
   // }
return 0;
}