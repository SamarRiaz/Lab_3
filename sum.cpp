#include<iostream>
using namespace std;
main()
{
int d,sum,n1,n2,n3,n4;
cout<<"Enter a 4-digit number: ";
cin>>d;
n1=d % 10;
n2=(d/10)%10;
n3=(d/100) % 10;
n4=(d/1000) % 10;
sum= n1+n2+n3+n4;	 
cout<<"Sum of the individual digits: "<<sum;
}