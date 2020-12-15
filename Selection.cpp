#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n)
{
     int c;
      for(int i=0;i<n-1;i++)
      {
          c=i;
          for(int j=i+1;j<n;j++)
          {
              if(a[j]<a[c])
              {
                  c=j;
              }
          }
          swap(a[i],a[c]);
      }
      for(int i=0;i<n;i++)
      {
          cout<<a[i]<<" ";
      }
}
int main()
{
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      insertion_sort(a,n);
      return 0;
}