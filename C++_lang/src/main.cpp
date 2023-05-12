#include <iostream>
#include "date_util.h"
#include "pc.h"

using namespace std;

int seat_info[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main()
{
    /* 05.08 수업 내용
    Time t1(2,30,30),t2(3,20,20),max_time;
    max_time = t1.operator+(t2);
    cout << "Total Time :";
    max_time.showTime();
    cout<<endl;
    max_time.checkTime();
    cout << endl;


    Date d1(2021, 1, 1), d2(2021, 12, 31), max_date;
    max_date = d1.operator-(d2);
    max_date.checkDate();

    Time test1(2,0,0);
    test1.operator--();
    test1.showTime();

    Time test2(2,0,0),test3;
    test2.operator*(3).showTime();
    operator*(3,test2.operator*(3)).showTime();
    operator*(operator*(3,test2.operator*(3)),3).showTime();
    */
    int seat_info[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    PC pcs[10];

    while (true)
    {
        cout << "원하시는 작업을 선택하세요." << endl;
        cout << "1. 좌석 상황 보기" << endl;
        cout << "2. PC방 좌석 예약하기" << endl;
        cout << "3. 예약 취소하기" << endl;
        cout << "4. 사용 요금 계산하기" << endl;
        cout << "5. 종료" << endl;

        int menu;
        cin >> menu;

        if (menu == 1)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << i + 1 << "번째 좌석 : ";
                if (seat_info[i] == 0)
                {
                    cout << "빈자리" << endl;
                }
                else
                {
                    cout << "사용중 (PC 번호 : " << pcs[i].getPC_id() << ")" << endl;
                }
            }
        }
        else if (menu == 2)
        {
            int seat;
            cout << "예약할 좌석 번호를 입력하세요 (1 ~ 10) : ";
            cin >> seat;

            if (seat_info[seat - 1] == 1)
            {
                cout << "이미 사용 중인 좌석입니다." << endl;
            }
            else
            {
                int pc_id;
                cout << "사용할 PC 번호를 입력하세요 : ";
                cin >> pc_id;

                pcs[seat - 1].setPC_id(pc_id);
                pcs[seat - 1].setSeatNum(seat);
                pcs[seat - 1].setStartTime();

                seat_info[seat - 1] = 1;

                cout << "좌석 예약이 완료되었습니다." << endl;
            }
        }
        else if (menu == 3)
        {
            int seat;
            cout << "예약을 취소할 좌석 번호를 입력하세요 (1 ~ 10) : ";
            cin >> seat;

            if (seat_info[seat - 1] == 0)
            {
                cout << "예약되어 있지 않은 좌석입니다." << endl;
            }
            else
            {
                pcs[seat - 1].setEndTime();
                int charge = pcs[seat - 1].calculateCharge();
                cout << "사용 요금은 " << charge << "원 입니다." << endl;

                pcs[seat - 1].freeSeat(seat_info);

                cout << "좌석 예약이 취소되었습니다." << endl;
            }
        }
        else if (menu == 4)
        {
            int seat;
            cout << "요금을 계산할 좌석 번호를 입력하세요 (1 ~ 10) : ";
            cin >> seat;

            if (seat_info[seat - 1] == 0)
            {
                cout << "예약되어 있지 않은 좌석입니다." << endl;
            }
            else
            {
                pcs[seat - 1].setEndTime();
                int charge = pcs[seat - 1].calculateCharge();
                cout << "사용 요금은 " << charge << "입니다." << endl;
            }
        }
        else if (menu == 5)
        {
            cout << "감사합니다." << endl;
            break;
        }
    }
}