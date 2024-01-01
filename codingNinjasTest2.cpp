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


{
    int n;
    cin>>n;
    int firstMin = INT_MIN, secondMin = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k>firstMin )
        {
            secondMin = firstMin;
            firstMin = k;

        }
        else if(k>secondMin &&firstMin!=k )
        {
            secondMin = k;
        }
    }
    cout<<secondMin<<endl;
    return 0;
}