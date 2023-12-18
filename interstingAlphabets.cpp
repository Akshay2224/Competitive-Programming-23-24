#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
     int n;
     cin>>n;
     int i=1;
     while(i<=n)
     {
         int j=1;
         char startChar = 'A' + n - i ;
         while(j<=i)
         {
             char resultChar = startChar + j -1;
             cout<<resultChar;
             j++;
         }
         cout<<endl;
         i++;
     }
}
