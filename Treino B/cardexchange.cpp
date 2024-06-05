#include <bits/stdc++.h>
using namespace std;

int contador(vector<int> vetor, int n){
    int cont = 0;
    for(int i = 0;i<vetor.size();i++){
        if (vetor[i] == n)
            cont++;
    }
    return cont;
}

void printVec(vector<int> vetor){
    for(unsigned int i=0;i < vetor.size();i++){
        cout << vetor.at(i) << " ";
    }
    cout << endl;
}

int main() {

    int t = 0, ans = 0;
    cin>>t;

    while(t--) {

        int n,k;
        cin>>n>>k;

        vector<int> cards(n);
        cards.clear();

        for(int i=0;i<n;i++){
            int aux;
            cin>>aux;
            cards.push_back(aux);
        }

        sort(cards.begin(), cards.end());
        int maior = 0, index = 0;

        for (int i = 0;i<cards.size();i++){
            int tam = contador(cards, cards.at(i));
            if (tam > maior) {
                maior = tam;
                index = i;
            }
        }

        for(int i=0, j=0;i<cards.size(),j<k;i++) {
            if (cards.at(i) == cards.at(index)) {
                cards.erase(cards.begin() + i);
                j++;
            }
        }

        auto it1 = cards.cbegin();
        auto it2 = cards.cend();

        for(int i=0;i<k-1;i++){
            if ((i % 2) == 0)
                cards.push_back(*it1);
            else
                cards.push_back(*it2);
        } 

        printVec(cards);
        ans = cards.size();
        cout << ans << endl;
    }

    return 0;
}