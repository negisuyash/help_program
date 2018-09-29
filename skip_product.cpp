#include<iostream>
using namespace std;

void print_array(int* a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

int main()
{
	int n;
	cin>>n;
	int arr[n],res[n],prod=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		prod*=arr[i];
	}
	//cout<<"\n"<<prod;
	for(int i=0;i<n;i++)
	{
		res[i]=prod/arr[i];
	}
	cout<<endl<<"GIVEN ARRAY:\n";
	print_array(arr,n);
	cout<<endl<<"\nRESULT ARRAY:\n";
	print_array(res,n);
	return 0;
	
}
