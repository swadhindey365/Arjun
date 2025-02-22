#include <stdio.h>

int main()
{
    int arr[] = {12, 34, 56, 78, 9};
    int i, s_data;

    printf("Enter a number to search: ");
    scanf("%d", &s_data);

    int found = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == s_data)
        {
            printf("%d is available\n", s_data);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("%d is not available\n", s_data);
    }

    return 0;
}

