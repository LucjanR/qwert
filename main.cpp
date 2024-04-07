#include <iostream>

void menu(void) {
    printf("\n");
    printf("0 - Exit\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("Select an option:\n");
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int option = 0;

    printf("Simple Calc\n");

    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                printf("Adding");
                break;
            case 2:
                printf("Subtracting");
                break;
            case 3:
                printf("Multiplying");
                break;
            case 4:
                printf("Dividing");
                break;
            default:
                printf("Choose the right option...\n\n");
        }
    } while (option != 0);

    return 0;
}