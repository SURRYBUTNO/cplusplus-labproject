#include <iostream>

#include "Date.h"
using namespace std;

int main()
{
    Date d1;
    Date d2(2, 4, 2002);

    cout << "==== DATE 1 ====" << endl;
    d1.print();
    cout << "==== END DATE 1 ====" << endl;
    cout << "\n\n\n";

    cout << "==== DATE 2 ====" << endl;
    d2.print();
    cout << "==== END DATE 2 ====" << endl;

    return 0;
}
