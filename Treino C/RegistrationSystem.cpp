#include <bits/stdc++.h>
using namespace std;

bool insere(string a, map<string, int>& database) {
    if (database.count(a) == 0) {
        database.insert(a);
        return true;
    } else {
        return false;
    }
}

int main () {

    int n; 
    cin>>n;
    map<string, int> database;

    while (n--) {
        string a, nova; 
        cin>>a;
        bool flag = insere(a, database);
        bool aux = false;

        if (flag) {cout << "OK" << endl; aux = true;}

        
        for (int i = 1; !flag ; i++) {
            nova = a;
            string aux = to_string(i);
            nova.append(aux);
            flag = insere(nova, database);
        }

        if (!aux) {
            cout << nova << endl;
        }
    }

    return 0;
}