///////////
// Types //
///////////

#include "process.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    //char value -128 to 127 // 1 bytes
    std::cout << "\nchar\n";
    char max_char = 127; std::cout << "max_char " << "127" << '\n';
    char min_char = -128; std::cout << "min_char " << "-128" << '\n';
    unsigned char max_unsigned_char = 255; std::cout << "max_unsigned_char " << "255" << '\n';

    //short value -32768 to 32767 // 2 bytes
    std::cout << "\nshort\n";
    short max_short = 32767; std::cout << "max_short " << max_short << '\n';
    short min_short = -32768; std::cout << "min_short " << min_short << '\n';
    unsigned short max_unsigned_short = 65535; std::cout << "max_unsigned_short " << max_unsigned_short << '\n';

    //int value -2,147,483,648 to 2,147,483,647 // 4 bytes
    std::cout << "\nint\n";
    int max_int = 2147483647; std::cout << "max_int " << max_int << '\n';
    int min_int = -2147483648; std::cout << "min_int " << min_int << '\n';
    unsigned int max_unsigned_int = 4294967295; std::cout << "max_unsigned_int " << max_unsigned_int << '\n';

    //long long value -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 // 8 bytes
    std::cout << "\nlong long\n";
    long long max_long_long = 9223372036854775807; std::cout << "max_long_long " << max_long_long << '\n';
    long long min_long_long = -9223372036854775807; std::cout << "min_long_long " << min_long_long << '\n';
    unsigned long long max_unsigned_long_long = 18446744073709551615; std::cout << "max_unsigned_long_long " << max_unsigned_long_long << '\n';

    return 0;
}
