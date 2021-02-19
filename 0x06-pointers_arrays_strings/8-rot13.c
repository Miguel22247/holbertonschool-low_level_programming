#include "holberton.h"

/**
 * rot13 - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: decrypted string
 */
char *rot13(char *n)
{
	char* word = argv[1];
    int key = 13;

    // all the letters in the first argument 
    for (int n = 0, len = strlen(word); n < len; n++)
    {
        int currentLetter = word[n];

        char cipher = currentLetter + key;

        // make sure the next letter isn't over 26 or it isn't a ascii letter
        // if it is, do %26
        if ((currentLetter - 'a') + key > 26)
        {
            key = (currentLetter - 'a') + key) % 26;
            cipher = 'a' + key;
        }

        printf("%c", cipher);
        // reset the key and do the next letter
        key = 13;
        }
    }
    printf("\n");
    return 0;
}
