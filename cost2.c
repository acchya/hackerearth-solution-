#include<stdio.h>

int main() {
    int x, y, n, p1[10000], p2[10000], i,cost1,cost2,tc1,tc2,j,t;
 printf("enter the number of test case:");
 scanf("%d",&t);
 for ( j = 0; j < t; j++)
 {
   


    printf("Enter the number of participants: ");
    scanf("%d", &n);

    printf("Enter the price of the green balloon: ");
    scanf("%d", &x);

    printf("Enter the price of the purple balloon: ");
    scanf("%d", &y);

    printf("Enter the problems solved by participants (green purple):\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &p1[i], &p2[i]);
    }
    cost1=0;
    cost2=0;
    printf("Problems solved by participants:\n");
    for (i = 0; i < n; i++) {
        printf("%d %d\n", p1[i], p2[i]);
        cost1=cost1+p1[i]*x;
        cost2=cost2+p2[i]*y;
    }
    tc1=cost1+cost2;
   
    cost1=0;
    cost2=0;
    for (i = 0; i < n; i++)
   {
        cost1=cost1+p2[i]*x;
        cost2=cost2+p1[i]*y;
    }
    tc2=cost1+cost2;

    if (tc1>tc2)
    {
        printf("%d",tc2);
    }
    else
    {
        printf("%d",tc1);
    }
  }    
    return 0;
}
