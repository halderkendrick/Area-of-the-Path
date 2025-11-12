#include <stdio.h>

int main()

{
    float length, width, path;

    printf("Enter Length: ");

    scanf("%f", &length);

    printf("Enter Width: ");

    scanf("%f", &width);

    printf("Enter Path: ");

    scanf("%f", &path);

    float area = length*width;

    float length_path = length + (path*2);

    float width_path = width + (path*2);

    float area_path = length_path*width_path;

    float area_of_path = area_path - area;

    printf("Area With Path: %.2f \n", area_path);

    printf("Area Without Path: %.2f \n", area);

    printf("Area Of The Path: %.2f", area_of_path);

    return 0;
}
