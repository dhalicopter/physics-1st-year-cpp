#include<iostream>
using namespace std;
const int c=3;
int addm(int a[][c],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    return sum;
}
int main(){
    int n=5;
    int arry[n];
    for(int i=0;i<n;i++){
        cin>>arry[i];
    }
    cout<<addm(arry,n)<<endl;
    return 0;
}
