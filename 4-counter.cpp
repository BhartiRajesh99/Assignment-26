#include<iostream>
using namespace std;
class Counter
{
    private:
        static int k;
    public:
        Counter()
        {
            k++;
        }
        static int getk()
        {
            return k;
        }
};
int Counter::k=0;
int main()
{
    Counter h,l,k;
    cout<<"count="<<Counter::getk();
    return 0;
}