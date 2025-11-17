#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p, *q, *i;
    printf("\n%p indirzzo di p", p);
    printf("\n%d indirizzo di q", q);

    p = q;
    printf("\n%d nuovo indirizzo di p", p);
    i = p;
    printf("\n%d indirizzo prima di p", i);

    return 0;


}
