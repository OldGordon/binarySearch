#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    int min = 0 , max = SIZE - 1;

    // TODO: return true iff needle is in haystack, using binary search
    if (max < min)
    {
        return false;
    }
    
    while (min <= max)
    {
        int midpoint = (min + max) / 2 ;
        
        if (haystack[midpoint] == needle)
            return true;
        
        if (haystack[midpoint] > needle)
            max = midpoint - 1;
        
        else if (haystack[midpoint] < needle )
            min = midpoint + 1;
        
        
    }
    return false;
}    
int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, SIZE))
        printf("YES\n");
    if ( !search(n, numbers, SIZE))
        printf("NOOL\n");
    return 0;
}