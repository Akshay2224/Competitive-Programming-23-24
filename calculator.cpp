#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
	int i=0;
	int a, b;
	while(i!=6)
	{
	cin>>i;
	switch(i){
        case 1: {
		  cin>>a>>b;
		  cout<<a+b<<endl;
		  break;
        }
		case 2: {
		  cin>>a>>b;
		  cout<<a-b<<endl;
		  break;
		}
		case 3: {
		  cin>>a>>b;
		  cout<<a*b<<endl;
		  break;
		}	
		case 4: {
		  cin>>a>>b;
		  cout<<a/b<<endl;
		  break;
		}
		case 5: {
		  cin>>a>>b;
		  cout<<a%b<<endl;
		  break;
		}
		case 6: {
		  break;
		}
		default: {
			cout<<"Invalid Operation"<<endl;
		}
        }			
	}
}