#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a==b && b==c && a==c)
		{
			cout<<"Equilateral Triangle";
		}
		else if((a==b) || (b==c) || (c==a))
		{
			cout<<"Isosceles Triangle";
		}
		else{
			cout<<"Scalene Triangle";
		}
	}
	else{
		cout<<"Not a Triangle";
	}
}
