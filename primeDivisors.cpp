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
int* printDivisors(int n) {
    int* array = new int[n];
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            array[count] = i;
            count++;
        }
    }
    return array;
}

int main()
{
    int n;
    cin>>n;
    int* array1 = printDivisors(n);
    for(int i=0;i<n;i++)
    {
        cout<<array1[i]<<" ";
    }
    printDivisors(n);
    return 0;
}