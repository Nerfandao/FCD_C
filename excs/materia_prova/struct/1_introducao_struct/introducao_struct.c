#include <stdio.h>

int main()
{

    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;
    agora.horas = 14;
    agora.minutos = 42;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 1;
    depois.minutos = agora.minutos
                         depois.segundos = agora.segundos + 20;

    printf("%d %d %d\n", agora.horas, agora.minutos, agora.segundos);
    printf("%d %d\n", agora.horas, depois.horas);
}