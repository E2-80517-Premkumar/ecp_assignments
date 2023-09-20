#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter x-coordinate: ");
    scanf("%f", &x);
    printf("Enter y-coordinate: ");
    scanf("%f", &y);
    if (x == 0 && y == 0)
    {
        printf("At origin (0,0)\n");
    }
    else if (x == 0)
    {
        printf("On the y-axis\n");
    }
    else if (y == 0)
    {
        printf("On the x-axis\n");
    }
    else
    {
        if (x > 0)
        {
            printf("Quadrant I\n");
        }
        else
        {
            printf("Quadrant II\n");
        }
    }
    return 0;
}
