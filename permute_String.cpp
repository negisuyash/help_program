#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>

void swap(char *x ,char *y);
void permute(char *a,int l,int r)
{
	if(l==r)
	cout<<endl<<a;
	else
	{
		for(int i=l;i<r;i++)
		{
			swap(a+l,a+i);
			permute(a,l+1,r);
			swap(a+i,a+l);
		}
	}
}

void swap(char* x,char* y)
{
	char temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	char a[100];
	gets(a);
//	cout<<a;
	int n=strlen(a);
	permute(a,0,n);
	return 0;
}
