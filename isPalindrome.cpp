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

bool isPalindrome(int n)
{
    int temp = n;
    int reverseN=0;
    while(n>0)
    {
        int rem = n%10;
        reverseN = reverseN * 10 + rem;
        n = n /10;
    }
    if(reverseN == temp)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPalindrome(n)<<endl;
    return 0;
}