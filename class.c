void swap(int* a, int* b){
   int temp;
   temp = *a;
   *a=*b;
   *b = temp;
}

int main(){
int a=10, b=20;
swap(&a, &b);
return 0;
}