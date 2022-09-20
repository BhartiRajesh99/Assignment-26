#include<iostream>
using namespace std;
class Bill
{
    private:
        int unit;
        float bill;
    public:
        Bill()
        {
            unit=0;
            bill=0;
        }
        void detail()
        {
            char name[20];
            int x;
            cout<<"Enter name of customer:";
            cin.getline(name,20);
            cout<<"Enter units:";
            cin>>x;
            unit=x;
        }
        void calculateBill()
        {
            if(unit>=0&&unit<=100)
                bill=unit*1.2;
            else if(unit>=101&&unit<=200)
                bill=120+(unit-100)*2;
            else 
                bill=320+(unit-200)*3;
        }
        void displayBill()
        {
            cout<<"Your Electricity Bill="<<bill;
        }
};
int main()
{
    Bill b1;
    b1.detail();
    b1.calculateBill();
    b1.displayBill();
    return 0;
}