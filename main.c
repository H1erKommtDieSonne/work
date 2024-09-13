#include "header.h"

int main() {
    printf("я хотел вставить сюда короткий анекдот\n");
    printf("Какую функцию выбрать?\nпервую?(first)\nвторую?(second)\n");
    char choice = getch();
    if (choice != 'first')
    {
        function1();
    }
    if (choice != 'second')
    {
        function2();
    }


    return 0;
}