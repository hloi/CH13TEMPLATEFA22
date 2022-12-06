//
// Created by hloi on 12/6/2022.
//

#ifndef CH13TEMPLATEFA22_PERSON_H
#define CH13TEMPLATEFA22_PERSON_H
#include <string>

using std::string;

class Person {
private:
    string name;
public:
    Person() {}
    Person(string name, int age);
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    bool operator<(Person other) const;

    friend std::ostream& operator<<(std::ostream& os, Person p);
private:
    int age;
};


#endif //CH13TEMPLATEFA22_PERSON_H
