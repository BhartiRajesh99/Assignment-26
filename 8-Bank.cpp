#include<iostream>
using namespace std;
class Bank
{
    private:
        int year,pr;
        float si,roi;
    public:
        Bank()
        {
            pr=0;
            roi=0;
            year=0;
            si=0;
        }
        void set(int x,float y,int z)
        {
            pr=x;
            roi=y;
            year=z;
        }
        void calculateSI()
        {
            si=(pr*roi*year)/100.0;
        }
        void displaySI()
        {
            cout<<"Simple Interest="<<si<<endl;
        }
};
int main()
{
    Bank b;
    b.set(2000,1.5,5);                                              
    b.calculateSI();
    b.displaySI();
    return 0;
}