#include <iostream>
#include <limits>
using namespace std;

int main() {
    
    cout << "Integer Types:" << endl;
    cout << "-----------------------" << endl;
    
    cout << "1. int - Size: " << sizeof(int) << " bytes, Range: "
              << INT_MIN << " to " << INT_MAX << endl;
    int intExample = 42;
    cout << "   Example: " << intExample << endl;

    cout << "2. unsigned int - Size: " << sizeof(unsigned int) << " bytes, Range: 0 to "
              << UINT_MAX << endl;
    unsigned int unsignedIntExample = 100;
    cout << "   Example: " << unsignedIntExample << endl;

    cout << "3. short int - Size: " << sizeof(short int) << " bytes, Range: "
              << SHRT_MIN << " to " << SHRT_MAX << endl;
    short int shortIntExample = -12345;
    cout << "   Example: " << shortIntExample << endl;

    cout << "4. unsigned short int - Size: " << sizeof(unsigned short int) << " bytes, Range: 0 to "
              << USHRT_MAX << endl;
    unsigned short int unsignedShortIntExample = 56789;
    cout << "   Example: " << unsignedShortIntExample << endl;

    cout << "5. long int - Size: " << sizeof(long int) << " bytes, Range: "
              << LONG_MIN << " to " << LONG_MAX << endl;
    long int longIntExample = 987654321;
    cout << "   Example: " << longIntExample << endl;

    cout << "6. long long int - Size: " << sizeof(long long int) << " bytes, Range: "
              << LONG_LONG_MIN << " to " << LONG_LONG_MAX << endl;
    long long int longlongIntExample = 9876543214587;
    cout << "   Example: " << longlongIntExample << endl;

    cout << "7. unsigned long int - Size: " << sizeof(unsigned long int) << " bytes, Range: 0 to "
              << ULONG_MAX << endl;
    unsigned long int unsignedLongIntExample = 1234567890;
    cout << "   Example: " << unsignedLongIntExample << endl;

    cout << "8. unsigned long long int - Size: " << sizeof(unsigned long long int) << " bytes, Range: 0 to "
              << ULONG_LONG_MAX << endl;
    unsigned long int unsignedLongLongIntExample = 18446744073709551615;
    cout << "   Example: " << unsignedLongLongIntExample << endl;

    
    cout << "\nFloating-Point Types:" << endl;
    cout << "-----------------------" << endl;
    
    cout << "1. float - Size: " << sizeof(float) << " bytes, Range: "
              << numeric_limits<float>::lowest() << " to " << numeric_limits<float>::max() << endl;
    float floatExample = 3.14f;
    cout << "   Example: " << floatExample << endl;

    cout << "2. double - Size: " << sizeof(double) << " bytes, Range: "
              << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::max() << endl;
    double doubleExample = 2.71828;
    cout << "   Example: " << doubleExample << endl;

    cout << "3. long double - Size: " << sizeof(long double) << " bytes, Range: "
              << numeric_limits<long double>::lowest() << " to " << numeric_limits<long double>::max() << endl;
    long double longDoubleExample = 0.57721;
    cout << "   Example: " << longDoubleExample << endl;

    
    cout << "\nCharacter Types:" << endl;
    cout << "-----------------------" << endl;
    
    cout << "1. char - Size: " << sizeof(char) << " byte, Range: "
              << static_cast<int>(numeric_limits<char>::min()) << " to "
              << static_cast<int>(numeric_limits<char>::max()) << endl;
    char charExample = 'A';
    cout << "   Example: " << charExample << endl;

    cout << "2. unsigned char - Size: " << sizeof(unsigned char) << " byte, Range: 0 to "
              << static_cast<int>(numeric_limits<unsigned char>::max()) << endl;
    unsigned char unsignedCharExample = 'Z';
    cout << "   Example: " << unsignedCharExample << endl;

    
    cout << "\nBoolean Type:" << endl;
    cout << "-----------------------" << endl;
    
    cout << "1. bool - Size: " << sizeof(bool) << " byte, Range: true or false" << endl;
    bool boolExample = true;
    cout << "   Example: " << (boolExample ? "true" : "false") << endl;


    cout << "\nOthers:" << endl;
    cout << "1. enum - User defined set of named constants"<<endl;
    enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    week today;
    today = Tuesday;
    cout << "   Example: " << "Day- " << today+1 << endl;

    return 0;
}
