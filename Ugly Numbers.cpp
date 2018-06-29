#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ugly_num(int n){
   int ugly[n];
   ugly[0]=1;
   int i2=0;
   int next_multiple_of_5=5;
   int next_multiple_of_2=2;
   int next_multiple_of_3=3;
   int next_ugly_num=1;
   int i3=0;
   int i5=0;
   for (int i=1;i<n; i++)
   {
    
      next_ugly_num=min(next_multiple_of_2,min(next_multiple_of_3,next_multiple_of_5));
      
      
      ugly[i]=next_ugly_num;
      
      if(next_ugly_num == next_multiple_of_2)
      {
       i2 =i2 + 1;
      next_multiple_of_2 =2*ugly[i2];
      }
      if(next_ugly_num == next_multiple_of_3)
      {	i3=i3+1;
      next_multiple_of_3 = ugly[i3]*3;
      }
     if(next_ugly_num == next_multiple_of_5)
      {	i5 = i5+1;
      next_multiple_of_5 = 5*ugly[i5];
      }

   }
   return next_ugly_num;

}


int main(){
    int n,ans;
    cin>>n;
    ans=ugly_num(n);
    cout<<ans<<endl;
}
