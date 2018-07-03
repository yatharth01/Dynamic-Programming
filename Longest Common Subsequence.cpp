#include <iostream>
using namespace std;

int LCS(string A, string B, int m, int n){
  int table[m+1][n+1];
  
  for(int i=0;i<=m;i++)
  {
  	for(int j=0;j<=n;j++)
  	{
  		if(i==0 || j==0)
  		table[i][j]=0;
  		
  		else if(A[i-1]==B[j-1])
  		table[i][j] = 1+ table[i-1][j-1];
  		
  		else {
  			table[i][j]= max(table[i-1][j] , table[i][j-1]);
  		}
  		
  	}
  }
	return table[m][n];
	
}


int main() {
     string A,B;
     int ans,m,n;
     cin>>A;
     cin>>B;
     m= A.length();
     n= B.length();
     ans = LCS(A,B,m,n);
     cout<<ans;
     
}