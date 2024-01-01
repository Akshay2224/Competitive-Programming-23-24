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
    int array[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    v.push_back(array[0]);
    for(int i=0;i<n-1;i++)
    {
        int curr = array[i] ^ array[i+1];
        v.push_back(curr);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

/*

0 0 0  11   
0 1 1  01
1 0 1
1 1 0

    10
    00

    101
    010
    111


*/