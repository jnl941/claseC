#include <stdio.h>

void escribe(int i){
    if(i < 0) return;
    escribe(--i);
    printf("%d ", i);
}

int main() { escribe(4); return 0; }