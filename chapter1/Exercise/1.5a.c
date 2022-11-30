#include <stdio.h>
#include <math.h>
// Volume of a cube
int main(void)
{
    int cube_side, Volume;
    printf("Side of a cube:");
    scanf("%d", &cube_side);
    Volume = pow(cube_side, 3);
    printf("The volume of the cube:%d", Volume);
    return 0;
}
