#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double myln(double x, int n){
    double p = x-1;
    double result =0;
    for(int i=0;i<=n;i++){
        result += pow(-1,i)*pow(p,(i+1))/(i+1); 
    }
    return result;
}
int main(){
    ofstream fout ("data.dat");
    for(double i =1; i<=200; i=i+1){
        fout<<i<<" "<<log(i)<<endl;
    }
    return 0;
}

