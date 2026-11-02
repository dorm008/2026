#include <stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: ");

        scanf("%d", &num);

        printf("\n");

        if (num == 1)
        {
            printf("You selected Input.\n\n");
        }
        else if (num == 2)
        {
            printf("You selected Output.\n\n");
        }
        else if (num == 3)
        {
            printf("You selected Delete.\n\n");
        }
        else if (num == 4)
        {
            printf("You selected Finish.\n");
            break;
        }
        else
        {
            printf("Wrong input.\n\n");
        }
    }

    return 0;
}
