//Program to check a year is leap year or not
#include<iostream>
using namespace std;
int main() {
	int year;
	cout<<"enter the year";
	cin>>year;
	if(year%4==0 && year%100!=0|| year%400==0)
	{
		cout<<year<<"leap year";
		
	} else {
		cout<<year<<"not a  leap year";
	}
	return 0;
}
