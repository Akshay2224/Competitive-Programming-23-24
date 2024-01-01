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

void arrange(int arr[], int n)
{
    int i=1;
    int index=0;
    while(index<=n/2)
    {
        arr[index] = i;
        i=i+2;
        index++;
    }
    index = n/2;
    i = n;
    if(i%2!=0)
    {
        i--;
        index = n/2+1;
    }
    while(index<n)
    {
        arr[index] = i;
        i = i -2;
        index++;
    }
}

int main()
{
    int n;
    cin>>n;
    int array[10000];
    arrange(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}