#include <stdio.h>

int main() {
    int dept, course;

    printf("Select Department:\n");
    printf("1. Computer Science\n");
    printf("2. Electrical\n");
    printf("3. Mechanical\n");
    printf("Enter choice: ");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
            printf("CS Department - Choose Course:\n");
            printf("1. Data Structures\n2. Operating Systems\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Data Structures.\n"); break;
                case 2: printf("You selected Operating Systems.\n"); break;
                default: printf("Invalid course.\n");
            }
            break;

        case 2:
            printf("Electrical Department - Choose Course:\n");
            printf("1. Circuits\n2. Power Systems\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Circuits.\n"); break;
                case 2: printf("You selected Power Systems.\n"); break;
                default: printf("Invalid course.\n");
            }
            break;

        case 3:
            printf("Mechanical Department - Choose Course:\n");
            printf("1. Thermodynamics\n2. Fluid Mechanics\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Thermodynamics.\n"); break;
                case 2: printf("You selected Fluid Mechanics.\n"); break;
                default: printf("Invalid course.\n");
            }
            break;

        default:
            printf("Invalid Department.\n");
    }

    return 0;
}