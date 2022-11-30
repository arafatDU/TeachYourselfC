#include <stdio.h>

void effweight_moon(void);

int main()
{
    effweight_moon();
    return 0;
}

void effweight_moon(void)
{
    float earth_gravity = 9.8;
    float mass, earth_weight, moon_weight;
    printf("Enter your mass(in kg):");
    scanf("%f", &mass);
    earth_weight = mass * earth_gravity;
    printf("Your weight on the earth:%.4f Newton(s)\n", earth_weight);
    moon_weight = .17 * earth_weight;
    printf("Your effective weight on the Moon:%.4f Newton(s)", moon_weight);
}
