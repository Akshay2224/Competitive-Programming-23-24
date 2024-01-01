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
    char c;
    c = cin.get();
    int count=0,spaces=0,digit=0;
    while(c!='$')
    {
        if(c-'0' >=0 && c-'0'<=9)
        {
            digit++;
        }
        else if(c==' ' || c== '\n' || c== '\t')
        {
            spaces++;
        }
        else{
            count++;
        }
        c = cin.get();
    }
    cout<<count<<" "<<digit<<" "<<spaces<<endl;
    return 0;
}