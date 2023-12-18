#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char a;
	cin>>a;
	int c =a;
	// if (c>=65 && c<=90)
	// {
	// 	cout<<1;
	// }
	// else if(c>=97 && c<=122){
	// 	cout<<0;
	// }
	// else
	// {
	// 	cout<<-1;
	// }	
    if (isupper(c))
	{
		cout<<1;
	}
	else if(islower(c)){
		cout<<0;
	}
	else
	{
		cout<<-1;
	}	
}
