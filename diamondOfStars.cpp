#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int mid=(n+1)/2;
    while(i<=mid)
    {
        int j=1;
        while(j<=mid-i)
        {
            cout<<' ';
            j++;
        }
        j=i-1;
        while(j>=0)
        {
            cout<<'*';
            j--;
        }
        j=i-1;
        while(j>0)
        {
            cout<<'*';
            j--;
        }
        cout<<endl;
        i=i+1;
    }
    int next = mid+1;
    int count=1;
    while(next<=n)
    {
        int j=1;
        while(j<=count)
        {
            cout<<' ';
            j++;
        }
        j=n-next;
        while(j>=0)
        {
            cout<<'*';
            j--;
        }
        j=n-next-1;
        while(j>=0)
        {
            cout<<'*';
            j--;
        }
        cout<<endl;
        next=next+1;
        count=count+1;
    }
}