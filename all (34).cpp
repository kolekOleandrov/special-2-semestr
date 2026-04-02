#include <iostream>

using namespace std;

int main() {
    int i = 60;
    do
    {
        cout << i << endl;
        i -= 2;
    } 
    while (i >= 10);
    return 0;
}