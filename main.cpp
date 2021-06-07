#include <fmt/format.h>
#include <cstdio>
int main() 
{
    for (int i = 0; i < 5; ++i)
    {
        printf("printf: %i\n", i);
        fmt::print(stdout, "fmt::print = {}\n", i);
    }
    return 0;
}