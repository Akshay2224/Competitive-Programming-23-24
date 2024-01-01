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
    string s = "";
    long long int count=0;
    while(n!=0)
    {
        int rem = n%2;
        if(rem==0)
        {
            s = s+'0';
        }
        else{
            s= s+'1';
        }
        n = n/2;
    }
    if(s.size()==0)
    {
        s = "0";
    }
    reverse(s.begin(),s.end());
    count = stoll(s);
    cout<<count;
    return 0;
}