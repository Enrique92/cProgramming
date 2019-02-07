/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

int vc_strlen(char *str){
   int i = 0;
   while (str[i] != ‘\0’){
       i++;
   }
   return i;
}

void vc_swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void vc_sort_int_table(int *tab, int size){
   int i, j;
   for (i = 0; i < size; ++i){
       for (j = 0; j < size; ++j){
           if (tab[i] > tab[j]){
               vc_swap(&tab[i], &tab[j]);
           }
       }
   }
}

int main(){
   int arr[8] = {4, 5, 6, 24, 1, 2, 3, 5};
   int i;
   for (i = 0; i < 8; i++){
       printf(“%d “, arr[i]);
   }
   printf(“\n “);
   vc_sort_int_table(arr, 8);

   for (i = 0; i < 8; i++){
       printf(“%d “, arr[i]);
   }
   return 0;
}