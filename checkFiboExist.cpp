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


bool checkMember(int n){

/* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
*/
    int start=0;
    int second = 1;
    while(n>=start)
    {
        cout<<start<<" "<<second<<endl;        
        if(n==start)
        {
            return true;
        }
        int temp = start;
        start = second;
        second = temp + second;
    }
    return false;


}

int main()
{
    int n;
    cin>>n;
    if(checkMember(n))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}