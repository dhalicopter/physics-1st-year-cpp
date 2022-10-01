#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main(){
    ofstream fout ("data.dat");
    double time;
    double velocity = 20;
    for(time = 0; time<=5; time+=.1) //time+=.1 means time=time+.1
    {
        double height = velocity*time-9.8*.5*pow(time,2);
        fout<<time<<" "<<height<<endl;
    }
    
    return 0;
}