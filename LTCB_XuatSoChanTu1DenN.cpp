#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    // In các số chẵn từ 1 đến n
    cout << "Cac so chan tu 1 den " << n << " la : ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
