#include <stdio.h>

char calculateGrade(int total)
{
    if (total >= 80)
        return 'A';
    else if (total >= 70)
        return 'B';
    else if (total >= 60)
        return 'C';
    else if (total >= 50)
        return 'D';
    else
        return 'F';
}

int main()

{
    struct student
    {
        char std_id[20];
        int midterm, final;
    };
    char std_id[20];
    int midterm, final;

    struct student std[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student ID: ");
        scanf("%s", std[i].std_id);
        printf("Enter Student Midterm: ");
        scanf("%d", &std[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &std[i].final);
    }

    for (int i = 0; i < 5; i++)
    {
        int total = std[i].midterm + std[i].final;
        char grade = calculateGrade(total);
        printf("Student ID %s receives grade %c.\n", std[i].std_id, grade);
    }

    return 0;
}