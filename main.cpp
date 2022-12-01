#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int a;
    cin >> a;
    if (trovaprimo (a,a-1)==true)
    {
        cout << "numero primo";
    }
    else
    {
        cout << "numero non primo";
    }
    return 0;
}
