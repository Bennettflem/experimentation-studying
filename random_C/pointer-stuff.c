#include <stdio.h>

int *getPointerToValue(int *aVal);

int main(int argc, char const *argv[])
{
    int val = 5;
    int *pVal = getPointerToValue(&val);

    printf("Value from Dereference: %d\n", *pVal);
    printf("Value from Pointer: %p\n", pVal);

    *pVal = 10;
    printf("Value from Dereference After Change: %d\n", *pVal);
    return 0;
}

int *getPointerToValue(int *aVal)
{
    int *pVal = malloc(sizeof(int));
    pVal = aVal;
    return pVal;
}
