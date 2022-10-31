#include <iostream>
using namespace std;

int main(){

    int i, j;

    cout << "Nama : Annisa Permata Bunda" <<endl;
    cout << "NIM : 22343037" <<endl;
    cout << "========================" <<endl;
    cout << "Masukkan nilai i :"<<endl;
    cin >> i;
    cout << "Masukkan nilai j :"<<endl;
    cin >> j;
    cout << "========================" <<endl;

    do {
        cout << "Maka Nilai " << i << "X" << j << " yaitu : " ;
        cout << i*j <<endl;
        i++;
        j++;
    }
    while (i<10&&j<10);

return 0;
}
