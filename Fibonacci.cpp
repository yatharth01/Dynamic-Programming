#include<iostream>
using namespace std;

 int fib(int n){

    int a,b,c;
    a=0;
    b=1;
	for(int i=2;i<=n;i++)
	{
      c=a+b;
      a=b;
      b=c;
	}

return b;

}

int main(){
	int n,ans;
	cin>>n;
	if(n<=1)
	cout<<1<<endl;

	else{
            ans=fib(n);
	cout<<ans<<endl;
	}

}