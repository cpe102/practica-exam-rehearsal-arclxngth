#include <iostream>
using namespace std;

string compress(string t1){

    int x=0;
    string sum;

    while(x<=t1.size()){

        if(x%3==0){

            sum +=t1[x];
        }
        x+=3;
    }   
    return sum;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
