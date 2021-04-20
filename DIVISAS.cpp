#include<stdio.h>
#include<conio.h>
#include<iostream>


//crear repositorio
//Conversión de divisas 
//

main()
{

    float pesos,dolares,euros,libras;
    char opcion;
    
do{


 printf("\t\t\t CONVERSION DE DIVISAS \n\n");
  printf("\n Selecciona una opcion\n");
 printf("\t1.-Cambio de pesos a dolares:\n");
 printf("\t2.-Cambio de dolares a pesos:\n");
 printf("\t3.-Cambio de pesos a euros:\n");
 printf("\t4.-Cambio de euros a pesos:\n");
 printf("\t5.-Cambio de pesos a libras:\n");
 printf("\t6.-Cambio de libras a pesos:\n");
 printf("\t7.-Salir");


 scanf("%d",&opcion);
system("cls");//limpiar pantalla


 switch(opcion)
{
    case 1:{
        printf("Cantidad de pesos a convertir en dolares\n");
        scanf("%f",&pesos);
    dolares =pesos/19.83;
     printf("Dolares: %f\n",dolares);

    break;
    }
   
    case 2:{
     printf("Cantidad de dolares a convertir en pesos\n");
     scanf("%f",&dolares);
     pesos=dolares*19.83;
     printf("Pesos: %f\n",pesos);
    break;

    }

    case 3: {
     printf("Cantidad de pesos a convertir en euros\n");
     scanf("%f",&pesos);
     euros=pesos/23.87;
     printf("Euros: %f\n",euros);
     break;
    }

    case 4: {
     printf("Cantidad de euros a convertir en pesos\n");
     scanf("%f",&euros);
     pesos=euros*23.87;
     printf("Pesos: %f\n",pesos);
     break;
    }

    case 5:{
     printf("Cantidad de pesos a convertir en libras\n");
     scanf("%f",&pesos);
     libras=pesos/27.23;
     printf("Libras: %f\n",libras);
      break;
    }
   

    case 6: {
     printf("Cantidad de libras a convertir en pesos\n");
     scanf("%f",&libras);
     pesos=libras*27.23;
     printf("Pesos: %f\n",pesos);
     break;
    }
    
  default:
printf("\n\t\tVuelve pronto\n");
  exit(0);

}

     }while(opcion<7);


}

