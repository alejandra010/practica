#include <stdio.h> 
#include <stdlib.h>
#include <pthread.h> //crear funciones 
#include <unistd.h> // libreria para sleep 
#include<windows.h>
#include <string.h>

void *verde(void*); 
void *naranja(void*);
void *rojo(void*);

void *verde(void *tid)
{
system("cls"); //cls o clear es para limpiar la pantalla de comandos 
system("color 20");
Sleep(3000);

}

void *naranja(void *tid)
{
system("cls"); 
system("color E0"); 
Sleep(3000);
}
void *rojo(void *tid)
{
system("cls"); system("color 40"); Sleep(3000);
}

