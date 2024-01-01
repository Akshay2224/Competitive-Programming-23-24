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
                    ----------------- BUBBLE SORT ALOGORITHM ----------------------------

30 30 50 60 40 20

10

O(n^2) -> Worst case complexity
O(n) -> Best case Complexity
Internal Sort Alogirthm
Stable Sort Alogrithm



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
    int total=n-1;
    while(total>0)
    {
        int i=0;
        bool flag=true;
        while(i<total)
        {
            if(array[i]>array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                flag = false;
            }
            i++;
        }
        if(flag)
        {
            break;
        }
        total--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}