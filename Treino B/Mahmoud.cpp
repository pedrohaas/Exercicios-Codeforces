#include <bits/stdc++.h>
using namespace std;

bool isNonDegenerate(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a)
        return true;
    else
        return false;
}

int main () {

    int n = 0;
    cin>>n;

    vector<int> vec;
    for (int i= 0;i<n;i++){
        int aux;
        cin>>aux;
        vec.push_back(aux);
    }

    bool flag = true;
    sort(vec.rbegin(),vec.rend());

    for (int i = 0; i < n-2; i++) {
        int a = vec[i], b = vec[i+1], c = vec[i+2];
        if (isNonDegenerate(a,b,c)){
            flag = true;
            break;
        }
        else {
            flag = false;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

