#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char mas[10][21];
    int i;
    int x = 10, y = 5;
    char key;
    int ox, oy;
    int ax = 5, ay = 3;
    int life = 20;

    srand(time(NULL));

    while (key != 'v')
    {

    //Draw top and bottom sides
    sprintf(mas[0], "####################");
    for (i = 1; i < 9; i++)
        sprintf(mas[i], "#                  #");
    sprintf(mas[9], "####################");

    mas[y][x] = '@';
    mas[ay][ax] = '*';

    system("cls");
    //Draw sides' #
    for (i = 0; i < 10; i++)
        {printf("%s\n", mas[i]); }
    printf("life : %d times", life);

    //Press key
    key = getch();

    //Saved current position
    ox = x;
    oy = y;

    //Check pressed button
    if (key == 'w') y--;
    if (key == 's') y++;
    if (key == 'a') x--;
    if (key == 'd') x++;

    if (key == 'q') {y--; x--;}
    if (key == 'e') {y--; x++;}
    if (key == 'z') {y++; x--;}
    if (key == 'c') {y++; x++;}

    if (mas[y][x] == '#') // If dog goes to # than push it back
    {
        x = ox;
        y = oy;
    }
    if ((x == ax) && (y == ay))
    {
        ax = rand() * 1.0 / RAND_MAX * 18 + 1;
        ay = rand() * 1.0 / RAND_MAX * 8 + 1;
        life += 5;
    }

    life--;
    if (life <= 0 ) {break;}
   }
    return 0;
}
