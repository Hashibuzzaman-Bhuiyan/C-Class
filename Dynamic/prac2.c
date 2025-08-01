#include <stdio.h>
#include <stdlib.h>
//hashib
int main(void)
{
    int *pi;
    double *pf;
    char *pc;

    pi = (int *)malloc(sizeof(int));
    pf = (double *)malloc(sizeof(double));
    pc = (char *)malloc(sizeof(char));

    if (pi == NULL || pf == NULL || pc == NULL) {
        // The return value is NULL, check for allocation failure
        printf("Dynamic memory allocation error\n");
        exit(1);
    }

    *pi = 100;    // same as pi[0] = 100;
    *pf = 3.14;   // same as pf[0] = 3.14;
    *pc = 'a';    // same as pc[0] = 'a';

    printf("int: %d\n", *pi);
    printf("float: %.2f\n", *pf);
    printf("char: %c\n", *pc);

    free(pi);
    free(pf);
    free(pc);

    return 0;
}
