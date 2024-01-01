#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

/*
                    ----------------- SELECTION SORT ALOGORITHM ----------------------------

30 30 50 60 40 20

10

O(n^2) -> Worst case complexity
O(n)^2 -> Best case Complexity
Internal Sort Alogirthm
Unstable Sort Alogrithm



*/


int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int i=0;
    while(i<n)
    {
        int j=i;
        int smallest=array[j];
        int index = j;
        while(j+1<n-1)
        {
            if(smallest>array[j])
            {
                smallest = array[j];
                index = j;
            }
            j++;
        }
        int temp = array[i];
        array[i] = array[index];
        array[index] = temp;
        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }    
    cout<<endl;

    return 0;
}