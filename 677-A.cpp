#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <int> f_heights;    
    int friends{0} , height{0} , ans{0};
    cin >> friends >> height;
    for (int i{0} ; i<friends ; i++) {
        int a;
        cin >> a;
        f_heights.push_back(a);
    }
    for (int i{0} ; i<friends ; i++) {
        if (f_heights[i] > height) {
            ans += 2;
        }
        else {
            ans++;
        }
    } 
    cout << ans << endl;
    return 0;
}