#include <iostream>
#include "baby.h" // baby 헤더파일 포함
using namespace std;
int main() {
    int choice, num;
    baby b[10]; // baby 객체 배열 생성
    while (1) {
        cout << "1. 입력" << endl;
        cout << "2. 검색" << endl;
        cout << "3. 종료" << endl;
        cout << "선택: ";
        std::cin >> choice;
        cout << endl;
        if (choice == 1) { // 입력 선택
            for (int i = 0; i < 10; i++) {
                if (b[i].GetID() == 0) {
                    cout << i << "번째" << endl;
                    b[i].setBaby(); // 빈 객체에 정보 입력
                }
            }
        }
        else if (choice == 2) { // 검색 선택
            cout << "아이디 입력: ";
            std::cin >> num;
            cout << endl;

            for (int i = 0; i < 10; i++) {
                if (b[i].GetID() == num) { // 입력한 아이디와 일치하는 객체를 찾아서 출력
                    b[i].ShowData();
                    break;
                }
                else if (i == 9) { // 일치하는 아이디를 찾지 못한 경우
                    cout << "해당 아이디가 없습니다." << endl;
                }
            }
        }
        else if (choice == 3) { // 종료 선택
            break;
        }
        else { // 잘못된 선택
            cout << "잘못된 선택입니다. 다시 선택해주세요." << endl;
        }
    }
    return 0;
}