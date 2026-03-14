#include<iostream>
using namespace std;
int main()
{
int n ,sum=0;
cout<<"Enter a number : "<<endl;
cin>>n;
int i = 1;
while( i <= n)
{
    if(i%2!=0){
        sum+=i;
    }
    i++;
}
cout<<"the sum of odd numbers are : "<<sum<<endl;
return 0;

}