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
    int n,start;
    cin>>n>>start;
    int array[n];
    array[0] = start;
    int xorVal = array[0];
    for(int i=1;i<n;i++)
    {
        array[i] = array[0] + (2 * i);
        xorVal = xorVal ^ array[i];
    }
    cout<<xorVal;
    return 0;
}