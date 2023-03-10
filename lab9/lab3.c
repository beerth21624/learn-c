#include <stdio.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
} Point;

int main()
{
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);

    Point points[n];
    for (int i = 0; i < n; i++)
    {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y);
    }

    double total_length = 0.0;

    printf("Length:\n");
    for (int i = 0; i < n - 1; i++)
    {
        double dx = points[i + 1].x - points[i].x;
        double dy = points[i + 1].y - points[i].y;
        double length = sqrt(dx * dx + dy * dy);
        total_length += length;

        int P1 = i + 1;
        int P2 = i + 2;
        printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", P1, points[i].x, points[i].y, P2, points[i + 1].x, points[i + 1].y, length);
    }
    return 0;
}