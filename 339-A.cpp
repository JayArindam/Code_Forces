#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums;
    string str;
    cin >> str;
    for (int i{1} ; i<=3 ; i++) {
        for (const auto a : str) {
            if ( a-'0' == i ) {
                nums.push_back(i);
            }
        }
    }
    for (int i{0} ; i<nums.size() ; i++) {
        if (i == nums.size()-1) {
            cout << nums[i] << endl;
        }
        else {
            cout << nums[i] << "+" ;
        }
    }

}