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
bool checkArmstrong(int n){
	//Write your code here
    int temp = n;
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    n = temp;
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;
        sum = sum+pow(rem,count);
        n = n/10;
    }
    if(sum == temp)
    {
        return true;
    }
    return false;
}


int main()
{
    int n;
    cin>>n;
    cout<<checkArmstrong(n);
    return 0;
}