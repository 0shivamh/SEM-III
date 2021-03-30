#include <iostream>

using namespace std;

class IDK
{
    double a,b;
    public:
    void get_data()
    {
        cout<<"\nEnter two double type numbers:";
        cin>>a>>b;
    }
    void div()
    {
        try{

            if(cin.fail())
                throw "Bad input!";
            if( b == 0 )
            throw 0;

            cout<<"\nAns is "<<a/b;
        }
        catch(const int n)
        {
            cout << "\nDivision by " << n << " not allowed\n";
        }
        catch(const char* Str)
        {
            cout<< Str;
        }
    }
};

int main()
{
    IDK o;
    o.get_data();
    o.div();
    return 0;
}