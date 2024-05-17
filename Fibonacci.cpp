#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n,int x,int y)
{
    int temp;
    if(n==0)
    {
        return 0;
    }
    if(n<2)
    {
        return 1;
    }
   
    while(n>1)
    {
        temp=x+y;
        x=y;
        y=temp;
        n--;
    }
    return y;

}
int main(){
    int n;
    cin>>n;
    int x=0;
    int y=1;
    cout<<fib(n,x,y);
return 0;
}