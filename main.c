#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HaderFile/Add_Employee.h"
void menu()
{
    printf("|=====================================================================|\n");
    printf("|============ *** WELLCOME EMPLOYEE MANAGEMENR SYSTEM *** ============|\n");
    printf("|                                                                     |\n");
    printf("|  1) Add Employee Record                  2) View Employee Record    |\n");
    printf("|                                                                     |\n");
    printf("|  3) Update Employee Details              4) Delete Employee Record  |\n");
    printf("|                                                                     |\n");
    printf("|  0) Exit                                                            |\n");
    printf("|=====================================================================|\n");
}
int main()
{
    int option = 100;
    while (option != 0)
    {
        menu();
        printf("Enter: ");
        scanf("%d", &option);
        while (option != 9 && option != 0)
        {
            switch (option)
            {
            case 1:
                /* code */
                printf("\n [0] Exit");
                printf("\n [9] Back Main Menu");
                printf("\nEnter: ");
                scanf("%d", &option);
                break;

            case 2:
                /* code */
                printf("\n [0] Exit");
                printf("\n [9] Back Main Menu");
                printf("\nEnter: ");
                scanf("%d", &option);
                break;

            case 3:
                /* code */
                printf("\n [0] Exit");
                printf("\n [9] Back Main Menu");
                printf("\nEnter: ");
                scanf("%d", &option);
                break;

            case 4:
                /* code */
                printf("\n [0] Exit");
                printf("\n [9] Back Main Menu");
                printf("\nEnter: ");
                scanf("%d", &option);
                break;

            default:
                /* code */
                printf("\nInvalid Output\n");
                break;
            }
        }
    }

    return 0;
}