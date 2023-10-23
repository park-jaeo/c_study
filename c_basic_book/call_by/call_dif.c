#include <stdio.h>

void call_by_value(int val)
{
    val = 20;
}

void call_by_refer(int *ref)
{
    *ref = 20;
}

int main()
{
    int value = 10;
    int refer = 10;

    printf("before : value = %d, refer = %d\n", value, refer);
    call_by_value(value);
    call_by_refer(&refer);
    printf("after : value = %d, refer = %d\n", value, refer);
    return 0;
}