#include<iostream>
using namespace std;
int main(){
    int inMat[3][3];
    int trMat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>inMat[i][j];
        }
    }
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            trMat[i][j]=inMat[j][i];    
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<inMat[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<trMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}