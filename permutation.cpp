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

int checkFactorial(int n)
{
    int mul=1;
    for(int i=1;i<=n;i++)
    {
        mul = mul * i;
    }
    return mul;
}

int permutation(int n, int r) {
    //Write your code here
    return checkFactorial(n)/checkFactorial(n-r);
}


int main()
{
    int n,r;
    cin>>n>>r;
    cout<<permutation(n,r);
    return 0;
}