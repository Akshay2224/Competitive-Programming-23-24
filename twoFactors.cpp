#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	bool twoFactor = false;
	cin>>n;
	int i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			twoFactor = true;
		}
		i++;
	}	
	if(!twoFactor)
	{
		cout<<-1;
	}
}
