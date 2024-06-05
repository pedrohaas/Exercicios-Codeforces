#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c) {
    int ans = 0;

    while (a > 0 && b > 0 && c > 0) {

      if (a > 0 && b > 0) {
        a--; b--; c--;
        ans++;
      }  

    }


    return ans;
}

int main () {

    int t;
    cin>>t;

    while (t--) {
        int a,b,c;
        vector<int> vec(3, 0);
        cin>>vec[0]>>vec[1]>>vec[2];
        sort(vec.begin(), vec.end());
        if (vec[0] == vec[1] && vec[1] == vec[2]) cout << "-1" << endl;
        else cout << solve(vec[0], vec[1], vec[2]) << endl;
    }

    return 0;
}