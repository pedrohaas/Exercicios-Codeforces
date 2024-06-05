#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,ans = 0, energy = 0;
    cin>>n;
    int vetor[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>vetor[i];
        ans = max(ans, vetor[i]);
    }

    cout << ans << endl;
    return 0;
}