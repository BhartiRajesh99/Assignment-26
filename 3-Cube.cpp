#include<iostream>
using namespace std;
class Cube
{
    private:
        int side,vol;
    public:
        Cube()
        {
            side=0;
            vol=0;
        }
        void setSide(int x)
        {
            side=x;
        }
        int getSide()
        {
            return side;
        }
        void volume()
        {
            vol=side*side*side;
        }
        int getvolume()
        {
            return vol;
        }
};
int main()
{
    Cube a;
    a.setSide(4);
    a.volume();
    cout<<"Volume of cube having side "<<a.getSide()<<" is "<<a.getvolume();
    return 0;
}