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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=n;i>k+1;i--)
        {
            v.push_back(i);
        }
        int len = n-v.size();
        for(int i=1;i<=len;i++)
        {
            v.push_back(i);
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }

    }

    return 0;
}