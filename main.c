#include <stdio.h>
#include <stdlib.h>

void print_Table(int tab[], int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d  ",tab[i]);
    printf("\n");
}

void swap(int *a, int *b){
    int help;
    help = *a;
    *a = *b;
    *b = help;
}

void selection_Sort(int tab[], int size){
    int i,j,min_pos;

    for(i=0; i<size-1; i++){
        min_pos = i;
        for(j=i+1;j<size; j++){
            if(tab[min_pos] > tab[j])
                min_pos = j;
        }
        if(tab[i] > tab[min_pos])
                swap(&tab[i],&tab[min_pos]);
    }
}


int main()
{
    int tab[] = {9,1,2,7,5,4,7,0};
    int size = 8;

    print_Table(tab,size);
    selection_Sort(tab,size);
    print_Table(tab,size);

    return 0;
}
