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
    int n,c;
    cin>>n>>c;
    int mul=1;
    int sum=0;
    bool noChoice = false;
    for(int i=1;i<=n;i++)
    {
        if(c==1)
        {
            sum = sum+i;
        }
        else if(c==2){
            mul = mul * i;
        }
        else{
            noChoice = true;
            break;
        }
    }
    if(noChoice)
    {
        cout<<"-1"<<endl;
    }else{
        if(c==1)
        {
            cout<<sum<<endl;
        }
        else{
            cout<<mul<<endl;
        }
    }
    return 0;
}