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

void swapAlternate(int arr[], int size)
{
    int i=0;
    while(i<size-1)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i= i +2; 
    }    
}

int main()
{
    int n;
    cin>>n;
    int array[10000];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }

    swapAlternate(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}