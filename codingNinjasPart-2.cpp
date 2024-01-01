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
    int p=n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=p)
        {
            cout<<j;
            j++;
        }
        int l=1;
        while(l<=(i-1)*2)
        {
            cout<<"*";
            l++;
        }
        j=p;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        p=p-1;
        cout<<endl;
        i++;
    }
    return 0;
}