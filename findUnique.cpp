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

int checkIfExists(int arr[], int size, int n)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == n)
        {
            count++;
        }
    }
    if(count>1)
    {
        return true;
    }
    return false;


}

int findUnique(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        if(!checkIfExists(arr, size, arr[i]))
        {
            return arr[i];
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int array[100000];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }
    cout<<findUnique(array,n)<<endl;
    return 0;
}