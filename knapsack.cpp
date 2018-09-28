#include<iostream>
using namespace std;

int max(int a,int b)
{
	//a>b?return a:return b;
	if(a>b)
		return a;
	return b;
}

int knapsack(int w[],int v[],int n,int W)
{
	if(n==0||W==0)
		return 0;
	else if(w[n-1]>W)
		return knapsack( w, v, n-1, W);
	else
		return max(v[n-1]+knapsack( w, v, n-1,W-w[n-1]),knapsack(w,v,n-1,W));
}

int main()
{
	int w[]={10,20,30},v[]={60,100,120},n=3,W=50;
	cout<<knapsack(w,v,n,W);
	return 0;
}
