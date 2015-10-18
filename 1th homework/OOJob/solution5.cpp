#include <iostream>
#include <stdlib.h>
using namespace std;
class CGoods
{
    private:
        long no;
        char* p_name;
        double price;
        int count;


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
            cout<<"CGoods has been destructed!"<<endl;
        }
        virtual void usedFor()
        {
            cout<<"CGoods is useed for extended!"<<endl;
        };
        void show()
        {
            cout<<"no:"<<no<<",p_name:"<<p_name<<",price:"<<price<<endl;
        }
        int getCount()
        {
            return count;
        }

};



class CClothes: public CGoods
{
    private:
        char* p_brand;
    public:
        CClothes(char* b):CGoods(1101,"clothes",12,2)
        {
            p_brand = b;
        }
        ~CClothes()
        {
            cout<<"CClothes has been destructed!"<<endl;
        }
        void usedFor()
        {
            cout<<p_brand<<" are used for wearing!"<<endl;
        }

};

class CFood:public CGoods
{
    private:
        char* p_brand;
    public:
        CFood(char* b):CGoods(1101,"food",12,2)
        {
            p_brand = b;
        }
        ~CFood()
        {
            cout<<"CClothes has been destructed!"<<endl;
        }
        void usedFor()
        {
            cout<<p_brand<<" are used for eating!"<<endl;
        }

};
int main()
{
    CClothes CC("yichun");
    CFood CF("jinluo");
    CGoods* C1 = &CC;
    CGoods* C2 = &CF;
    C1->usedFor();
    C2->usedFor();
    system("pause");
    return 0;
}
