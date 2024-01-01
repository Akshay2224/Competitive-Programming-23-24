#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    int val=0;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<' ';
            j++;
        }
        int k=n-i+1;
        int number=i;
        while(k<=n)
        {
            cout<<number;
            number=number+1;
            k++;
        }
        int l=i-1;
        number=number-2;
        while(l>=1)
        {
            cout<<number;
            l--;
            number--;
        }
        cout<<endl;
        i++;
    }
  
}


