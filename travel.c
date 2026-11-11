/*  you manage a travel agency and you want  your n=3 drivers to input their following details :
1. name
2. driving license number
3. route
4.  how much thery treavels in kms
your program should be able to take n input and your drivers start inputing their details one by one .
your program should print details of the beautiful fashion.
create a strucuture */
#include <stdio.h>
struct travel
{
    char name[52];
    int dr[66];
    char route[52];
    int distance[10];
} t;
int main()
{
    struct travel t[4];
    for (int i = 0; i < 3; i++)
    {
        printf("\t\t\tENTER YOUR DETAILS");
        printf("\n enter your name \n");
        scanf("%s", t[i].name);
        printf("\n enter your driving licence number \n");
        scanf("%s", t[i].dr);
        printf("\n enter your route \n");
        scanf("%s", t[i].route);
        printf("\n how much you travel in km \n");
        scanf("%s", t[i].distance);
    }
    for (int j = 0; j < 3; j++)
    {       printf("\n\t\tDETAILS OF WORKER %d\n",j+1);
        printf("\nDRIVERS NAME                 \t\t\t %s", t[j].name);
        printf(" \nyour driving licence number \t\t\t %s", t[j].dr);
        printf(" \nyour route                  \t\t\t %s", t[j].route);
        printf(" \nyou travel                  \t\t\t %s ", t[j].distance);
    }
    return 0;
}
