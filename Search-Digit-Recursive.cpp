#include<iostream>
using namespace std;
int searchdigit(long long int a,int b,int c);
int main ()
{
	long long int a;
	int b,c;
	cout<<"Enter a number of  nine digit "<<endl;
	cin>>a;
	cout<<"Enter the number to be searched"<<endl;
	cin>>b;
	c=searchdigit(a,b,1);
	    if (c == -1) {
        cout<<"The searched number was not found"<<endl;
    } else
	 {
        cout<<"The position of the searched number is: "<<c<<endl;
    }
}

int searchdigit(long long int a,int b,int c)
{
	if(a==0)
	return c;
	int n1;
	if(a>999999999)
	return -1;
	if(c<=9)
	{	
		n1=a%10;
		if(b==n1)
		return c;
		a=a/10;
		return searchdigit(a,b,c+1);
	}
}
	
