#include<iostream>
using namespace std;
class Box
{
    private:
        int length,breadth,height,vol;
    public:
        Box()
        {
            length=1;
            breadth=1;
            height=1;
            vol=1;
        }
        void setDimensions(int l,int b,int h)
        {
            length=l;
            breadth=b;
            height=h;
        }
        void calculateVolume()
        {
            vol=length*breadth*height;
        }
        void DisplayVolume()
        {
            cout<<"volume="<<vol<<endl;
        }
};
int main()
{
    Box b;
    b.DisplayVolume();
    b.setDimensions(4,5,7);
    b.calculateVolume();
    b.DisplayVolume();
    return 0;
}