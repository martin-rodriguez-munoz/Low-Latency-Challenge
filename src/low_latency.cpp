#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
        for (char &c : str)
        {
            if (c == ',') c = ' ';
        }
        double a, b, temp;
        a = 0;
        stringstream ss(str);
        while (ss >> temp)
        {
            a = b;
            b = temp;
        }
        if (a < b) cout << 0 << endl;
        else cout << 1 << endl;
    }
    
    
}
