#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int spaces = 1;
		while(spaces <= n-i)
		{
			cout<<' ';
			spaces++;
		}
		int numbers = 1;
        int val=1;
		while(numbers <= i)
		{
			cout<<val;
            val++;
			numbers++;
		}
		i++;
		cout<<endl;
	}
  
}


