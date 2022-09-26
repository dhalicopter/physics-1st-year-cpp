#include<iostream> 
using namespace std;
const int c=3;

double epsilon(int i, int j, int k){
    return (i-j)*(j-k)*(k-i)*.5;
}
double matDat(int a[3][3]){
    double result=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                result = result + epsilon(i,j,k)*a[0][i]*a[1][j]*a[2][k];
            }
        }
    }
    return result;
}
int main(){
    int x=3;
    int y=3;
    
    int d[3][3];

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>d[i][j];
        }
    }

    cout<<matDat(d,x)<<endl;
    return 0;
}

