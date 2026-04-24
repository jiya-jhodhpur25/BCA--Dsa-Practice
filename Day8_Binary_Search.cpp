#include<iostream>
using namespace std;
int main()
{
int arr[]={1,3,5,7,9,11,12};
int n=8;
int target=7;
int start =0; int high=n-1;
int ans= -1;
while (start<=high)
	{ 
		int mid=(start+high)/2;
if (arr[mid]==target)
	{
	ans=mid; 
	break ; 
	}
else if (arr[mid]<target)
	 {
 	start=mid+1;  
 	}
else{
	 high=mid-1; 
	 }
}
if(ans!=-1)
{
	cout<<"found at index :"<<ans<<endl;
}
else{
cout<<"Not found "<<endl;
}
return 0;
}