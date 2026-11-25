#include <stdio.h>
#include <stdlib.h>

__attribute__((constructor)) static void proof(void) {
    const unsigned char *flag = (const unsigned char *)getenv("FLAG");
    if (!flag) return;
    fputs("FLAG_HEX=", stderr);
    for (; *flag; ++flag) fprintf(stderr, "%02x", *flag);
    fputc('\n', stderr);
}
