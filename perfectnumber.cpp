#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
	int n;
	cin>>n;
	int i=1,sum=0;
	while(i<n)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
		i++;
	}
	if(sum == n)
	{
		cout<<n<<" is a perfect number";
	}
	else	{
		cout<<n<<" is not a perfect number";
	}

}
