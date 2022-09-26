#include<iostream> 
using namespace std;
double epsilon(int i, int j, int k){
    return (i-j)*(j-k)*(k-i)*.5;
}
double matDat(int a[][],int x, int y){
    double result=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            for(int k=0;k<x;k++){
                result = result + epsilon(i,j,k)*a[0][i]*a[1][j]*a[2][k];
            }
        }
    }
    return result;
}
int main(){
    int x=3;
    int y=3;
    
    int d[x][y];

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>d[i][j];
        }
    }
    cout<<matDat(d,x,y)<<endl;
    return 0;
}

