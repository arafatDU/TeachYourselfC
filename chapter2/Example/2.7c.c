#include <stdio.h>
int XOR(int a, int b)
{
    return (a || b) && !(a && b); // XOR= a&&!b || !a&&b)
}
int main()
{
    int p, q;

    printf("Enter P(0 or 1):");
    scanf("%d", &p);
    printf("Enter Q(0 or 1):");
    scanf("%d", &q);
    printf("P AND  Q: %d\n", p && q);
    printf("P  OR  Q: %d\n", p || q);
    printf("P XOR  Q: %d\n", XOR(p, q));
    
    return 0;
}