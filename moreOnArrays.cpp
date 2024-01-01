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
    int array[5] =  {n};
    for(int i=0;i<4;i++)
    {
        if(i==4)
        {
            break;
        }
        if(i==2)
        {
            continue;
        }
        cout<<array[i];
    }
    return 0;
}

/*

    1010
    0011

    1010
    1101
   11010

    0001
*/
