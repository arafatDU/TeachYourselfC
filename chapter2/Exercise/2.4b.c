#include <stdio.h>
    int
    main()
{
    int i;

    for (i = 34; i < 100; i += 17)
    {
        printf("%d ", i);
    }

    // Alternate

    /*    for(i=18;i<100;i++)
            if(i%17==0) printf("%d ",i);
    */
    return 0;
}