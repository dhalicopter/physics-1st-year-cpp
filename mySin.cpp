#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double mySin(double x, int k){
    double result=1;
    for(int i=1;i<=k;i++){
        result = result*(1-(x*x)/(i*i)/(M_PI*M_PI));
    }
    return x*result;
}


int main ()
{
    ofstream fout("data.dat");
    int k = 10000;
    for(double i=0;i<50;i+=.01){
        fout<<i<<" "<<mySin(i,k)<<endl;
    }
return 0;
}