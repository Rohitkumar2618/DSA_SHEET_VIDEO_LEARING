#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// sorting vector of vectors using second indexing 

bool myCompForFirstIndex(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}

void sortV(vector<vector<int>>& v) {
    sort(v.begin(), v.end(), myCompForFirstIndex);
}

int main() {
    vector<vector<int>> v = {{1, 44}, {0, 55}, {0, 22}, {0, 11}, {2, 33}};

    sortV(v);

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
