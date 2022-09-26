#include<iostream> 
using namespace std;
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
    int dx[3][3]={15,3,-1,19,-3,-1,-4,-3,3};
    int dy[3][3]={2,15,-1,4,19,-1,1,-4,3};
    int dz[3][3]={2,3,15,4,-3,19,1,-3,-4};
    int d[3][3]={2,3,-1,4,-3,-1,1,-3,3};
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>dx[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>dy[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>dz[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>d[i][j];
        }
    }
    cout<<"X1 = "<<matDat(dx)/matDat(d)<<endl;
    cout<<"X2 = "<<matDat(dy)/matDat(d)<<endl;
    cout<<"X3 = "<<matDat(dz)/matDat(d)<<endl;
    return 0;
}

