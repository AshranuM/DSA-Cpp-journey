

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> all;

    sort(arr.begin(), arr.end());

    do {
        all.push_back(arr);
    } while (next_permutation(arr.begin(), arr.end()));

    vector<int> current = {1, 2, 3};

    int index = -1;

    for (int i = 0; i < all.size(); i++) {
        if (all[i] == current) {
            index = i;
            break;
        }
    }

    int nextIndex = (index + 1) % all.size();

    for (int x : all[nextIndex]) {
        cout << x << " ";
    }

    return 0;
}
