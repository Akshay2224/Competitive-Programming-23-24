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
void prefixSum(int arr[],int n,int output[]){
    //Write your code here
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
        output[i] = sum ;
    }
}

int main()
{
    int n;
    cin>>n;
    int array[10000];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }
    int output[10000];
    prefixSum(array,n,output);
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
}