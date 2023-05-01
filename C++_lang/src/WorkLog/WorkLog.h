#include <string.h>
#include <iostream>

#include "day.h"
#include "date.h"

using namespace std;

class WorkLog{
    private:
        int id;
        string name;
        string task;
        day d;
        date t;
    public:
        WorkLog();
        void setWorkLog();
        void showWorkLog();
        void searchWorkLog(string);
        int GetID();
        string GetName();
};

WorkLog::WorkLog() {
    int id = 0;
    string name = "";
    string task = "";
    day d;
    date t;
}

int WorkLog::GetID() {
    return id;
}
std::string WorkLog::GetName() {
    return name;
}

void WorkLog::setWorkLog() {
    std::cout << "ID: ";
    std::cin >> id;
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Task: ";
    std::cin >> task;
    std::cout << std::endl;
    d.setDay();
    t.setTime();
}

void WorkLog::showWorkLog() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Task: " << task << std::endl;
    d.showDay();
    t.showTime();
}

void WorkLog::searchWorkLog(string name) {
    if (this->name == name) {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Task: " << task << std::endl;
        d.showDay();
        t.showTime();
    }
}