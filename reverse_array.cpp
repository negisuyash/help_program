#include<iostream>
using namespace std;

int main()
{

	
	int b[5],arr[5]={1,2,3,4,5};
	//cout<<"\nflag1";
	for(int i=0;i<5;i++)
	{
		b[i]=arr[5-i];
		
		
	}
//	cout<<"REVERSing";
	for(int i=0;i<5;i++)
	{
		arr[i]=b[i];
	}
	//cout<<"REVERSE DONE";
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";	
}
