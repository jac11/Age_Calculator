#include <stdio.h>
#include <stdlib.h>

int Bday, BMonths, Byears;
int Cday, CMonths, Cyears;
int resultday, resultMonths, resultyears;

int info(void);
int Opretion(int, int, int, int, int, int);

int info(void) {
    printf("[*] Birthday Value (dd MM YYYY): ");
    scanf("%d %d %d", &Bday, &BMonths, &Byears);
    
    if (Bday > 31 || BMonths > 12 || Bday < 1 || BMonths < 1) {
        printf("[*] Birthday Value (dd MM YYYY): Format not Correct\n");
        return info();
    }

    printf("\nDay - Month - Year\n");
    printf("%2d %6d %9d\n\n", Bday, BMonths, Byears);

    printf("[*] Current Date Value (dd MM YYYY): ");
    scanf("%d %d %d", &Cday, &CMonths, &Cyears);

    if (Cday > 31 || CMonths > 12 || Cday < 1 || CMonths < 1) {
        printf("[*] Current Date Value (dd MM YYYY): Format not Correct\n");
        return info();
    }

    printf("\nDay - Month - Year\n");
    printf("%2d %6d %9d\n", Cday, CMonths, Cyears);

    return 0;
}

int Opretion(int Bday, int BMonths, int Byears, int Cday, int CMonths, int Cyears) {
    if (Cday < Bday) {
        Cday += 30;  // Approximation for month length
        CMonths -= 1;
    }
    resultday = Cday - Bday;

    if (CMonths < BMonths) {
        CMonths += 12;
        Cyears -= 1;
    }
    resultMonths = CMonths - BMonths;

    resultyears = Cyears - Byears;

    return 0;
}

int main() {
    printf("\n===================================\n");
    printf("    Welcome To Days Calculator    \n");
    printf("===================================\n\n");

    info();
    Opretion(Bday, BMonths, Byears, Cday, CMonths, Cyears);

    printf("\n==================================\n");
    printf("            Result              \n");
    printf("==================================\n");

    printf("\nDays - Months - Years\n");
    printf("%4d %6d %6d\n", resultday, resultMonths, resultyears);

    return 0;
}
