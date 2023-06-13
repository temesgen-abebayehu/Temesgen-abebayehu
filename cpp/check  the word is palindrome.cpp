#include<iostream>
#include<cmath>
using namespace std;
int main(){
int sum=0,resalt,exe;
int i=3;
while(i<=333)
{
    exe=pow(i,3);
   sum+=exe;
   i+=2;
}
cout<<"sum="<<sum<<endl;
resalt=1-sum;
cout<<"resalt="<<resalt;
return 0;
}