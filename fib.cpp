#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*There is an array of 5 integers. Initially, you only know a1, a2, a4, a5. You may set a3 to any positive integer, negative integer, or zero. The Fibonacciness of the array is the number of integers i (1 ≤ i ≤ 3) such that ai+2 = ai + ai+1. Find the maximum Fibonacciness over all integer values of a3.

Input Format

The first line contains an integer t (1 ≤ t ≤ 500) — the number of test cases.

The only line of each test case contains four integers a1, a2, a4, a5 (1 ≤ ai ≤ 100).

Constraints

-

Output Format

For each test case, output the maximum Fibonacciness on a new line.

Sample Input 0

2
1 1 3 5
1 3 2 1
Sample Output 0

3
2*/

int main() {
   int m;
    cin>>m;
    while(m--){
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int x1= a5-a4;
        int x2= a1+a2;
        int x3= a4-a2;
        vector<int> v = {x1,x2,x3};
        int maxf=0;
        for(int a3: v){
            int fib=0;
            if(a1+a2==a3){
                fib++;
            }
            if(a2+a3==a4){
                fib++;
            }
            if(a3+a4==a5){
                fib++;
            }
            maxf = max(maxf, fib);
        }
        cout<<maxf<<endl;
    }
    
    return 0;
}
