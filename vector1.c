#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivoaux=NULL;

    archivo=fopen("vector.txt","r+");
    archivoaux=fopen("vectorx3,txt","w");

    int x,y;
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
        fscanf(archivo,"%d",&x);
        y=x*3;
        fprintf(archivoaux,"%d\n",y);
    }
     fclose(archivo);
     fclose(archivoaux);
     return 0;
}