#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {

        int n;
        cin>>n;

        vector<int> piles(n);
        piles.clear();

        for(int i=0; i<n;i++) {
            int aux;
            cin>>aux;
            piles.push_back(aux);
        }

        sort(piles.begin(), piles.end());
        auto maxnum = max_element(piles.begin(), piles.end());

        int aux = 1;
        for (int i=0;i<n;i++){
            if (piles.at(i) == aux)
                aux++;
        }

        if (aux > *maxnum) {
            if ((*maxnum % 2) == 1)
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        } else {
            if ((aux % 2) == 1) 
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
    }
        
    return 0;
}