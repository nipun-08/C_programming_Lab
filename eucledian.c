#include<stdio.h>
#include<math.h>
 int main()
 {
    int x1,y1,x2,y2;
    float distance;

    printf("Enter the co-ordinates of first point on plane\n");
    scanf("%d%d",&x1,&y1);

    printf("Enter the co-ordinates of second point on plane\n");
    scanf("%d%d",&x2,&y2);

    distance = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    printf("The distance between two pints on eucledian plane is %.2f\n",distance);
    return 0;
 }