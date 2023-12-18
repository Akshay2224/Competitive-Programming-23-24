/*
                    ----------------- INSERTION SORT ALOGORITHM ----------------------------

30 30 50 60 40 20

10

O(n^2) -> Worst case complexity
O(n) -> Best case Complexity
Internal Sort Alogirthm
Stable Sort Alogrithm



*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int temp;
    for(int i=1;i<n;i++)
    {
        temp = array[i];
        int j=i-1;
        while(j>=0 && temp<array[j])
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

