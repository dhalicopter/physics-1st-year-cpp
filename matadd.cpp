#include<iostream>
using namespace std;
int main(){
    int matA[3][3]={
        1,2,3,
        4,5,6,
        7,8,9
    };
    int matB[3][3]={
        9,8,7,
        6,5,4,
        3,2,1
    };
    int matC[3][3];
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++){
            matC[i][j]=matA[i][j]+matB[i][j];
        }
    }
    for(int i =0; i<=2;i++){
        for(int j=0; j<=2; j++){
            cout<<matC[i][j]<<" ";
        }
        cout<<endl;
    }
    
}