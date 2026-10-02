
#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice++;
        }
        else if (a[i] < b[i]) {
            bob++;
        }
    }

    return {alice, bob};
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp_temp;
    getline(cin, a_temp_temp);
    stringstream ss1(a_temp_temp);

    vector<int> a(3);
    for (int i = 0; i < 3; i++) {
        ss1 >> a[i];
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);
    stringstream ss2(b_temp_temp);

    vector<int> b(3);
    for (int i = 0; i < 3; i++) {
        ss2 >> b[i];
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < 2; i++) {
        fout << result[i];

        if (i != 1) {
            fout << " ";
        }
    }

    fout << "\n";
    fout.close();

    return 0;
}
