/*input
3
string_1
string_2
string_3
*/

// Date: 2023/05/01
#include <iostream>
#include <math.h>
#include "rectangle.h" // Rectangle 클래스의 선언이 들어있는 헤더 파일
#include "car.h" // Car 클래스의 선언이 들어있는 헤더 파일
#include "time.h"
#include "baby.h"

using namespace std;


int main()
{
    
    // ------------------------------------------------
    // Rectangle 클래스를 테스트하는 코드
    // 두 개의 Rectangle 객체를 생성하여 복사, 교환, 거리 계산 및 출력하는 코드

    // Rectangle r1(10, 5), r2(20, 12); // 크기가 각각 (10, 5)와 (20, 12)인 Rectangle 객체 생성

    // cout << "Before copying " << endl;
    // cout << "Rectangle 1: " << endl;
    // r1.showRectangle(); // r1 객체의 정보 출력
    // cout << "Rectangle 2: " << endl;
    // r2.showRectangle(); // r2 객체의 정보 출력

    // copyRectangle(r1, r2); // r2 객체의 정보를 r1 객체로 복사

    // cout << "After copying " << endl;
    // cout << "Rectangle 1: " << endl;
    // r1.showRectangle(); // r1 객체의 정보 출력 (r2의 정보를 복사함)
    // cout << "Rectangle 2: " << endl;
    // r2.showRectangle(); // r2 객체의 정보 출력 (r2의 정보가 그대로 유지됨)

    // cout << "Before Swapping " << endl;
    // cout << "Rectangle 1: " << endl;
    // r1.showRectangle(); // r1 객체의 정보 출력
    // cout << "Rectangle 2: " << endl;
    // r2.showRectangle(); // r2 객체의 정보 출력

    // swapRectangle(r1, r2); // r1과 r2 객체의 정보를 교환

    // cout << "After Swapping " << endl;
    // cout << "Rectangle 1: " << endl;
    // r1.showRectangle(); // r1 객체의 정보 출력 (r2와 교환됨)
    // cout << "Rectangle 2: " << endl;
    // r2.showRectangle(); // r2 객체의 정보 출력 (r1과 교환됨)

    // distanceRectangle(r1, r2); // r1과 r2 객체의 거리를 계산하여 출력

    // Rectangle r3;
    // r3 = desRectangle(r1, r2); // r1과 r2 객체의 정보를 결합하여 새로운 객체 r3 생성

    // cout << "Rectangle 3: " << endl;
    // r3.showRectangle(); // r3 객체의 정보 출력

    // ------------------------------------------------

    // Car 클래스를 테스트하는 코드
    // 세 개의 Car 객체를 생성하여 정보 출력 및 총 생성된 Car 객체 수 출력하는 코드

    // Car c1(1234); // 차량 번호가 1234인 Car 객체 생성
    // c1.showCar(); // c1 객체의 정보 출력
    // cout << "Total number of cars: " << Car::getCount() << endl; // 생성된 Car 객체 수 출력

    // Car c2(5678); // 차량 번호가 5678인 Car 객체 생성
    // c2.showCar();
    // cout << "Total number of cars: " << Car::getCount() << endl;
    
    // Car c3(9012);// 차량 번호가 9012인 Car 객체 생성
    // c3.showCar();
    // cout << "Total number of cars: " << Car::getCount() << endl;
    
    // ------------------------------------------------

    // Car *pcar = new Car;
    // pcar->getCar();
    // pcar->showCar();
    // delete pcar;
    
    // return 0;

    // ------------------------------------------------
    return 0;

}
