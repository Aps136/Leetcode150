#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


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
