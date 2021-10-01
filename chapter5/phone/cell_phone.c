#include <stdio.h>

typedef struct{
    int cell_no;
    const char *wallpaper;
    float minutes_of_charge;
}phone;


void label(phone p)
{
    printf("Number: %i\nWallpaper: %s\nCharging minutes: %2.2f",
        p.cell_no, p.wallpaper, p.minutes_of_charge);
}


int main()
{
    phone p = {5557879, "sinatra.png", 1.35};
    label(p);

    return 0;
}