// Date: 2023/05/01
#include <iostream>
#include <math.h>
#include <string.h>

// Car 클래스 선언
class Car{
    private:
        int number;
        char* owner;
        static int count;
    public:
        // 생성자 2개 정의
        Car();
        ~Car();
        Car(int, char*);
        // 자동차 정보 출력하는 함수
        void showCar() const;

        void getCar();
        // 자동차 수를 반환하는 정적 함수
        static int getCount();
        // Car 클래스의 friend 함수로 선언하여 클래스 내부 멤버 변수에 접근 가능하게 함
        friend void PrintCar(Car[],int);
};

// 정적 멤버 변수 초기화
int Car::count = 0;

// Car 클래스 생성자1, 자동차 번호만 받음
Car::Car(){
    number =0;
    owner = NULL;
    std::cout << "기본 생성자 호출" << std::endl;
}

// Car 클래스 소멸자
Car::~Car(){
    std::cout << "소멸자 호출" << std::endl;
    delete [] owner;
}

// Car 클래스 생성자2, 자동차 번호와 주인 이름을 받음
Car::Car(int n, char* o){
    number = n;
    owner = new char[strlen(o)+1];
    std::cout<<"" <<std::endl;
}

// 자동차 정보 출력하는 함수
void Car::showCar() const
{
    std::cout << "Car number: " << number << ", Owner:"<< owner << std::endl;
}

void Car::getCar(){
    char name[20];
    std::cout << "Car Number :";
    std::cin >> number;
    std::cout << "Car Owner:";
    std::cin >> name;
    owner = new char[strlen(name)+1];
    strcpy(owner,name);

}

// 자동차 수를 반환하는 정적 함수
int Car::getCount(){
    return count;
}

// Car 클래스의 friend 함수로 선언하여 클래스 내부 멤버 변수에 접근 가능하게 함
void PrintCar(Car c[],int n){
    for(int i=0;i<n;i++){
        std::cout << "Car number: " << c[i].number << std::endl;
        std::cout << "Car owner: " << c[i].owner << std::endl;
    }
}