#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,power;
	cin>>n>>power;
	int mul=1;
	int i=1;
	while(i<=power){
		mul = mul * n;
		i++;
	}
	cout<<mul;
}
