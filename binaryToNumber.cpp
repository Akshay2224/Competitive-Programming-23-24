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
    int num=0;
    int i=0;
    while(n!=0)
    {
        int rem = n%10;
        if(rem == 1)
        {
            num = num+ (rem* pow(2,i));
        }
        n = n/10;
        i++;
    }
    cout<<num<<endl;
    return 0;
}
