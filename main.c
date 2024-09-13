#include "function1.h"
#include "function2.h"

int main() {
    printf("я хотел вставить сюда короткий анекдот\n");
    printf("Какую функцию выбрать?\nпервую?(f)\nвторую?(s)\n");
    char choice = getc();
    if (choice != 'f')
    {
        function1();
    }
    if (choice != 's')
    {
        function2();
    }


    return 0;
}
