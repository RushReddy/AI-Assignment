#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void captcha_system() {
    int a, b, answer, user;

    srand(time(0));
    a = rand() % 10;
    b = rand() % 10;

    answer = a + b;

    printf("\n--- CAPTCHA SYSTEM ---\n");
    printf("Solve this to prove you are human:\n");
    printf("%d + %d = ", a, b);
    scanf("%d", &user);

    if (user == answer)
        printf("CAPTCHA Passed. Human Verified.\n");
    else
        printf("CAPTCHA Failed. Access Denied.\n");
}

void turing_test() {
    char question[] = "How are you?";
    char response[100];

    printf("\n--- TURING TEST SIMULATION ---\n");
    printf("Question: %s\n", question);

    printf("Enter response: ");
    getchar();
    fgets(response, sizeof(response), stdin);

    if (strstr(response, "fine") || strstr(response, "good") || strstr(response, "well"))
        printf("Response appears human-like.\n");
    else
        printf("Response appears machine-like.\n");
}

int main() {
    int choice;

    printf("AI Assignment Simulation\n");
    printf("1. CAPTCHA Verification\n");
    printf("2. Turing Test Simulation\n");
    printf("Choose option: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            captcha_system();
            break;
        case 2:
            turing_test();
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
