#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x < 100; x++){
        printf("%5d ", x);
        if(x%5 ==0) printf("\n");
	}

    return 0;
}
