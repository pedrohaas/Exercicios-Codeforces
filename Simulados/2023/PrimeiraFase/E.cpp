#include <bits/stdc++.h>
using namespace std;
#define NMAX 1000005
#define int long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int frequencia[NMAX];
int prox[NMAX];

int retira(int num) {
    string s = to_string(num);
    int ans = 0;
    for (int i = 0; i < (int) s.length(); i++){
        ans += (s[i] - '0');
    }
    return ans;
}

int32_t main() { faster
    int n, k, ans = 0, maior = 0;
    cin>>n>>k;

    fill(frequencia, frequencia + NMAX, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        maior = max(maior, x);
        frequencia[x]++;
    }
    
    for (int i = 0; i <= maior; i++) {
        prox[i] = i - retira(i);
    }

    for (int i = maior; i >= 0; i--) {
        k -= frequencia[i];
        frequencia [ prox[i] ] += frequencia[i];
        if (k<=0) {
            ans = i; break;
        }
    }

    cout << retira(ans) << endl;
    return 0;
}