#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=0, l = 1, r = 1;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int> aux = a;

    l = r = 0;

    sort(aux.begin(), aux.end());
    for (int i=0, j=0;i<n;i++) {
        if (a.at(i) != aux.at(i) && j == 0) {
            l = i;
            j++;
        } else if (a.at(i) != aux.at(i) && j>0) {
            r = i;
            j++;
        }
    }

    reverse(a.begin() + l, a.begin() + r+1);

    /*
    cout << "[" << l << " " << r << "]\n";
    for(int i=0;i<a.size();i++)
        cout << a.at(i) << ' ';
    cout << endl;
    for(int i=0;i<aux.size();i++)
        cout << aux.at(i) << ' ';
    cout << endl;
    */

    if (equal(a.begin(), a.end(), aux.begin())) {
        cout << "yes\n";
        cout << l+1 << " " << r+1 << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}