#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double mySqroot(double b, int n){
    if(n==0){
        return 1;
    }
    return .5*(mySqroot(b,(n-1))+b/mySqroot(b,(n-1)));
}
int main(){
    ofstream fout ("data.dat");
    for(int i=1;i<=20;i++){
        fout<<i<<" "<<abs(mySqroot(100,i)-sqrt(100))<<endl;
    }
}