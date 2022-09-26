#include<iostream>
using namespace std;
int main(){
int a, b;
cout<<"Enter your numbers: ";

cin>>a;
if(a>=80)
cout<<" You got A+\n";
else if (74<a && a<80)
cout<<"You got A\n";
else if (69<a && a<75)
cout<<" You got A-\n";
else if (64<a && a<70)
cout<<" You got B+\n";
else if (59<a && a<65)
cout<<" You got B\n";
else if (54<a && a<60)
cout<<" You got C+\n";
else if (49<a && a<55)
cout<<" You got C\n";
else if (44<a && a<50)
cout<<" You got D+\n";
else if (39<a && a<45)
cout<<" You got D\n";
else
cout<<"Sorry, you have failed\n";
return 0;
}