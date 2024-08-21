#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
    main()
    {
        int *ptr1,*ptr2;
        ptr1=malloc(4);
        *ptr1=10;
        *ptr2=free(ptr1);
        printf("%d\n",*ptr2);
        return 0;
    }
