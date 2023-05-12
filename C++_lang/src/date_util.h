/**
  ******************************************************************************
  * @date    2023-05-08
  * @file    date.h
  * @author  heesane
  * @brief   This file contains the headers of the date.cpp
  ******************************************************************************
  */ 


#include <string.h>
#include <iostream>

using namespace std;

// 달의 일수가 들어가 있는 전역변수 daysInMonth
int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 해당 년도가 윤년인지 확인하는 함수
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

// 해당 월의 일 수를 반환하는 함수
int getDaysInMonth(int year, int month) {
    if (month == 2 && isLeapYear(year)) { // 2월이면서 윤년인 경우
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}


/*
*    @brief 시, 분, 초에 관한 정보를 다루는 Time 클래스
*    
*    @note 생성자 초기화 : 0,0,0    
*    @note setTime() : 시, 분, 초를 입력받아 저장
*    @note showTime() : 시, 분, 초를 
*    @note checkTime() : 시간을 체크하는 함수
*    @note operator + : 시간을 더하는 연산자 오버로딩
*    @note operator - : 시간을 빼는 연산자 오버로딩
*/
class Time {
    private:
        int hour;
        int minute;
        int second;
    public:
        /*생성자 정의*/
        Time();
        Time(int h, int m, int s) : hour(h), minute(m), second(s) { } // 생성자 초기화
        
        /*멤버함수 정의*/
        void setTime();
        void showTime();
        int getHour();
        int getMinute();
        void checkTime();

        /*Friend 함수 정의(operator *)*/
        friend Time operator*(const Time& t, int n);
        friend Time operator*(int n, const Time& t);

        /*산술연산자 재정의*/
        Time operator + (const Time& t)const;
        Time operator - (const Time& t)const;
        Time operator*(const int n)const;
        Time operator/(const int n)const;

        /*논리연산자 재정의*/
        bool operator == (const Time& t);

        /*단항연산자 재정의*/
        Time& operator++ ();
        Time& operator-- ();

        /*대입연산자 재정의*/
        Time& operator+= (const Time& t);
        Time& operator-= (const Time& t);
        Time& operator*=(const int t);
        Time& operator/=(const int t);

        
};
/*
*   @brief 기본 생성자
*/
Time::Time() {
    int hour = 0;
    int minute = 0;
    int second = 0;
}

/*
*   @brief 시간 설정 함수
*/
void Time::setTime() {
    cout << "Hour: ";
    cin >> hour;
    cout << "Minute: ";
    cin >> minute;
    cout << "Second: ";
    cin >> second;
    cout << endl;
}

/*
*   @brief 출력 함수
*/
void Time::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

int Time::getHour(){
    return hour;
}

int Time::getMinute(){
    return minute;
}

/*
*   @brief 시간을 체크하는 함수
*/
void Time::checkTime(){
    Time check(6,0,0);
    if(hour < 6){
        cout << "아직 더 사용가능합니다."<<endl;
        check = check - *this;
        check.showTime();
        cout << "남았습니다."<<endl;
    }else{
        cout << "더 이상 사용할 수 없습니다."<<endl;
    }
}

/*
*   @brief 시간을 더하는 연산자 오버로딩
*/
Time Time::operator + (const Time& t)const {
    Time result;
    int time1,time2;
    time1 = hour*3600 + minute*60+second;
    time2 = t.hour*3600+t.minute*60+t.second;
    result.hour = (time1+time2)/3600;
    result.minute = (time1+time2)%3600/60;
    result.second = (time1+time2)%3600%60;
    return result;
}

/*
*   @brief 시간을 빼는 연산자 오버로딩
*/
Time Time::operator - (const Time& t)const{
    Time result;
    int time1,time2;
    time1 = hour*3600 + minute*60+second;
    time2 = t.hour*3600+t.minute*60+t.second;
    result.hour = (time1-time2)/3600;
    result.minute = (time1-time2)%3600/60;
    result.second = (time1-time2)%3600%60;
    return result;
} 

Time Time::operator*(const int n)const{
    Time temp;
    int time1;
    time1 = hour*3600 + minute*60+second;
    time1 *= n;
    temp.hour = time1/3600;
    temp.minute = time1%3600/60;
    temp.second = time1%3600%60;
    return temp;
}

Time Time::operator/(const int n)const{
    Time temp;
    int time1;
    time1 = hour*3600 + minute*60+second;
    time1 /= n;
    temp.hour = time1/3600;
    temp.minute = time1%3600/60;
    temp.second = time1%3600%60;
    return temp;
}

bool Time::operator == (const Time& t){
    if(hour == t.hour && minute == t.minute && second == t.second){
        return true;
    }else{
        return false;
    }
}

Time& Time::operator ++ (){
    minute++;
    if(minute == 60){
        hour++;
    }
    return (*this);
}

Time& Time::operator -- (){
    minute--;
    if(minute <= 0){
        hour--;
        minute = 59;
    }
    return (*this);
}

Time& Time::operator += (const Time& t){
    int time1,time2;
    time1 = hour*3600 + minute*60+second;
    time2 = t.hour*3600+t.minute*60+t.second;
    time1 += time2;
    hour = time1/3600;
    minute = time1%3600/60;
    second = time1%3600%60;
    return (*this);
}

Time& Time::operator-=(const Time& t){
    int time1,time2;
    time1 = hour*3600 + minute*60+second;
    time2 = t.hour*3600+t.minute*60+t.second;
    time1 -= time2;
    hour = time1/3600;
    minute = time1%3600/60;
    second = time1%3600%60;
    return (*this);
}

Time& Time::operator*= (const int t){
    int time1;
    time1 = hour*3600 + minute*60+second;
    time1 *= t;
    hour = time1/3600;
    minute = time1%3600/60;
    second = time1%3600%60;
    return (*this);
}

Time& Time::operator/= (const int t){
    int time1;
    time1 = hour*3600 + minute*60+second;
    time1 /= t;
    hour = time1/3600;
    minute = time1%3600/60;
    second = time1%3600%60;
    return (*this);
}

/*
*   @brief friend 함수
*/
Time operator*(const Time& t, int n){
    Time result;
    int time1;
    time1 = t.hour*3600 + t.minute*60+t.second;
    time1 *= n;
    result.hour = time1/3600;
    result.minute = time1%3600/60;
    result.second = time1%3600%60;
    return result;
}

/*
*   @brief friend 함수
*/
Time operator*(int n, const Time& t){
    Time result;
    int time1;
    time1 = t.hour*3600 + t.minute*60+t.second;
    time1 *= n;
    result.hour = time1/3600;
    result.minute = time1%3600/60;
    result.second = time1%3600%60;
    return result;
}

/*
*   @brief 년, 월, 일에 관한 정보를 다루는 Date 클래스
*   @note 생성자 초기화 : 0,0,0
*   @note setDate() : 년, 월, 일을 입력받아 저장
*   @note showDate() : 년, 월, 일을 출력
*   @note checkDate() : D-Day를 체크하는 함수
*   @note operator - : 날짜를 빼는 연산자 오버로딩
*/
class Date {
    private:
        int year;
        int month;
        int day;
    public:
        Date();
        Date(int y, int m, int d) : year(y), month(m), day(d) { } // 생성자 초기화 (생성자 오버로딩
        void setDate();
        void showDate();
        void checkDate();
        Date operator - (const Date& d)const;
};

/*
*   @brief 기본 생성자
*/
Date::Date() {
    int year = 0;
    int month = 0;
    int day = 0;
}

/*
*   @brief 날짜 설정 함수
*/
void Date::setDate() {
    cout << "Year: ";
    cin >> year;
    cout << "Month: ";
    cin >> month;
    cout << "Date: ";
    cin >> day;
    cout << endl;
}

/*
*   @brief 출력 함수
*/
void Date::showDate() {
    cout << year << "/" << month << "/" << day << endl;
}

/*
*   @brief D-Day를 체크하는 함수
*/
void Date::checkDate(){
    int d_day;
    d_day = year*365 + month*30+day;
    cout << "D-day : " << d_day << endl;
}

/*
*   @brief 날짜를 빼는 연산자 오버로딩
*   @param d 빼고자 하는 날짜
*   @retval result 빼고 난 날짜 ex)360
*/
Date Date::operator - (const Date& d)const{
    Date result;
    int date1,date2;
    date1 = year*365 + month*30+day;
    date2 = d.year*365+d.month*30+d.day;
    result.year = (date1-date2)/365;
    result.month = (date1-date2)%365/30;
    result.day = (date1-date2)%365%30;
    return result;
}