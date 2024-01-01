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

int linearSearch(int array[], int n,int val)
{
    int ele = -1;
    for(int i=0;i<n;i++)
    {
        if(val == array[i])
        {
            return i;
        }
    }
    return ele;
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
    int elem;
    cin>>elem;
    int index = linearSearch(array,n,elem);
    cout<<index<<endl;
    return 0;
}