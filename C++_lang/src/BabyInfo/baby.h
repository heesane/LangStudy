// Date: 2023/05/01
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class day {
    private:
        int year;
        int month;
        int date;
    public:
        day();
        void setDay();
        void showDay();
};

day::day() {
    int year = 0;
    int month = 0;
    int date = 0;
}

void day::setDay() {
    cout << "Year: ";
    cin >> year;
    cout << "Month: ";
    cin >> month;
    cout << "Date: ";
    cin >> date;
    cout << endl;
}

void day::showDay() {
    cout << year << "/" << month << "/" << date << endl;
}

class date {
    private:
        int hour;
        int minute;
        int second;
    public:
        date();
        void setTime();
        void showTime();
};

date::date() {
    int hour = 0;
    int minute = 0;
    int second = 0;
}

void date::setTime() {
    cout << "Hour: ";
    cin >> hour;
    cout << "Minute: ";
    cin >> minute;
    cout << "Second: ";
    cin >> second;
    cout << endl;
}

void date::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

class baby {
    private:
        static int count;
        int id;
        string sex;
        day birthday;
        date birthtime;
    public:
        baby();
        void setBaby();
        void ShowData();
        void SearchNum(baby[], int);
        int GetID();
};

// 정적 멤버 변수 초기화
int baby::count = 0;

// 일반 생성자

baby::baby() {
    id = 0;
    sex = " ";
    day birthday;
    date birthtime;
}

void baby::setBaby() {
    id = count;
    cout << "SEX:";
    cin >> sex;
    cout << endl;
    birthday.setDay();
    birthtime.setTime();


    count++;
}

// 멤버 변수 출력
void baby::ShowData() {
    cout << "ID: " << id << endl;
    cout << "SEX:" << sex << endl;

    cout << "Birthday: ";
    birthday.showDay();

    cout << "Birthtime: ";
    birthtime.showTime();

    cout << endl;
}

// 아이디를 입력받아서 해당 아이디의 정보를 출력
void baby::SearchNum(baby b[], int num) {
    for (int i = 0; i < 10; i++) {
        if (b[i].id == num) {
            b[i].ShowData();
        }
    }
}

int baby::GetID() {
    return id;
}