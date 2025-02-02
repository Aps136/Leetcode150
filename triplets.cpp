/*You are given an array a of n elements a1,a2,…,an.

You can perform the following operation any number (possibly 0) of times:

Choose two integers i and j, where 1 ≤ i,j ≤ n, and assign ai := aj.

Find the minimum number of operations required to make the array a satisfy the condition:

For every pairwise distinct triplet of indices (x,y,z) (1 ≤ x,y,z ≤ n, x ≠ y, y ≠ z, x ≠ z), there exists a non-degenerate triangle with side lengths ax, ay and az, i.e. ax + ay > az, ay + az > ax and az + ax > ay.

Input Format

Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 104) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n (3 ≤ n ≤ 2 ⋅ 105) — the number of elements in the array a.

The second line of each test case contains n integers a1,a2,…,an (1 ≤ ai ≤ 109) — the elements of the array a.

It is guaranteed that the sum of n over all test cases does not exceed 2 ⋅ 105.

Constraints

-

Output Format

For each test case, output a single integer — the minimum number of operations required.

Sample Input 0

4
7
1 2 3 4 5 6 7
3
1 3 2
3
4 5 3
15
9 3 8 1 6 5 3 8 2 1 4 2 9 4 7
Sample Output 0

3
1
0
8*/


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the size of the array
        vector<int> a(n);
        
        unordered_map<int, int> freq;  // Map to store frequency of elements
        
        // Read the array and compute frequencies
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Find the maximum frequency
        int max_freq = 0;
        for (const auto& p : freq) {
            max_freq = max(max_freq, p.second);
        }

        // The minimum number of operations is to convert all non-max_freq elements to the most frequent element
        cout << n - max_freq << endl;
    }

    return 0;
}
