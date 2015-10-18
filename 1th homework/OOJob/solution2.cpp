#include <iostream>
#include <stdlib.h>
using namespace std;
class CGoods {
    private:
        long no;
        char* p_name;
        double price;
        int count;
        friend void getName(const CGoods& C);
    public:
        CGoods(long n, char* pn,double p,int c)
        {
            no = n;
            p_name = pn;
            price = p;
            count = c;
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
        int getCount()
        {
            return count;
        }

};

void getName(const CGoods& C) {
    cout<<C.p_name<<endl;
}

int main()
{
    CGoods C(1102,"apple",20,8);
     getName(C);
     cout<<"count:"<<C.getCount()<<endl;
     system("pause");
    return 0;
}
