#include<iostream>
using namespace std;
double po(int x, int n){
    if (n==1){
        return x;
    }
    return x*po(x,n-1);
}
int main ()
{
    cout<<po(2,5)<<endl;
return 0;
}