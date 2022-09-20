#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showTime()
        {
            cout<<h<<"hrs "<<m<<"min "<<s<<"sec\n";
        }
        void normalize()
        {
            if(s>=60)
            {
                s=s-60;
                m=m+1;
            }
            if(m>=60)
            {
                m=m-60;
                h=h+1;
            }
        }
        Time add(Time T)
        {
            Time T1;
            T1.h=h+T.h;
            T1.m=m+T.m;
            T1.s=s+T.s;
            T1.normalize();
            return T1;
        }
};
int main()
{
    Time r1,r2,r3;
    r1.setTime(3,59,59);
    r1.showTime();
    r2.setTime(7,59,59);
    r2.showTime();
    r3=r1.add(r2);
    r3.showTime();
    return 0;
}