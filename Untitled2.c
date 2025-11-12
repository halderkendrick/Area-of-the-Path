#include<stdio.h>
int main()
{
    int a,b,p;
    printf("Enter the width of the garden: ");
    scanf("%d",&a);
    printf("Enter the length of the garden: ");
    scanf("%d",&b);
    printf("Enter the width of the road surrounding the garden: ");
    scanf("%d",&p);

    system("CLS");

    gulshan:
    printf("What do you want?\n");
    printf("1. Area of the Garden\n");
    printf("2. Area covered by the garden and the surrounding road\n");
    printf("3. Area of the path\n");
    printf("4. Parameter\n");
    printf("5. Cost for the road\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);

    system("CLS");

    printf("Processing.......\n\n");
    Sleep(1500);
    system("CLS");


    int area = a * b;
    int a_p = a + (p*2);
    int b_p = b + (p*2);
    int area_p = a_p*b_p;
    int path_area = area_p-area;
    int param = 2 * (a+b);
    int costOfTheRoad = 500 * path_area;

    switch(choice)
    {
        case 1:
            printf("The area of the garden is: %d square meters\n",area);
            break;
        case 2:
            printf("The total area covered by the garden and the surrounding road is: %d square meters\n",area_p);
            break;
        case 3:
            printf("The total area of the path is: %d square meters\n", path_area);
            break;
        case 4:
            printf("The total parameter of the garden: %d meters", param);
            break;
        case 5:
            printf("The total cost of the road is: %d BDT", costOfTheRoad);
            break;
        default:
            printf("\nInvalid Input.. Please Try again.\n");
            goto gulshan;

    }
}
