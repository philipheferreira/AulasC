#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


struct horario{ 
    int horas;
    int minutos;
    int segundos;
};


struct horario funcaoRecebeHorario(struct horario x);

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    struct horario agora;
    agora.horas = 10;
    agora.minutos = 20;
    agora.segundos = 40;
    
    struct horario proxima;
    proxima = funcaoRecebeHorario(agora);
    
    printf("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
    
    system("pause"); 
    return 0;
}

struct horario funcaoRecebeHorario(struct horario x){
    
    printf("%i:%i:%i\n", x.horas, x.minutos, x.segundos);
    
    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;
    
    return x;
}