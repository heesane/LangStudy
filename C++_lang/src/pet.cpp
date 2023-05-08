#include <iostream>
#include <string>
#include "date.h"

using namespace std;

class Pet {
private:
    string name;
    int age;
    char gender;
    Day birthDate;
    Day adoption_date;
    static int num_pets;

public:
    Pet();
    void print() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Adoption date: " << adoption_date << endl;
    }
    void setInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter birth date (YYYY/MM/DD): ";
        birthDate.setDay();
        cout << "Enter adoption date (YYYY/MM/DD): ";
        cin.ignore(); // 버퍼 비우기
        adoption_date.setDay();
    }
    static int get_num_pets() {
        return num_pets;
    }
};
// 기본 생성자
Pet::Pet() {
    num_pets++;
    this->age = 0;
    this->gender = NULL;
    this->birthDate = Day();
    this->adoption_date = Day();
    this->name = "";
}
int Pet::num_pets = 0;

int main() {
    int menu;
    Pet Pets[10];

    while (1) {
        cout << "1. Create a new pet" << endl;
        cout << "2. Print all pets" << endl;
        cout << "3. Show number of pets" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> menu;
        switch (menu) {
            // set
            case 1:
                for (int i = 0; i < 10; i++) {
                    Pets[i].setInfo();
                }
                break;
            // show
            case 2:
                for (int i = 0; i < 10; i++) {
                    Pets[i].print();
                }
                break;
            case 3:
                cout << "Number of pets: " << Pet::get_num_pets() << endl;
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "Invalid input." << endl;
                break;
        }
    }

    return 0;
}
