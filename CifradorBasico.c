void main (void) {

    int i = 0;
    int chave;
    char str[20];

    printf("----  Códificador de cifra de Cesar  ----\n\n\n");
    printf("Introduza a string: ");
    scanf("%s", str);

    printf("\n Introduza a chave");
    scanf("%d", &chave);

    for(i=0; i < 20; i++){
       str[i] = str[i] + chave;
    } printf("Resultado: %s", str);
}