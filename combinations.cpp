/*Dmitry has a string s, consisting of lowercase Latin letters.

Dmitry decided to remove two consecutive characters from the string s and you are wondering how many different strings can be obtained after such an operation.

For example, Dmitry has a string "aaabcc". You can get the following different strings: "abcc" (by deleting the first two or second and third characters), "aacc" (by deleting the third and fourth characters), "aaac" (by deleting the fourth and the fifth character) and "aaab" (by deleting the last two).

Input Format

The first line of input data contains a single integer t (1 ≤ t ≤ 104) — number of test cases.

The descriptions of the test cases follow.

The first line of the description of each test case contains an integer n (3 ≤ n ≤ 2 ⋅ 105).

The second line of the description of each test case contains a string s of length n consisting of lowercase Latin letters.

It is guaranteed that the sum of n for all test cases does not exceed 2 ⋅ 105.

Constraints

-

Output Format

For each test case print one integer — the number of distinct strings that can be obtained by removing two consecutive letters.

Sample Input 0

1
6
aaabcc
Sample Output 0

4*/


#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases

    while (t--) {
        int n;
        string s;
        cin >> n >> s;  // Read the length of the string and the string itself

        unordered_set<string> unique_strings;  // Unordered set to store unique strings

        // Loop through each possible pair of consecutive characters
        for (int i = 0; i < n - 1; ++i) {
            string new_string = s.substr(0, i) + s.substr(i + 2);  // Remove characters at i and i+1
            unique_strings.insert(new_string);  // Add the new string to the set
        }

        cout << unique_strings.size() << endl;  // Print the number of unique strings
    }

    return 0;
}
