#include<iostream>
using namespace std;
int main()
{
int arr[]={1,1,2,2,3,3,4,4};
int n=8;
int j=0;
for(int i=0; i<n;i++)
{
	if(arr[i]!=arr[j])
	{
		j++;
		arr[j]=arr[i];
		}
}

int uniquecode=j+1;
cout <<"unique count :"<<uniquecode <<endl;
cout<<"Array:";
for (int i=0;i<uniquecode; i++)
{
	cout<<arr[i]<<" ";
	}
return 0;
}