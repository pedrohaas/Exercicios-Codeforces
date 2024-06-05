#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n;
    int vetor[100005] = {0}, num;
    for(int i=1;i<=n;i++){
        cin>>num;
        vetor[num] = i;
    }
    cin>>m;
    
    long long a = 0, b = 0;
    int querry = 0;

    while (m--) {
        cin>>querry;
        a += vetor[querry];
        b += n - vetor[querry] + 1;
    }

    cout << a << " " << b << endl;
    return 0;
}