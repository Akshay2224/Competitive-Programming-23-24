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

int PrintTemp(int temp)
{
    int celsius = (temp-32)*(5.0/9);
    return celsius;
}

void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
     while(start<=end)
     {
         cout<<start<<" "<<PrintTemp(start)<<endl;
         start = start+step;
     }
    
}

int main()
{
    int start, end, step;
    cin>>start>>end>>step;
    printTable(start, end, step);
    return 0;
}