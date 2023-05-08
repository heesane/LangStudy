#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    int number;
    string name;
    Day order_date;
    Day delivery_date;

public:
    Product(int number, string name) {
        this->number = number;
        this->name = name;
        this->order_date = Day();
    }

    void get_delivery_date() {
        // 배송날짜 = 주문날짜 + 2일
        delivery_date.day = order_date.day + 2;
    }

    void print_delivery_info() {
        get_delivery_date();
        cout << "상품번호: " << number << endl;
        cout << "상품명: " << name << endl;
        cout << "주문날짜: " << order_date.showDay() << endl;
        cout << "배송예정일: " << delivery_date.showDay() << endl;
    }
};

int main() {
    int number;
    string name;
    Product product[10];
    int menu;

    while (true) {
        cout << "\n===== Menu =====" << endl;
        cout << "1. 상품 주문하기" << endl;
        cout << "2. 상품 보기"<<endl;
        cout << "3. 종료" << endl;
        cout << "메뉴를 선택하세요: ";
        cin >> menu;

        if (menu == 1) {
            for(int i =0;i<10;i++){
                cout << "상품번호: ";
                cin >> number;
                cout << "상품명: ";
                cin >> name;
                product[i].number = number;
                product[i].name = name;
                product[i].order_date = Day().setDay();
                product[i].get_delivery_date();
            }
        }else if(menu==2){
            for(int i =0;i<10;i++){
                product[i].print_delivery_info();
            }
        } 
        else if (menu == 3) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        } else {
            cout << "잘못된 메뉴입니다. 다시 선택해주세요." << endl;
        }
    }

    return 0;
}
