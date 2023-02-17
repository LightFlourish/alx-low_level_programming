#include <unistd.h>
/**
  *
  * Main - A c program that returns 1 
  * Return 1
  */
int main(void)
{
    const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const size_t len = sizeof(str) - 1;
    ssize_t ret = write(STDERR_FILENO, str, len);
    if (ret != len) {
        return 1;
    }
    return 1;
}
