// Vector C Mini Project - Breakfast Menu Related

#include <stdio.h>

int main()
{
    int op, op2;
    int q;
    int total = 0;

mainmenu:

    printf("\n========== BREAKFAST HOTEL BILLING SYSTEM ==========\n");
    printf("1. Breakfast Menu\n");
    printf("2. Tea & Coffee\n");
    printf("3. Payment\n");
    printf("4. Exit\n");
    printf("Enter the option: ");
    scanf("%d", &op);

    switch(op)
    {
        // ---------------- BREAKFAST ----------------

        case 1:

        breakfast:

            printf("\n------ Breakfast Menu ------\n");
            printf("1. Idly    : Rs.40\n");
            printf("2. Dosa    : Rs.45\n");
            printf("3. Puri    : Rs.50\n");
            printf("4. Upma    : Rs.35\n");
            printf("5. Pongal  : Rs.30\n");
            printf("6. Back\n");

            printf("Enter the sub option: ");
            scanf("%d", &op2);

            switch(op2)
            {
                case 1:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 40 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 2:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 45 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 3:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 50 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 4:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 35 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 5:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 30 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 6:
                    goto mainmenu;

                default:
                    printf("Wrong option\n");
                    goto breakfast;
            }

        // ---------------- TEA & COFFEE ----------------

        case 2:

        tea:

            printf("\n------ Tea & Coffee ------\n");
            printf("1. Tea     : Rs.20\n");
            printf("2. Coffee  : Rs.25\n");
            printf("3. Milk    : Rs.30\n");
            printf("4. Back\n");

            printf("Enter the sub option: ");
            scanf("%d", &op2);

            switch(op2)
            {
                case 1:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 20 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 2:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 25 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 3:
                    printf("Enter quantity: ");
                    scanf("%d", &q);
                    total += 30 * q;
                    printf("Total Price = %d\n", total);
                    goto mainmenu;

                case 4:
                    goto mainmenu;

                default:
                    printf("Wrong option\n");
                    goto tea;
            }

        // ---------------- PAYMENT ----------------

        case 3:

        payment:

            printf("\n------ Payment ------\n");
            printf("1. Payment by Cash\n");
            printf("2. Payment by UPI\n");
            printf("3. Payment by Card\n");
            printf("4. Back\n");

            printf("Enter the sub option: ");
            scanf("%d", &op2);

            switch(op2)
            {
                case 1:
                    printf("Payment done by Cash\n");
                    printf("Final Bill = %d\n", total);
                    printf("Visit Again Thanks\n");
                    return 0;

                case 2:
                    printf("Payment done by UPI\n");
                    printf("Final Bill = %d\n", total);
                    printf("Visit Again Thanks\n");
                    return 0;

                case 3:
                    printf("Payment done by Card\n");
                    printf("Final Bill = %d\n", total);
                    printf("Visit Again Thanks\n");
                    return 0;

                case 4:
                    goto mainmenu;

                default:
                    printf("Wrong option\n");
                    goto payment;
            }

        // ---------------- EXIT ----------------

        case 4:
            printf("Exit\n");
            printf("Bye Bye\n");
            return 0;

        default:
            printf("Wrong option\n");
            goto mainmenu;
    }

    return 0;
}
