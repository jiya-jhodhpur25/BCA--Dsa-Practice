#include<iostream>
using namespace std; 
int firstOcc(int arr[],int n,int target){
int low=0,high=n-1,ans=-1; 
while (low<=high){
	int mid=(low+high)/2;
if(arr[mid]==target )
{
	ans=mid;
	high=mid-1;
	}
	else if(arr[mid]<target )
	{
		low=mid+1;
		}
		else 
		{
			high=mid-1;
			}
			}
			return ans;
			}
	int lastOcc(int arr[],int n,int target){
int low=0,high=n-1,ans=-1; 
while (low<=high){
	int mid=(low+high)/2;		
		if(arr[mid]==target )
{
	ans=mid;
	low=mid+1;
	}
	else if(arr[mid]<target)
	{ 
		low =mid+1;}
		else {
			high=mid-1;
			}
			}
			return ans; 
			}
			int main ()
			{
				int arr[]={1,2,3,3,3,4,5};
				int n =7, target= 3;
				cout<<"first :"<<firstOcc(arr,n,target )<<endl;	cout<<"last :"<<lastOcc(arr,n,target )<<endl;
				return 0;
				}
