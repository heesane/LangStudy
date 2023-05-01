#include "WorkLog.h"

using namespace std;

int main(){
    int choice;
    string name;

    WorkLog w[10];
    while(1){
        cout << "1. 입력" << endl;
        cout << "2. 검색" << endl;
        cout << "3. 종료" << endl;
        cout << "선택: ";
        cin >> choice;
        cout << endl;
        if(choice == 1){
            for(int i = 0; i < 10; i++){
                if(w[i].GetID() == 0){
                    cout << i << "번째" << endl;
                    w[i].setWorkLog();
                }
            }
        }
        else if(choice == 2){
            cout << "이름 입력: ";
            cin >> name;
            cout << endl;

            for(int i = 0; i < 10; i++){
                if(w[i].GetName() == name){
                    w[i].showWorkLog();
                    break;
                }
                else if(i == 9){
                    cout << "해당 아이디가 없습니다." << endl;
                }
            }
        }
        else if(choice == 3){
            break;
        }
        else{
            cout << "잘못된 선택입니다. 다시 선택해주세요." << endl;
        }
    }
    return 0;
}