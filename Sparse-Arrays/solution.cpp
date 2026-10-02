
#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings,
                             vector<string> queries) {

    vector<int> result;

    for (string query : queries) {

        int count = 0;

        for (string str : strings) {

            if (str == query) {
                count++;
            }
        }

        result.push_back(count);
    }

    return result;
}

int main() {

    int n;
    cin >> n;

    vector<string> strings(n);

    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    int q;
    cin >> q;

    vector<string> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    vector<int> result = matchingStrings(strings, queries);

    for (int x : result) {
        cout << x << endl;
    }

    return 0;
}
