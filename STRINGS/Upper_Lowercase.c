
    #include <stdio.h>
    #include <string.h>

    int main()
    {
        char a[100];
        printf("Enter a string to modify: ");
        scanf("%s", a);

        // Convert to uppercase using strupr
        strupr(a);
        printf("The modified string in uppercase is: %s\n", a);

        // Convert to lowercase using strlwr
        strlwr(a);
        printf("The modified string in lowercase is: %s\n", a);

        // Manual mode for uppercase
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = a[i] - 32;
            }
        }
        printf("The modified string in uppercase (manual mode) is: %s\n", a);

        // Manual mode for lowercase
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i] = a[i] + 32;
            }
        }
        printf("The modified string in lowercase (manual mode) is: %s\n", a);

        return 0;
    }
