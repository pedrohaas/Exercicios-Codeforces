#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> baralho;
    for(int i = 1 ; i <= 13; i++)
        baralho[i] = 4;
    int n;
    cin >> n;
    int maoJ, maoM;
    maoJ = maoM = 0;
    int num, num2;
    cin >> num >> num2;
    maoJ += num + num2;
    baralho[num]--;
    baralho[num2]--;

    cin >> num >> num2;
    maoM += num + num2;
    baralho[num]--;
    baralho[num2]--;

    int totalMesa;
    for(int i = 0; i<n; i++){
        cin >> num;
        baralho[num]--;
        totalMesa += num;
    }
    maoJ+=totalMesa;
    maoM+=totalMesa;
    int restoJ = 23 - maoJ;
    int restoM = 23 - maoM;

    int resto = restoM <= restoJ ? restoM : restoJ + 1;
     
    if(baralho[resto]){
        cout << resto << "\n";
        return 0;
    }

    while(true){
        if(baralho[++resto]){
            if(maoM + resto > 23){
                cout << "-1\n";
            }else{
                cout << resto << "\n";
            }
            break;  
        }
        if(resto > 13){
            cout << "-1\n";
            break;
        }
    }

    return 0;
}