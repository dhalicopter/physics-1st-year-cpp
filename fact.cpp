#include<iostream>
using namespace std;
double fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main ()
{
    cout<<fact(5)<<endl;
return 0;
}