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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> m;
        int count=0;
        for(int i=1;i<=s.size();i++)
        {
            if(m.count(s[i-1])==0)
            {
                m[s[i-1]] = 1;
            }
            else{
                m[s[i-1]] = m[s[i-1]]+1;
            }
        }
        for (const auto& pair : m) {
            if((pair.first - 65+1) <= pair.second ){
                count++;
            }
        }          
        cout<<count<<endl;
    }

}