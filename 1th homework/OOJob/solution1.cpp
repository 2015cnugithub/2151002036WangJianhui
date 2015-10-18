#include <iostream>
#include <stdlib.h>
using namespace std;
class CGoods {
    private:
        long no;
        char* p_name;
        double price;
    public:
        CGoods(long n, char* pn,double p)
        {
            no = n;
            p_name = pn;
            price = p;
        }
        //Copy constructor
        CGoods(const CGoods& C)
        {
            no = C.no;
            p_name = C.p_name;
            price = C.price;
        }
        //destructor
        ~CGoods()
        {
            cout<<"CGodds has been destructed!"<<endl;
        }
        void show()
        {
            cout<<"no:"<<no<<",p_name:"<<p_name<<",price:"<<price<<endl;
        }

};

int main()
{
    CGoods c(1102,"apple",20);
    CGoods cc = c;
    c.show();
    cc.show();
    system("pause");
    return 0;
}
