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
    string a;
    getline(cin,a);
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string p;
        getline(cin,p);
        v.push_back(p);
    }
    bool isFound = false;
    for(int j=0;j<a.size();j++)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[j] in )
            {
                isFound = true;
                break;
            }
        }
        if(!isFound)
        {

        }
    }
    return 0;
}