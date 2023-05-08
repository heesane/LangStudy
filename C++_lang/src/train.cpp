#include <iostream>
#include <string>
#include "date.h"
using namespace std;

class Train {
private:
    int number;
    string type;
    Day departure_date;
    date departure_time;

public:
    Train() {
        number = 0;
        type = "";
        departure_date = Day();
        departure_time = date();
    } // 기본 생성자 추가
    

    void setInfo() { // 정보 입력 함수 추가
        cout << "Enter train number: ";
        cin >> number;
        cin.ignore(); // 버퍼 비우기
        cout << "Enter train type: ";
        cin >> type;
        cout << "Enter departure date: ";
        departure_date.setDay();
        cout << "Enter departure time: ";
        departure_time.setTime();
    }

    void print(string departure_city, string arrival_city) const { // 상수 멤버 함수로 변경
        cout << "Number: " << number << endl;
        cout << "Type: " << type << endl;
        cout << "Departure city: " << departure_city << endl;
        cout << "Arrival city: " << arrival_city << endl;
        cout << "Departure date: " << departure_date.showDay() << endl;
        cout << "Departure time: " << departure_time.showTime() << endl;
    }
};

int main() {
    Train trains[10]; // Train 객체 배열 추가
    int num_trains = 0; // 현재 저장된 열차 수

    while (true) {
        int menu;

        cout << "1. Add train information" << endl;
        cout << "2. Print all train information" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> menu;
        cout << endl;

        if (menu == 1) {
            if (num_trains < 10) { // 열차 수가 10을 넘어가지 않도록 함
                trains[num_trains].setInfo();
                num_trains++;
            } else {
                cout << "Maximum number of trains reached." << endl;
            }
        } else if (menu == 2) {
            if (num_trains == 0) {
                cout << "No train information added yet." << endl;
            } else {
                string departure_city;
                string arrival_city;

                cout << "Enter departure city: ";
                cin.ignore(); // 버퍼 비우기
                getline(cin, departure_city);

                cout << "Enter arrival city: ";
                getline(cin, arrival_city);

                cout << endl;

                for (int i = 0; i < num_trains; i++) {
                    trains[i].print(departure_city, arrival_city);
                    cout << endl;
                }
            }
        } else if (menu == 3) {
            break;
        } else {
            cout << "Invalid input." << endl;
        }
    }

    return 0;
}
