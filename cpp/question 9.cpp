#include <iostream>
#include<cmath>
using namespace std;
int main(){
int i=3,j,k,num,ave,sum=0;
bool isprime=true;
cout<<"enter the number: ";
cin>>num;
for(j=2;j<=sqrt(num);j++){
    if(num%j==0)
        isprime=false;
}
if(isprime){
    cout<<num<<" is prime number:";
    for(k=1;k<=num;k++){
        sum+=k;
    }
    ave=sum/k-1;
    cout<<"the average is "<<ave;
}
else{
cout<<num<<" is not prime and also the prime factor are\n";
while(num%2==0){
    num/=2;
    j=1;
    cout<<2<<" ";
}
while(i<=sqrt(num)){
    if(num%i==0){
        num/=i;
        cout<<i<<" ";
    }
    else
    i+=2;
}
cout<<num;
}
 return 0;}

