#include<stdio.h>
#include<conio.h>
int main(){
    char Selection;
    printf("a.Area of a circle b.Area of the rectangle c.Area of the triangle\n");
    printf("Make a selection:");
    Selection=getche();
    if(Selection=='a'){
        float radius;
        printf("\nEnter a radius:");
        scanf("%f",&radius);
        printf("Area:%.2f",3.1416*radius*radius);
    }
    
    else if(Selection=='b'){
        int length,width;
        printf("\nEnter a length & width:");
        scanf("%d,%d",&length,&width);
        printf("Area:%d",length*width);
    }

    else if (Selection=='c'){
        int base,height;
        printf("\nEnter a length & width:");
        scanf("%d,%d",&base,&height);
        printf("Area:%d",.5*base*height);
    }
    

    return 0;
}