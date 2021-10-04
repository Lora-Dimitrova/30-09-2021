#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int N;
    cout << "Vuvedete chislo: ";
    cin >> N;


    int br=0, f_chislo=N; //a
    while ( f_chislo != 0 )
        {
          f_chislo /=10;
          br++;
        }
    cout << br << endl;


    int f_n=N, new_chislo=0; //b
    while ( f_n != 0)
        {
            int cifra = f_n%10;
            new_chislo = new_chislo*10 + cifra;
            f_n /=10;
        }
    cout << new_chislo + N << endl;


    return 0;
}
