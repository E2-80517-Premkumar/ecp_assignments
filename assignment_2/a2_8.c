#include <stdio.h>

int main()
{
    int qty;
    double unitprice = 5.0;
    double price;

    printf("Enter the quantity: ");
    scanf("%d", &qty);up

    if (qty <= 0)
    {
        printf("Invalid quantity entered.\n");
    }
    else if (qty <= 30)
    {
        price = qty * unitprice;
        printf("Total price: Rs %.2lf\n", price);
    }
    else if (qty <= 50)
    {
        double disc = 0.10; // for 10% discount
        price = qty * unitprice * (1 - disc);
        printf("Total price with 10%% discount: Rs %.2lf\n", price);
    }
    else
    {
        double disc = 0.15; // for 15% discount
        price = qty * unitprice * (1 - disc);
        printf("Total price with 15%% discount: Rs %.2lf\n", price);
    }

    return 0;
}
