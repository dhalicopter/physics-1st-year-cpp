#include<iostream>
using namespace std;
double cofactor(int mat[3][3],int i,int j){
    return mat[(i+1)%3][(j+1)%3]* mat[(i+2)%3][(j+2)%3]-mat[(i+1)%3][(j+2)%3]*mat[(i+2)%3][(j+1)%3];
}
double det(int mat[3][3]){
    double result = 0;
    for(int i=0;i<3;i++){
        result = result + (mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3]-mat[1][(i+2)%3]*mat[2][(i+1)%3]));
    }
    return result;
}
int main(){
    int mat[3][3]={1,2,-1,2,1,2,-1,2,1};
    double result[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[j][i]=cofactor(mat,i,j)/det(mat);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}