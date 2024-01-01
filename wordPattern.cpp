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
    string pattern, s;
    getline(cin, pattern);
    getline(cin, s);
    int i=0;
    map<string, string> m;
    bool answer=true;
    string words;
    vector<string> v;
    string p=" ";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            v.push_back(p);
            p=' ';
        }
        else{
            p = p + s[i];
        }
    }
    v.push_back(p);
    while(i<=pattern.size())
    {
        string keyToFind = string(1, pattern[i]);
        
        if (m.count(keyToFind) == 0) {
            m[keyToFind] = v[i];
        }
        else{
            
        }
            i++;
        }
        // if(m[keyToFind] != str)
        //     {
        //         answer = false;
        //     }
        // }
        // for(int i=0;i<s.size();i++)
        // {

        // }
        // }
    // for (const auto& pair : m) {
    //     cout << pair.first << ": " << pair.second << endl;
    // }       
    // }
    cout<<answer;
}