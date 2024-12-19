///10727. Posicion Fibonacci
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long i64;
vector <i64> fib;
void fibonacci(){
  fib.push_back(1);
  fib.push_back(1);
  i64 a = 1, b = 1, aux = 0;
      do{
            aux = b;
            b = a + b;
            a = aux;
            fib.push_back(b);
        }while (b < 9223372036854775808);
}

int busca(i64 x){
    int minimo = 0;
    int maximo = fib.size() - 1;
    int mitad;
    while (minimo <= maximo)
          {
              mitad = minimo + (maximo - minimo) / 2;
              if (fib [mitad] == x)
                 {
                     return mitad;
                 } else if (fib [mitad] < x)
                           {
                               minimo = mitad + 1;
                           } else {
                                      maximo = mitad - 1;
                                  }
          }
    return -1;
}

int main() {
    fibonacci();
    i64 n;
    cin >> n;
    int posicion = busca(n);
    if (busca(n) == -1)
         cout << posicion  << '\n';
    else 
        cout << posicion + 1 << '\n';
    return 0;
}