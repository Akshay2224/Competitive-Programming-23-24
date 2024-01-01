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
        int j=1;
        while(j<=n-i)
        {
            cout<<' ';
            j++;
        }
        int k=n-i+1;
        while(k<=n)
        {
            cout<<"*";
            k++;
        }
        int l=i-1;
        while(l>=1)
        {
            cout<<'*';
            l--;
        }
        cout<<endl;
        i++;
    }
  
}


