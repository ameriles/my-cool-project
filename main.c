#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Date & Time: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

    printf("Hello, you All!\n");
    return 0;
}
