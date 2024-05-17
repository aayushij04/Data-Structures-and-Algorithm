// //New array then copy
// //Recurssion
// //Two pointer


//RECURSSION

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
 
// void reverse(int *arr,int n,int i,int *arr1)
// {
  
//    if(n==0)
//    {
//      return;
//    }
  
//    arr1[i++]=arr[n-1];
//     reverse(arr,n-1,i,arr1);

// }

// int main(){
//      int arr[10];
//      int n;
      
//     cout<<"Enter the size of array";
//     cin>>n;
//     int arr1[n];
//      for(int i=0;i<n;i++)
//      {
//         cin>>arr[i];
//      }
//    reverse(arr,n,0,arr1);
    
// for(int i=0;i<n;i++)
// {
//    cout<<arr1[i]<<" ";
// }
// return 0;
// }


//TWO POINTER---O(n/2)
//SC---O(1)

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  
void reverse(int *arr,int n)
{
   int s=0;
   int e=n-1;
   for(int i=s;i<n/2;i++)
   {
      swap(arr[s++],arr[e--]);
   }

}
int main(){
    int arr[10];
     int n;
      
    cout<<"Enter the size of array";
    cin>>n;
    int arr1[n];
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
   reverse(arr,n); 
   for(int i=0;i<n;i++)
{
   cout<<arr[i]<<" ";
}
return 0;
}