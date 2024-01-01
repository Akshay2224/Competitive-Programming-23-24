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
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for(int i=0;i<s.size();i++)
    {
        if(!isupper(s[i]))
        {
            s[i] = toupper(s[i]);
        }

        int a = s[i];
        if(!((a>=65 && a<=90) || (a>=48 && a<=57)))
        {
            s.erase(i,1);
            i--;
        }
    }
    string checkP = s;
    reverse(s.begin(),s.end());
    if(s == checkP)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }

}