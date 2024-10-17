#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>
#include "getcoin.c"
int main () {
    srand(time(NULL));
    int coin;
    int result ;
    int joueur = 3;
    int win = 0;
    int lose = 0;


    printf("######## Pile ou Face ##########\n\n");
    while(joueur != 0 && lose < 10) {
        printf(" Pile ou Face ?\n 1. Pile\n 2. Face\n 0. Quitter\n");

        coin = rand();
        char buf[255];
        memset(buf,0,255);
        fgets(buf,255,stdin);
        // for(int i = 0;buf[i]!=0; i++){
        //     if(buf[i]>= 65 && buf[i] <= 90)
        //         buf[i] = buf[i] + 32;
        //  }   

        joueur = getcoin(buf);

        if(joueur == 1){
            printf("Vous avez choisie Pile\n");
            printf("la pièce est lancé...\n\n");
            usleep(500000);

            if (coin % 2 == 0){
                printf("Pile\n");
                printf("Vous avez gagné\n");
                win++;
                if (win > 1){
                    printf("Victoires:%d\n\n",win);
                } else {
                    printf("Victoire:%d\n\n",win);
                }
                if (lose > 1){
                    printf("Defaites :%d\n\n",lose);
                } else {
                    printf("Defaite :%d\n\n",lose); 
                }
                printf("[-------------------------]\n\n");
            } else {
                printf("Face\n");
                printf("Vous avez perdu\n");
                lose++;
                if (win > 1){
                    printf("Victoires:%d\n\n",win);
                } else {
                    printf("Victoire:%d\n\n",win);
                }
                if (lose > 1){
                    printf("Defaites :%d\n\n",lose);
                } else {
                    printf("Defaite :%d\n\n",lose); 
                }
                printf("[-------------------------]\n\n");
            }
        
        } else if(joueur == 2){
            printf("Vous avez choisie Face\n");
            printf("la pièce est lancé...\n\n");
            usleep(500000);
            if (coin % 2 ==0){
                printf("Pile\n");
                printf("Vous avez perdu\n");
                lose++;
                if (win > 1){
                    printf("Victoires:%d\n\n",win);
                } else {
                    printf("Victoire:%d\n\n",win);
                }
                if (lose > 1){
                    printf("Defaites :%d\n\n",lose);
                } else {
                    printf("Defaite :%d\n\n",lose); 
                }
                printf("[-------------------------]\n\n");
            } else {
                printf("Face\n");
                printf("Vous avez gagné\n");
                win++;
                if (win > 1){
                    printf("Victoires:%d\n\n",win);
                } else {
                    printf("Victoire:%d\n\n",win);
                }
                if (lose > 1){
                    printf("Defaites :%d\n\n",lose);
                } else {
                    printf("Defaite :%d\n\n",lose); 
                }
                printf("[-------------------------]\n\n");
            }
        } else if (joueur == 0 ){ 

        }
    }
    printf("########### GAME OVER ###########\n\n");
    return 0;
}