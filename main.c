#include<stdio.h>

int dayofweek(int d, int m, int y)
{
    static int t[] = { 6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    //y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

/* Driver function to test above function */
int main()
{
    char *name[]={ "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    int day = dayofweek(1, 1, 1800);
    printf ("%s", name[day]);
    return 0;
}