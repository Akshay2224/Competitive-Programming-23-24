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

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1 || n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin>>n;
    int p=2;
    int mul=1;
    int last=1;
    while(p<n)
    {
        int k = mul;
        mul = mul+last;
        last = k;
        p++;
    }
    cout<<mul<<endl;
    cout<<fibo(n)<<endl;
    return 0;
}