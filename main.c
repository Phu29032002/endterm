#include <stdio.h>
#include <stdlib.h>

int main()
{
    int select;
    printf("select the function: ");
    scanf("%d", &select);
    printf("%d", select);
    switch(select)
    {
    case 1:
        {
            function1();
        }
    case 2:
        {
            function2();
        }
    case 3:
        {
            function3();
        }
    case 4:
        {
            function4();
        }
    case 5:
        {
            function5();
        }
    }
    return 0;
}
