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

void correspondingPairSum(int arr[],int n,int output[]){
    //Write your code here
    int i=0;
    int j=n-1;
    int index=0;
    while(i<j)
    {
        output[index] = arr[i] + arr[j];
        i++;
        j--;
        index++;
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
    correspondingPairSum(array,n,output);
    for(int i=0;i<n/2;i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}