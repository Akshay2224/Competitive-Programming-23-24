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

int main()
{
    int n;
    cin>>n;
    int array[100000];
    int i=0;
    while(i<n)
    {
        cin>>array[i];
        i++;
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>array[i])
        {
            min = array[i];
        }
    }
    cout<<min;
    return 0;
}