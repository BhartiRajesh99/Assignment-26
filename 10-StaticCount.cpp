#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int k;
    public:
        static void vok()
        {
            k++;
        }
        static void displayk()
        {
            cout<<"result="<<k<<endl;
        }
};
int StaticCount::k=0;
int main()
{
    StaticCount::displayk();
    StaticCount::vok();
    StaticCount::vok();
    StaticCount::vok();
    StaticCount::displayk();
    return 0;
}