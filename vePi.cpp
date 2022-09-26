#include<iostream>
#include<cmath>
using namespace std;
double mPy(int n){
    double an = sqrt(2);
    double result =1;
    for(int i=0;i<n;i++){
        result *= 2/an;
        an = sqrt(2+an);
    }
    return 2*result;
}
int main(){
    cout<<mPy(100)<<endl;
}