#include <iostream>
using namespace std;
int main()
{
    // rumus : f_n = f_n1 + f_n2

    int n, f_n, f_n1, f_n2;

    cout << "Program Deret Fibonacci" << endl;
    for(int i=0; i<100; i++){
        cout << "-";
    }

    cout << "\nMasukkan nilai ke-n : ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << " ";
    for(int i = 1; i < n; i++){
        f_n  = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " "; // menampilkan hasil deret fibonacci
    }
    cout << endl;

    cin.get();
    return 0;
}
