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
void sumOfTwoArrays(int arr1[],int arr2[],int n,int arr3[]){
    for(int i=0;i<n;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int array[10000], array2[10000],array3[10000];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>array2[i];
    }
    sumOfTwoArrays(array,array2,n,array3);
    for(int i=0;i<n;i++)
    {
        cout<<array3[i]<<" ";
    }
    cout<<endl;
    return 0;
}