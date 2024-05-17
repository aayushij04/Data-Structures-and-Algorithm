//New Array--O(n)

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
//  void rotate(int *arr,int n,int k,int j,int arr1[])
//  {
//   k=k%n;
   
//    for(int i=k;i<n;i++)
//    {
//      arr1[j++]=arr[i];
//    }
//   for(int i=0;i<k;i++)
//   {
//     arr1[j++]=arr[i];
//   }

//  }
// int main(){
//   int arr[]={3,4,1,5,34,23};
//   int n=sizeof(arr)/sizeof(int);
//   int k;
//   int arr1[n];
//   cout<<"enter no. of rotations";
//   cin>>k;

//   rotate(arr,n,k,0,arr1);
//   for(int i=0;i<n;i++)
//   {
//     cout<<arr1[i]<<" ";
//   }
// return 0;
// }



//Double reversal  TC--O(n/2)
             //SC--O(1)

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(int* arr,int s,int e)
{
  
   for(int i=s;i<e;i++)
   {
      swap(arr[s++],arr[e]);
      e--;
   }

}
 void rotate(int *arr,int n,int k)
 {
     reverse(arr,0,n-1);
     reverse(arr,0,n-(k%n)-1);
     reverse(arr,n-(k%n),n-1);
 }
int main(){
    int arr[]={3,4,1,5,34,23,4,3,29};
  int n=sizeof(arr)/sizeof(int);
  int k;
 
  cout<<"enter no. of rotations";
  cin>>k;

  rotate(arr,n,k);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
return 0;
}