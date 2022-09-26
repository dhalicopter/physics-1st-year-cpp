#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
double mysin(double x, int n){
    double result=1;
    for(int i=1;i<=n;i++){
        result = result*(1-(x*x)/(i*i)/(M_PI*M_PI));
    }
    return x*result;
}
double mycos(double x, int n){
    double result = 1;
    for(int i=1;i<=n;i++){
        result = result*(1-(4*x*x)/(pow((2*i-1),2))/(M_PI*M_PI));
    }
    return result;

}
int main(){
    ofstream fout ("data.dat");
    for(double i=0; i<=10; i+=0.01){
        fout<<i<<" "<<mysin(i,1000)<<" "<<mycos(i,1000)<<endl;
    }
    return 0;
}