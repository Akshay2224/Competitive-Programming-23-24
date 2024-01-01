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
    int start,goal;
    cin>>start>>goal;
    int xorOf = start ^ goal;
    int count=0;
    while(xorOf>0)
    {
        int rem = xorOf%2;
        count = rem+count;
        xorOf = xorOf/2;
    }
    cout<<count;
    return 0;
}
