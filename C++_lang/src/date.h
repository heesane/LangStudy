#include <string.h>
#include <iostream>

using namespace std;

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
    std::cout << "Hour: ";
    std::cin >> hour;
    std::cout << "Minute: ";
    std::cin >> minute;
    std::cout << "Second: ";
    std::cin >> second;
    std::cout << std::endl;
}

void date::showTime() {
    std::cout << hour << ":" << minute << ":" << second << std::endl;
}

class Day {
    private:
        int year;
        int month;
        int day;
    public:
        Day();
        void setDay();
        void showDay();
};

Day::Day() {
    int year = 0;
    int month = 0;
    int day = 0;
}

void Day::setDay() {
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << std::endl;
}

void Day::showDay() {
    std::cout << year << "/" << month << "/" << day << std::endl;
}
