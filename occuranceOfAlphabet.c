#include <stdio.h>

// sir ny map {} in C nae parhaye;
// but ye method map k sath hi kam kary ga;
// warna aap ko variables define karny pary gy aCount, bCount, cCount etc.

void main()
{
    char str[100];       // Yeh ek array hae jo humara string store kary ga
    int count[26] = {0}; // Yeh array har alphabet ki counting store kary ga (a to z)

    printf("Enter a string: ");
    scanf("%s", str);

    // Har character ko check karen
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Agar character 'a' se 'z' tak hae (lowercase)
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
        // Agar character 'A' se 'Z' tak hae (uppercase)
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count[str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c occurs %i times\n", 'a' + i, count[i]);
        }
    }
}
