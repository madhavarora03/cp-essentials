#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define bug(...) __f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

const int M = 20;
int sz;
int mod;

struct Mat {
    int m[M][M];

    Mat() {
        memset(m, 0, sizeof(m));
    }

    void identity() {
        for (int i = 0; i < sz; i++) {
            m[i][i] = 1;
        }
    }

    Mat operator*(Mat a) {
        Mat res;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                for (int k = 0; k < sz; k++) {
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

void solve() {
    int k;
    cin >> k;
    sz = k;

    vector<int>b(k);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    Mat res;
    res.identity();

    Mat T;
    for (int i = 0; i < k; i++) {
        cin >> T.m[0][i];
    }
    for (int i = 0; i < k; i++) {
        T.m[i][i] = 1;
    }

    int m, n;

    cin >> m >> n >> mod;



}

int32_t main() {

    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

    return 0;
}