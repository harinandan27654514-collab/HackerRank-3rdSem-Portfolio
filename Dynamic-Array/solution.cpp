
#include <bits/stdc++.h>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {

    vector<vector<int>> seq(n);

    int lastAnswer = 0;

    vector<int> result;

    for (auto query : queries) {

        int type = query[0];
        int x = query[1];
        int y = query[2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {

            seq[idx].push_back(y);

        }
        else if (type == 2) {

            lastAnswer = seq[idx][y % seq[idx].size()];

            result.push_back(lastAnswer);
        }
    }

    return result;
}

int main() {

    int n, q;

    cin >> n >> q;

    vector<vector<int>> queries(q, vector<int>(3));

    for (int i = 0; i < q; i++) {

        cin >> queries[i][0]
            >> queries[i][1]
            >> queries[i][2];
    }

    vector<int> result = dynamicArray(n, queries);

    for (int x : result) {
        cout << x << endl;
    }

    return 0;
}
