//
// Created by hloi on 12/6/2022.
//

#ifndef CH13TEMPLATEFA22_TRIPLEITEM_H
#define CH13TEMPLATEFA22_TRIPLEITEM_H
#include <iostream>

using std::endl;
using std::cout;

template <typename TheType>
class TripleItem {
public:
    TripleItem(TheType val1, TheType val2, TheType val3);
//    void printAll() const;
    TheType minItem() const;

    template<typename myType>
    friend std::ostream& operator<<(std::ostream& os, TripleItem<myType> p);

    template<typename myType>
    friend std::ostream& operator>>(std::ostream& os, TripleItem<myType> p);
private:
    TheType item1;
    TheType item2;
    TheType item3;

};

template<typename TheType>
TripleItem<TheType>::TripleItem(TheType val1, TheType val2, TheType val3) {
    item1 = val1;
    item2 = val2;
    item3 = val3;

}

//template<typename TheType>
//void TripleItem<TheType>::printAll() const {
//    cout << "(" << item1 << ", " << item2 << ", " << item3 << ")" << endl;
//}

template<typename TheType>
TheType TripleItem<TheType>::minItem() const {
    TheType temp = item1;
    if (item2 < temp) {
        temp = item2;
    }
    if (item3 < temp){
        temp = item3;
    }
    return temp;
}

template<typename myType>
std::ostream& operator<<(std::ostream& os, TripleItem<myType> p) {
    os << p.item1 << ", " << p.item2 << ", " << p.item3 << endl;
    return os;
}
#endif //CH13TEMPLATEFA22_TRIPLEITEM_H
