#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int SnakeWatergun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }

    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    int you, comp, num, result;

    srand(time(0));
    num = (rand() % 100) + 1;
    // printf("%d",num);

    if (num < 33)
    {
        comp = 's';
    }
    else if (num < 66 && num >=33)
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }

    printf("Enter s for snake,w for water or g for gun=");
    scanf("%c", &you);

    result = SnakeWatergun(you, comp);
    if (result == 1)
    {
        printf("YOU WON!!!!");
    }
    else if (result == -1)
    {
        printf("YOU lose!!!!");
    }
    else
    {
        printf("Draw!!");
    }
    



    
    return 0;
  
}