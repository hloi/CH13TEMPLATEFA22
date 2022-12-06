#include <iostream>
#include "TripleItem.h"
#include "Person.h"
using namespace std;
int main() {
    TripleItem<int> ti(3,2,1);
    cout << ti.minItem() << endl;
    cout << ti;
    TripleItem<double> di(3.2, 4.4, 1.1);
    cout << di.minItem() << endl;
    cout << di;
    TripleItem<string> si("word", "this","is");
    cout << si.minItem() << endl;
    cout << si;
    Person p1("john", 40);
    Person p2("kim", 32);
    Person p3("jerry", 31);
    TripleItem<Person> pi(p1, p2, p3);
    cout << pi;
    cout << pi.minItem() << endl;
    return 0;
}
