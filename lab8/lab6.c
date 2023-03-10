#include <stdio.h>

struct complex
{
    float x;
    float y;
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex E;
    E.x = C.x + D.x;
    E.y = C.y + D.y;
    return E;
}
struct complex multiply_complex(struct complex C, struct complex D)
{
    struct complex F;
    F.x = C.x * D.x - C.y * D.y;
    F.y = C.x * D.y + C.y * D.x;
    return F;
}

void print_complex(
    char *str,
    struct complex E)
{
    printf("%s%.1f %.1fi \n", str, E.x, E.y);
}

int main()
{
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.x, &C.y);
    printf("Enter D: ");
    scanf("%f %f", &D.x, &D.y);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}

#include <stdio.h>

struct complex
{
    float x;
    float y;
};

struct complex add_complex(struct complex C, struct complex D)
{
    struct complex E;
    E.x = C.x + D.x;
    E.y = C.y + D.y;
    return E;
}
struct complex multiply_complex(struct complex C, struct complex D)
{
    struct complex F;
    F.x = C.x * D.x - C.y * D.y;
    F.y = C.x * D.y + C.y * D.x;
    return F;
}

void print_complex(
    char *str,
    struct complex E)
{
    if (E.x && E.y)
    {
        if (E.y > 0)
        {
            printf("%s%.1f + %.1fi\n", str, E.x, E.y);
        }
        else if (E.y < 0)
        {
            printf("%s%.1f - %.1fi\n", str, E.x, E.y * (-1));
        }
        else if (E.x)
        {
            printf("%s%.1f\n", str, E.x);
        }
        else if (E.y)
        {
            printf("%s%.1fi\n", str, E.y);
        }
    }
    else
    {
        if (E.x)
        {
            printf("%s%.1f\n", str, E.x);
        }
        else if (E.y)
        {
            printf("%s%.1fi\n", str, E.y);
        }
        else
        {
            printf("%s0.0\n", str);
        }
    }
}

int main()
{
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.x, &C.y);
    printf("Enter D: ");
    scanf("%f %f", &D.x, &D.y);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}