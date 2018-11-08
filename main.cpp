#include <iostream>
#include <vector>
#include <string>
using namespace std;


class BigDecimalInt
{
    public:
    vector<string>number;
    vector<string>n1;
    vector<string>n2;


    BigDecimalInt(string s)
    {
    number.push_back(s);
    }

    BigDecimalInt operator+ (BigDecimalInt b1)
    {
    BigDecimalInt b2(string m);
    for (int i=0 ; i<b1.number.size() ; i++ )
    {
       cout<<this->number[i] + b1.n2[i];
    }
   // return b2;

    }
    //BigDecimalInt operator- (BigDecimalInt , BigDecimalInt)
    //{

    //}
};





ostream& operator<< (ostream& out, BigDecimalInt b1)
{
    for (int i=0 ; i<b1.number.size() ; i++ )
    {
       out <<b1.number[i];
    }

    return out;
}

int main()
{
    cout<<BigDecimalInt("123456789012345678901234567890")<<endl;


    return 0;
}
