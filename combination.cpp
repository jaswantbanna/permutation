
#include<iostream>
using namespace std;
int fact(int n)
{
	int fact=1;
	
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
}
int per(int n,int r)
{
	if(n==r)
	{
		return fact(n);
	}
	else
	return fact(n)/fact(n-r);
}
int comb(int n,int r)
{
	if(n==r)
	return 1;
	else
	return (fact(n)/(fact(n-r)*fact(r)));
}
int main()
{
	int n,r,p,c;
	cout<<"enter the value of n and r:"<<endl;
	cin>>n>>r;
	p=per(n,r);
	c=comb(n,r);
	cout<<p<<endl;
	cout<<c<<endl;
	cout<<"permutation is "<<p<<endl;
	cout<<"combination is"<<c<<endl;
	
	return 0;
	
	
}
