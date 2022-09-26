#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double mPy(int n){
    double result=0;
    for(int i=0;i<n;i++){
        result += pow(-1,i)/(2*i+1);
    }
    return 4*result;
}
int main(){
    ofstream fout("data.dat");
    for(int i=20000;i>0;i-=50){
        fout<<i<<" "<<mPy(i)<<" "<<abs(M_PI-mPy(i))<<endl;
    }
    return 0;
}