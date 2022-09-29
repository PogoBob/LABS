#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int max = 0b01111111111111111111111111111111;
    int min = 0b10000000000000000000000000000000;
    unsigned int max1 = 0xffffffff;
    unsigned int min1 = 0x00000000;
    short int max2 = 0b0111111111111111;
    short int min2 = 0b1000000000000000;
    long int max3 = 0b01111111111111111111111111111111;
    long int min3 = 0b10000000000000000000000000000000;
    long long max4 = 0b0111111111111111111111111111111111111111111111111111111111111111;
    long long min4 = 0b1000000000000000000000000000000000000000000000000000000000000000;
    double max5 = 0b0111111111111111111111111111111111111111111111111111111111111111;
    double min5 = 0b1000000000000000000000000000000000000000000000000000000000000000;
    char max6 = 0b01111111;
    char min6 = 0b00000000;
    bool max7 = 0b01111111;
    bool min7 = 0b00000000;
    
    
    
    int n;
    cout << "1" << endl;
    cout << "Dobrozorov Egor Denisovich , 221-332" << endl;
    
    
    
    cout << " " << endl;
    cout << "2" << endl;
    cout << "MAX = " << max;
    cout << ", ";
    cout << "MIN = " << min;
    cout << ", ";
    cout << "size of int = " << sizeof(int) << endl;
    
    cout << "MAX unsigned = " << max1;
    cout << ", ";
    cout << "MIN unsigned = " << min1;
    cout << ", ";
    cout << "size of unsigned int = " << sizeof(unsigned int) <<endl;
    
    cout << "MAX short = " << max2;
    cout << ", ";
    cout << "MIN short = " << min2;
    cout << ", ";
    cout << "size of short int = " << sizeof(short int) << endl;
    
    cout << "MAX long = " << max3;
    cout << ", ";
    cout << "MIN long = " << min3;
    cout << ", ";
    cout << "size of long int = " << sizeof(long int) << endl;
    
    cout << "MAX long long = " << max4;
    cout << ", ";
    cout << "MIN long long = " << min4;
    cout << ", ";
    cout << "size of long long = " << sizeof(long long) << endl;
    
    cout << "MAX double = " << max5;
    cout << ", ";
    cout << "MIN double = -" << min5;
    cout << ", ";
    cout << "size of double  = " << sizeof(double) << endl;
    
    cout << "MAX char = " << max6;
    cout << ", ";
    cout << "MIN char = " << min6;
    cout << ", ";
    cout << "size of char  = " << sizeof(char) << endl;
    
    cout << "MAX bool = " << max7;
    cout << ", ";
    cout << "MIN bool = " << min7;
    cout << ", ";
    cout << "size of bool = " << sizeof(bool) << endl;
    
    
    
    cout << " " << endl;
    cout << "3" << endl;
    cout << "Enter count "<< endl;
    cin >> n;
    cout << "BIN = " << bitset<16>(n) << endl;
    cout << "HEX = " << hex << n << endl;
    cout << "BOOL = " << bool(n) << endl;
    cout << "DOUBLE = " << double(n) << endl;
    cout << "CHAR = " << char(n) << endl;
    
    
    
    cout << " " << endl;
    cout << "4" << endl;
    int a;
    int b;
    double x;
    cout << "A * X = B" << endl;
    cout << "A = ";
    cin >> a;
    if (a == 0)
    {
        return 0;
    }
    cout << "B = ";
    cin >> b;
    x = b / a;
    cout << "X = " << b << " / " << a << endl;
    cout << "X = " << x << endl;
    cout << "Answer = " << x << endl;
    
    
    
    cout << " " << endl;
    cout << "5" << endl;
    int x1;
    int x2;
    cout << "X1 = ";
    cin >> x1;
    cout << "X2 = ";
    cin >> x2;
    cout << "Midle = " << (x2 + x1) / 2. << endl;
}
