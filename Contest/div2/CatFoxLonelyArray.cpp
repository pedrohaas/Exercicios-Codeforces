#include <iostream>
 
using namespace std;
 
int main() {
 
    string a;
    cin>>a;

    int cont = 0;

    for (int i = 0; i < 3; i++){
        if (a[i] == 'O') cont++;
    }
    
    if (cont != 1) {cout << '?' << endl; return 0;}

    if ((a[0] == 'X' && a[1] == 'X') ||
        (a[2] == 'X' && a[1] == 'X')) {
            cout << "Alice" << endl; 
            return 0;
    }

    cout << "*" << endl;
    return 0;
}