#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char f;
    double r;
    cin>>n1>>f>>n2;
    switch (f)
    {
    case '+':
        r=n1+n2;
        cout<<r<<endl;
        break;

    case '-':
        r=n1-n2;
        cout<<r<<endl;
        break;
    case '*':
        r=n1*n2;
        cout<<r<<endl;
        break;
    case '/':
        r=n1/n2;
        cout<<r<<endl;
    break;
    default:
        cout<<"enter a valid function!";
        break;
    }

}
