#include<stdio.h>
int f(int i) {

i++;

if(i == 0) goto go_to;

return i;

}

int main(void) {

f(0);

go_to:

return 0;

}
