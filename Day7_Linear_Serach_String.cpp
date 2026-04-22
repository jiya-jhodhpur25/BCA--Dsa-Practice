#include<iostream>
using namespace std;
int main()
{
char str[]="jodhpur";
char target ='p';
bool found =false;
int position = -1;
for(int i=0;str[i]!='\0';i++)
{
if (str[i]==target ){
	position =i;
	found =true;
	break ;
}
}
if(found )
{
	cout<<"found at index :"<<position <<endl;
}
else{
cout<<"Not found "<<endl;
}
return 0;
}