//to calculate digits of a number
#include<iostream>
using namespace std;
int main() {
	int n,i=0;
	cout<<"enter a number\n";
	cin>>n;
	if(n==0)
	{
		i=1;
	}
	else
	{
		while(n!=0) {
			n=n/10;
			i++;
			
		}
	}
	cout<<"the no of digits = "<<i;
}
