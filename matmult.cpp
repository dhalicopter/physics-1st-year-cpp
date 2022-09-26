#include<iostream> 
using namespace std;
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={10,11,12,13,14,15,16,17,18};
    int mult[3][3]={0,0,0,0,0,0,0,0,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
        }
        return 0;
}

