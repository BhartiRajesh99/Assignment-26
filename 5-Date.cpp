#include<iostream>
using namespace std;
class Date
{
    private:
        int day,month,year;
    public:
        Date()
        {
            day=1;month=1;year=2000;
        }
        void setdate(int x,int y,int z)
        {
            day=x;
            month=y;
            year=z;
        }
        void showdate()
        {
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main()
{
    Date g;
    g.showdate();
    g.setdate(12,9,2022);
    g.showdate();
    return 0;
}