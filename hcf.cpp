#include<iostream>
using namespace std;
int prime_array[100],size;
void genprime(int);
void largest(int a,int b,int c)
{
	int large=a;
	if(large<b)
		large=b;
	if(large<c)
		large=c;
	genprime(large);
}
void genprime(int large)
{
	bool flag=true;
	int k=0;
	for(int i=2;i<=large;i++)
	{
		for(int j=2;j<i;j++)
		{
			//cout<<"\n for:"<<i<<" "<<j<<endl;
			if(i%j==0)
			{
				flag=false;
				//cout<<"\n not prime:"<<i<<endl;
				break;
			}
		}
		if(flag==true)
		{
			//cout<<"\n adding:"<<i<<endl;
			prime_array[k]=i;
			k++;
			size=k;
			
		}
		if(flag==false)
		{
			flag=true;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<" "<<prime_array[i];
	}
	cout<<endl;
	
}
int hcf(int a,int b,int c)
{
	int result=1;
	largest(a,b,c);
	for(int i=0;i<size;i++)
	{
		if(a%prime_array[i]==0 && b%prime_array[i]==0 && c%prime_array[i]==0 )
		{
			result*=prime_array[i];
			a/=prime_array[i];
			b/=prime_array[i];
			c/=prime_array[i];
			i=-1;
		}
	}
	return result;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<hcf(a,b,c);
	//genprime(7);
	return 0;
	
	
}
