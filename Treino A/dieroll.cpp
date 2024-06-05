#include <bits/stdc++.h>
using namespace std;

int main () {

    int y, w;
    cin >> y >> w;

    int maior = max(y,w);

    if (maior == 6) cout << "1/6" << endl;
    else if (maior == 5) cout << "1/3" << endl;
    else if (maior == 4) cout << "1/2" << endl;
    else if (maior == 3) cout << "2/3" << endl;
    else if (maior == 2) cout << "5/6" << endl;
    else if (maior == 1) cout << "1/1" << endl;

    return 0;
}