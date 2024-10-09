#include <iostream>

#define RED "\033[31m" // red
#define YEL "\033[33m" // yellow
#define BLU "\033[34m" // blue
#define MAG "\033[35m" // magenta
#define CYA "\033[36m" // cyan
#define WHI "\033[37m" // white
#define BLC "\033[30m" // black

#define RES "\033[0m" // reset

int main() {

    std::cout << RED << "Hello world!\n"
        BLU << "Hello world!\n"
        YEL << "Hello world!\n"
        MAG << "Hello world!\n"
        CYA << "Hello world!\n"
        RES;

    return 0;
}
