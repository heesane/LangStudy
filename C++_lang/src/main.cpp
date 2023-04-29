#include <iostream>

using namespace std;

class vehicle{
    private:
        int num;
        int year;
    public:
        vehicle(){
            num=0;
            year=0;
        }
        vehicle(int n,int y){
            num =n;
            year = y;
        }

        void ShowVehicle(){
            cout << "num = "<<num<<", year ="<<year<<endl;
        }
};

int main()
{
    vehicle v(10,10);
    v.ShowVehicle();
    return 0;
}
