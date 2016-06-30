#include <stdio.h>
#include <stdlib.h>

int z=500;
int deposito(int y, int a) {
    printf("Introduzca la cantidad que desee depositar: \nPresione 0 para cancelar\n");
        scanf("%d", &y);
        system("cls");
        if (y==0) {
            printf("Su dep%csito ha sido cancelado\n%cGracias por utilizar nuestros servicios!", 162, 173);
            system("pause");
            main(a);
        }
        else if (y!=0) {
            z=z+y;
            system("cls");
            printf("Se ha depositado exitosamente la cantidad de %d Pesos Dominicanos en su cuenta\n%cGracias por utilizar nuestros servicios!\n", y, 173);
            system("pause");
            main(a);
        }

}

int saldo(int a) {
    printf("Usted cuenta con un saldo de %d Pesos Dominicanos\n%cGracias por utilizar nuestros servicios!", z, 173);
    system("pause");
    main(a);
}

int retiro (int y, int a) {
    printf("Introduzca la cantidad que desee retirar\nPresione 0 para cancelar\n");
        scanf("%d", &y);
        system("cls");

        while (y<=99 && y<=-1){
            printf("Usted puede retirar como m%cnimo de 100 Pesos dominicanos\nPor favor, intente de nuevo\n", 161);
            system("pause");
            system("cls");
                printf("Introduzca la cantidad que desee retirar\nPresione 0 para cancelar\n");
                    scanf("%d", &y);
                    system("cls");
        }

        while (y>10000){
            printf("Usted puede retirar un m%cximo de 10,000 Pesos dominicanos\nPor favor, intente de nuevo\n", 160);
            system("pause");
            system("cls");
                printf("Introduzca la cantidad que desee retirar:\n");
                    scanf("%d", &y);
                    system("cls");
        }

        if (y==0) {
            printf("Su dep%csito ha sido cancelado\n%cGracias por utilizar nuestros servicios!", 162, 173);
            system("pause");
            main(a);
        }

        if(y>z){
            printf("La cantidad deseada para retirar es mayor que su saldo actual\nPor favor, consulte su saldo e intente de nuevo\n");
                system("pause");
                system("cls");
                printf("Introduzca la cantidad que desee retirar:\n");
                system("pause");
                    scanf("%d", &y);
        }

        if (y>=100) {
                z=z-y;
            printf("Usted ha retirado exitosamente la cantidad de %d Pesos Dominicanos\n%cGracias por utilizar nuestros servicios!\n", y, 173);
            system("pause");
            main(a);
            }

}


int a, x, y;

int main()
{
    system("cls");
    printf("Bienvenido al cajero auto%cmtico del Banco Tiburcio Dominicano, S.A.\nMen%c:\nPresione 1 para dep%csito de saldo\nPresione 2 para consulta de saldo\nPresione 3 para retiro saldo\nPresione 0 para salir\n", 160, 163, 162);
    scanf("%d", &a);
        system("cls");

    if (a==1)   {
        deposito(y, a);
    }

    if (a==2)   {
        saldo(a);
    }

    if (a==3)   {
        retiro(y,a);
    }

    if (a==0)   {
        printf("Sus operaciones bancarias han sido canceladas\n%cGracias por utilizar nuestros servicios!", 173);
        exit(0);
    }

    if (a!=0 || a!=1 || a!=2 || a!=3) {
        printf("Opci%cn invalida\nPor favor, intente de nuevo\n", 162);
        system("pause");
        system("cls");
            printf("Bienvenido al cajero auto%cmtico del Banco \nMen%c:\nPresione 1 para dep%csito de saldo\nPresione 2 para retiro de saldo\nPresione 3 para consultar saldo\n", 160, 163, 162);
            scanf("%d", &a);
            system("cls");
    }
}
