// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int findpeak(vector<int> &nums){
    int n = nums.size();
    if(n==0) return -1;
    if(n==1) return nums[0];
    int l=0;
    int r = nums.size()-1;
    while(l<=r){
        int mid = (l+(r-l))/2;
        bool isleftsmaller = (mid==0||nums[mid]>nums[mid-1]);
        bool isrightsmaller = (mid==n-1||nums[mid]>nums[mid+1]);
        if(isleftsmaller && isrightsmaller) return nums[mid];
        else if(mid>0 && nums[mid-1]>nums[mid]){
            r = mid-1;
        }else{
            l=mid+1;
        }
        
    }return -1;
}

int main() {
    //find peak of that
    vector<int> arr={1,3,6,2,1,0};
    cout<<findpeak(arr)<<endl;
   
    }

