#include <string>   //string 클래스 포함 헤더
#include <iostream> //iostream안에 string헤더가 포함되어있음
using namespace std;

int main()
{
    string str = "I love"; // 문자열 선언

    str.append(" c++ "); // 문자열뒤에 문자열을 붙임
    cout << str << endl;
    str.append("really", 0, 4); // append("str",n,m): 문자열뒤에 붙일 문자열의 인덱스 n부터 m개의 문자를 붙임
    cout << str << endl;
    str.append(2, 'a'); // append(n,'문자'): 문자열 뒤에 문자를 n개만큼 붙임
    cout << str << endl;
    str.insert(2, "insert lang"); // insert(n,"str"): 문자열 index n 뒤에 문자열 삽입
    cout << str << endl;
    str.replace(2, 3, "java"); // replace(n,m,"str"): 문자열 index n 부터 m개의 문자를 치환
    cout << str << endl;
    // str.clear(); // 문자열 초기화 str.erase(); //문자열 전체 지우기
    // cout << str << endl;
    str.erase(5); // earse(n): 문자열 index n번 이후 지우기
    cout << str << endl;
    str.push_back('t'); // 문자열 맨 뒤에 '문자'를 추가
    cout << str << endl;
    str.pop_back(); // 문자열 맨 끝 문자 제거
    cout << str << endl;
    str.assign("you"); // assign("str"): 문자열 전체를 재 할당
    cout << "str.append :" << str << endl;
    return 0;
}
