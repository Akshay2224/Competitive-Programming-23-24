#include<iostream>
using namespace std;
int main()
{
    //write your code here
    while(1)
    {
        int n;
        cin>>n;
        if(n== 15)
        {
            continue;
        }
        cout<<n<<" ";
        if(n==50)
        {
            break;
        }
    }
}