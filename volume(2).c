#include <stdio.h>

struct marks
{
    int rollNo;
    char name[50];
    float chem;
    float maths;
    float phy;
};

main() 
{
    struct marks std[5];
    int i;

    printf("Enter the marks of 5 students:\n");

    for(i=0;i<5;i++)
	{
        printf("\nStudent %d:\n",i+1);
        printf("Roll No=");
        scanf("%d", &std[i].rollNo);
        printf("Name=");
        scanf(" %[^\n]s", std[i].name);
        printf("Chemistry marks=");
        scanf("%f", &std[i].chem);
        printf("Mathematics marks=");
        scanf("%f", &std[i].maths);
        printf("Physics marks=");
        scanf("%f", &std[i].phy);
    }

    printf("\nEntered marks and percentage:\n");
    printf("Roll No\tName\t\tChemistry\tMathematics\tPhysics\t\tPercentage\n");
    for (i = 0; i < 5; i++) 
	{
        float totalMarks = std[i].chem+std[i].maths+std[i].phy;
        float percentage = (totalMarks / 300) * 100;
        printf("%d \t %s \t \t %.2f \t \t %.2f \t \t %.2f \t \t %.2f\n",std[i].rollNo,std[i].name,std[i].chem,std[i].maths,std[i].phy,percentage);
    }

}

