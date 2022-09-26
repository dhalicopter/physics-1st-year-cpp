#include<iostream>
using namespace std;
int main(){
    int inMat [3][3] = {
        1,2,3,
        4,5,6,
        7,8,9
    };
    int tranMat[3][3];
    for(int i =0; i<=2;i++){
        for(int j=0; j<=2; j++){
            tranMat[i][j]=inMat[j][i];
        }
    }
    for(int i =0; i<=2;i++){
        for(int j=0; j<=2; j++){
            cout<<tranMat[i][j]<<" ";
        }
        cout<<endl;
    }


}