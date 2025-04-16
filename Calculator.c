#include <stdio.h>
#include <math.h>

float sine(float angle);
float cosine(float angle);
float tangent(float angle);

int main()
{
    float angle;
    int a,b,c,result,input_status;
    char ope;

    printf("\n\t\twelcome to calculator!\n\n");
    
    printf("\nDo you want to calculate a percentage (y/n)? ");
    char percentage_choice;
    scanf(" %c", &percentage_choice);

    if (percentage_choice == 'y' || percentage_choice == 'Y')
    {
        // Calculate percentage
        float total_marks, obtained_marks, percentage;

        printf("\nEnter total marks: ");
        scanf("%d", &total_marks);

        printf("Enter obtained marks: ");
        scanf("%d", &obtained_marks);

        percentage = (obtained_marks / total_marks) * 100;

        printf("\nPercentage = %.2f%%\n", percentage);
    }
    else{

    // Input validation loop for 'a'
    do 
    {
        printf("\nPlease enter a number: ");
        input_status = scanf("%d", &a);
        if (input_status != 1) 
        {
            printf("Invalid input. Please enter an integer.\n\n");
            // Clear input buffer to prevent infinite loop
            while (getchar() != '\n');
        }
    } while (input_status != 1);

    printf("\nNow select an operation\n");
    printf("1-Addition (+)\n");
    printf("2-Subtraction (-)\n");
    printf("3-Munltiplication (*)\n");
    printf("4-Division (/)\n");
    printf("5-Factorial (!)\n");
    printf("6-Square (x^2)\n");
    printf("7-cube (x^3)\n");
    printf("8-Suare root\n");
    printf("9-trigonometry\n");

    printf("\nenter the operator number: ");
    scanf(" %c",&ope);

        if(ope == '1')
        {
            printf("You have selected ADDITION\n");
            printf("Enter second number: ");
            scanf("%d",&b);
            result=a+b;
            printf("%d + %d = %d\n",a,b,result);
        }

        else if(ope == '2')
        {
            printf("You have selected SUBTRACTION\n");
            printf("Enter second number: ");
            scanf("%d",&b);
            result=a-b;
            printf("%d - %d = %d\n",a,b,result);
        }

        else if(ope == '3')
        {
            printf("You have selected MULTIPLICATION\n");
            printf("Enter second number: ");
            scanf("%d",&b);
            result=a*b;
            printf("%d * %d = %d\n",a,b,result);
        }

        else if(ope == '4')
            {
            printf("You have selected DIVISION\n");
            printf("Enter second number: ");
            scanf("%d",&b);
            if (b != 0) 
            {
            result = a / b;
            printf("%d / %d = %d\n", a, b, result);
            }
            else
            {
              printf("Error: Division by zero is not allowed. Enter a non-zero divisor.\n");
            }
            }

        else if(ope == '5')
            {
                if(a<0)
            {
                printf("error: Factorial is not defined for negative number.\n");
            }
            else
            {
                double factorial;
                factorial = tgamma(a + 1);
                printf("Factorial of %d = %.0lf\n",a,factorial);
            }
            }

        else if(ope == '6')
            {
            result=a*a;
            printf("%d^2 = %d\n",a,result);
            }
        else if(ope == '7')
            {
            result=a*a*a;
            printf("%d^3 = %d\n",a,result);
            }

        else if (ope == '8')
            {
            if (a != 0)
            {
               float sqr = sqrt(a);
               printf("\nunder root of %d = %f",a,sqr);
            }
            else
            {
               printf("Zero");
            }
            }
            
            else if(ope == '0')
            {
                float t,o,p;
    
                printf("\nenter total marks: ");
                scanf("%d",&a);
    
                printf("enter obtained marks: ");
                scanf("%d",&o);
    
                p = (o/a)*100;
    
                printf("\npercentage = %f%",p);
            }

        else if(ope == '9')
            {
            printf("1-sin\n");
            printf("2-cos\n");
            printf("3-tan\n");
            printf("Enter operator number: ");
            scanf("%d", &c);

            if (c == 1) 
            {
                printf("You have selected Sin\n");
                printf("sin(%d) = %f\n", a, sine(a));
            } 
            else if (c == 2) 
            {
                printf("You have selected Cos\n");
                printf("cos(%d) = %f\n", a, cosine(a));
            } 
            else if (c == 3) 
            {
                printf("You have selected Tan\n");
                printf("tan(%d) = %f\n", a, tangent(a));
            } 
            else 
            {
                printf("Invalid value!\n");
            }
            }
        else
        {
            printf("Invalid operation! Please select a valid operation.\n");
        }
    }

    return 0;
}
    

// Function definitions
float sine(float angle) 
{
    return sin(angle);
}

float cosine(float angle) 
{
    return cos(angle);
}

float tangent(float angle) 
{
    return tan(angle);
}