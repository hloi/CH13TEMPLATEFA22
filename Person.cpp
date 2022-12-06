//
// Created by hloi on 12/6/2022.
//
#include <iostream>
#include "Person.h"
using namespace std;


const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

bool Person::operator<(Person other) const {
    return this->age < other.age;
}

std::ostream& operator<<(std::ostream &os, Person p) {
    os << p.name << ", " << p.age << endl;
    return os;
}
