#include <string.h>
#include <iostream>

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
    std::cout << "Year: ";
    std::cin >> year;
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Date: ";
    std::cin >> date;
    std::cout << std::endl;
}

void day::showDay() {
    std::cout << year << "/" << month << "/" << date << std::endl;
}
