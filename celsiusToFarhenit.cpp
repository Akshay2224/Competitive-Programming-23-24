#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

	int start,end,gap;
	cin>>start>>end>>gap;
	int curr=start;
	while(curr<=end)
	{
		int celsius = (curr-32)*(5.0/9);
		cout<<curr<<" "<<celsius<<endl;
		curr = curr + gap;
	}
}


