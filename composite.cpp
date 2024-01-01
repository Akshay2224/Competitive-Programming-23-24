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

bool print_composite(int n)
{
    //Write your code here
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<print_composite(n);
    return 0;
}