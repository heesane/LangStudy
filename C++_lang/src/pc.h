// PC 클래스 정의
class PC
{
private:
    int PC_id;       // PC 번호
    int seat_num;    // 좌석 번호
    Time start_time; // 이용 시작 시간
    Time end_time;   // 이용 종료 시간

public:
    PC();                         // 생성자
    void showSeat(int[]);         // 좌석 정보 출력
    void reserveSeat(int[], int); // 좌석 예약
    void freeSeat(int[]);         // 좌석 해제
    Time getStartTime();          // 이용 시작 시간 반환
    Time getEndTime();            // 이용 종료 시간 반환
    void setStartTime();          // 이용 시작 시간 설정
    void setEndTime();            // 이용 종료 시간 설정
    int getPC_id();               // PC 번호 반환
    int getSeatNum();             // 좌석 번호 반환
    void setPC_id(int);           // PC 번호 설정
    void setSeatNum(int);         // 좌석 번호 설정
    int calculateCharge();        // 이용 요금 계산
};

// PC 클래스 멤버 함수 정의

// 생성자
PC::PC()
{
    PC_id = 0;
    seat_num = 0;
}

// 좌석 정보 출력
void PC::showSeat(int seat_info[])
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
            cout << "사용중" << endl;
        }
    }
}

// 좌석 예약
void PC::reserveSeat(int seat_info[], int seat)
{
    seat_info[seat - 1] = 1;
    seat_num = seat;
}

// 좌석 해제
void PC::freeSeat(int seat_info[])
{
    seat_info[seat_num - 1] = 0;
    seat_num = 0;
}

// 이용 시작 시간 반환
Time PC::getStartTime()
{
    return start_time;
}

// 이용 종료 시간 반환
Time PC::getEndTime()
{
    return end_time;
}

// 이용 시작 시간 설정
void PC::setStartTime()
{
    start_time.setTime();
}

// 이용 종료 시간 설정
void PC::setEndTime()
{
    end_time.setTime();
}

// PC 번호 반환
int PC::getPC_id()
{
    return PC_id;
}

// 좌석 번호 반환
int PC::getSeatNum()
{
    return seat_num;
}

// PC 번호 설정
void PC::setPC_id(int PC_id)
{
    this->PC_id = PC_id;
}

// 좌석 번호 설정
void PC::setSeatNum(int seat_num)
{
    this->seat_num = seat_num;
}

// 이용 요금 계산
int PC::calculateCharge()
{
    Time diff = end_time - start_time;
    int total_minutes = diff.getHour() * 1000;
    if (diff.getMinute() < 31)
    {
        total_minutes += 500;
    }
    else
    {
        total_minutes += 1000;
    }
    return total_minutes;
}