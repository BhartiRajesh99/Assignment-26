#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<a<<" + "<<b<<"i\n";
        }
        Complex add(Complex C)
        {
            Complex A;
            A.a=a+C.a;
            A.b=b+C.b;
            return A;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(2,6);
    c2.setData(6,7);
    c3=c1.add(c2);
    c3.showData();
    return 0;
}