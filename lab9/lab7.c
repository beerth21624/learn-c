#include <stdio.h>

double
findAverage(char *filename)
{
    FILE *fileInput;
    double all = 0.0;
    int count = 0;
    double score;
    fileInput = fopen(filename, "r");

    while (fscanf(fileInput, "%lf", &score) == 1)
    {
        all += score;
        count++;
    }
    fclose(fileInput);
    return all / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}