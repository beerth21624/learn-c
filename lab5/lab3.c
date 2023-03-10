#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float initial;
   

    printf("Initial Value: ");
    scanf("%f", &initial);

    int nextStep = 1;
    while (nextStep)
    {
        char symbol;
        float inputN = 0;
        printf("\n");
        printf("Operator: ");
        scanf("\n%c", &symbol);

        if (symbol== '+' || symbol== '-' || symbol== '*' || symbol== '/')
        {
            printf("Input Value: ");
            scanf("%f", &inputN);
            if (symbol== '+')
            {
                initial += inputN;
                printf("Present Value is %.4f", initial);
                printf("\n");
            }
            else if (symbol== '-')
            {
                initial -= inputN;
                printf("Present Value is %.4f", initial);
                printf("\n");
            }
            else if (symbol== '*')
            {
                initial *= inputN;
                printf("Present Value is %.4f", initial);
                printf("\n");
            }
            else if (symbol== '/')
            {
                initial /= inputN;
                printf("Present Value is %.4f", initial);
                printf("\n");
            }
        }
        else
        {
            printf("\n");
            printf("Finish Calculation. Final Value is %.4f", initial);
            break;
        }
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float init_value;
    printf("Initial Value: ");
    scanf("%f", &init_value);

    int is_continue = 1;

    while (is_continue)
    {
        char operator;
        float input_value = 0;
        printf("\n");
        printf("Operator: ");
        scanf("\n%c", &operator);

        if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
        {
            printf("Input Value: ");
            scanf("%f", &input_value);
            if (operator== '+')
            {
                init_value += input_value;
                printf("Present Value is %.4f", init_value);
                printf("\n");
            }
            else if (operator== '-')
            {
                init_value -= input_value;
                printf("Present Value is %.4f", init_value);
                printf("\n");
            }
            else if (operator== '*')
            {
                init_value *= input_value;
                printf("Present Value is %.4f", init_value);
                printf("\n");
            }
            else if (operator== '/')
            {
                init_value /= input_value;
                printf("Present Value is %.4f", init_value);
                printf("\n");
            }
        }
        else
        {
            printf("\n");
            printf("Finish Calculation. Final Value is %.4f", init_value);
            break;
        }
    }

    return 0;
}