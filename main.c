#include <stdio.h>
#include <stdlib.h>
int etudi ,options,i,cmtr;;
float Not[10],Moyenne ,Somme,max,min;
//----------------------------------------------
void stocker(){
    printf("\nQue souhaitez-vous fair ?\n");
    printf("\n1. Calculer la moyenne des notes \n");
    printf("\n2. rouver la nots la plus elevee et la plus basse\n");
    printf("\n3. afficher les nots superieures a la moyenne\n");
    printf("\n4. compter le nombre d etudiants ayant valide (note>=12)\n");
    printf("\n5. compter le nombre d etudiants en rattrapage (note<12)\\n");
    printf("\n6. Quiter\n");
    printf("entrez votre choix : ");
    scanf("%d",&options);
}
//----------------------------------------------}
void Moyene(){
    Somme=0;
   for(i=0;i<etudi;i++){
    Somme+=Not[i];
   }
   printf("\nla moyenne des notes : %.2f\n",(Somme/etudi));
}
//------------------------------------------------
void max_min(){
   max=Not[i];
   for(i=0;i<etudi;i++){
   if(max<Not[i])
    max=Not[i];
   }

    min=Not[i];
   for(i=0;i<etudi;i++){
   if(min<Not[i])
    min=Not[i];
   }
    printf("la note la plus elevee %.2f et la plus basse %.2f\n",max,min);
}

//------------------------------------------------
void supe(){
    Moyene();
for(i=0;i<etudi;i++){
     if(Moyenne<Not[i]){
        printf("toutes les notes superieures a la moyenne : %.2f\n",Not[i]);
     }
    }
}
void ayant_valide(){
    cmtr=0;
    for(i=0;i<etudi;i++){
        if(Not[i]>=12)
            cmtr++;
    }
    printf("le nombre d etudiants ayant valide : %d\n",cmtr);
}
//-----------------------------------------------------
void ratt(){
 cmtr=0;
    for(i=0;i<etudi;i++){
        if(Not[i]<12)
            cmtr++;
    }
    printf("le nombre d etudiants en rattrapage : %d",cmtr);

}
int main()
{
    printf("veuillez entrer etudiants :");
    scanf("%d",&etudi);
    for(i=0;i<etudi;i++){
        printf("entrez la not de etudiant %d :",i);
        scanf("%f",&Not[i+1]);
     }

    while(options!=7){
             printf("\nQue souhaitez-vous fair ?\n");
    printf("\n1. Calculer la moyenne des notes \n");
    printf("\n2. rouver la nots la plus elevee et la plus basse\n");
    printf("\n3. afficher les nots superieures a la moyenne\n");
    printf("\n4. compter le nombre d etudiants ayant valide (note>=12)\n");
    printf("\n5. compter le nombre d etudiants en rattrapage (note<12)\\n");
    printf("\n6. Quiter\n");
    printf("\nentrez votre choix : ");
    scanf("%d",&options);

    switch(options){
       case 1 : Moyene();
               break;
       case 2 : max_min();
               break;
       case 3 : supe();
               break;
       case 4 : ayant_valide();
               break;
       case 5 : ratt();
               break;
       case 6 : printf("Au revoir");
       default : return 0 ;
               break;

}
}
    return 0;
}
