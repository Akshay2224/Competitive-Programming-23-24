#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int basic, allow;
	char grade;
	float hra,da,pf,salary;
	cin>>basic>>grade;
	hra = (20.00/100) * basic;
	da = (50.00/100) * basic;
	switch(grade){
		case 'A': {
			allow = 1700;
			break;
		}
		case 'B': {
			allow = 1500;
			break;
		}
		default: {
			allow = 1300;
		}
	}
	pf = (11.00/100)* basic;
	salary = (basic+hra+da+allow)-pf;
	int ans = round(salary);
	cout<<ans;
	
}
