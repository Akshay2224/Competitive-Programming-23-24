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

void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
   //Write your code
   int maxElem = *(max_element(arr,arr+n));
    for(int i=0;i<n;i++)
    {

            output[i] = arr[i]+extraCandies>=maxElem ? true : false;
        
    }
}

int main()
{
    int n, candies;
    cin>>n>>candies;
    int array[10000];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }
    bool output[10000];
    maximum_candy(n,array,candies,output);
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}