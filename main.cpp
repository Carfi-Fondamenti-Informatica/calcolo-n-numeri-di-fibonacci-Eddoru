#include <iostream>
using namespace std;

int main() {
    int n, a=1, b=1,c=0,d;

    cin >> n;

    if (n>=2) {
        cout << b << endl;
        for (a = 2; a <= n; a++) {
            d = c + b;
            cout << d << endl;
            c = b;
            b = d;
        }
    }else{
        cout << "errore" << endl;



    }
return 0;

}
