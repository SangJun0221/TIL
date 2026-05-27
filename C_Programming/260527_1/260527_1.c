#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
int a[3];

int menu_func()
{
    int n;

    printf("1. 데이터 추가\n");
    printf("3. 데이터 출력\n");
    printf("0. 종료\n\n");
    printf("? ");

    scanf("%d", &n);

    return n;
}

void menu_proc(int menu)
{
    int b, i;

    if (menu == 1)
    {
        if (count == 3)
        {
            printf("더 이상 추가할 수 없습니다.\n");
        }
        else
        {
            printf("? ");
            scanf("%d", &b);

            for (i = 0; i < count; i++)
            {
                if (a[i] == b)
                {
                    break;
                }
            }

            if (i == count)
            {
                a[i] = b;
                printf("데이터가 추가되었습니다.\n");
                count++;
            }
            else
            {
                printf("이미 데이터가 존재합니다.\n");
            }
        }
    }
    else if (menu == 3)
    {
        for (i = 0; i < count; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
    }
}

int main()
{
    int menu;

    for (;;)
    {
        menu = menu_func();

        if (menu == 0)
        {
            break;
        }
        else
        {
            menu_proc(menu);
        }
    }

    return 0;
}