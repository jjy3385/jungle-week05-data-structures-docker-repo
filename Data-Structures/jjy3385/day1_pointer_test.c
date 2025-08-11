#include <stdio.h>


void set_value_wrong(void* ptr, void* new_value){
    printf("set_value_wrong() ptr : %p\n",ptr);
    printf("set_value_wrong() new_value : %p\n",new_value);
    ptr = new_value;
}

void set_value_correct(void** ptr, void* new_value){
    printf("set_value_correct() ptr : %p\n",ptr);
    printf("set_value_correct() new_value : %p\n",new_value);    
    *ptr = new_value;
}

int main(){

    // int a = 10;
    // int b = 20;
    // int* p = &a;

    // set_value_wrong(p,&b);

    // printf("p points to: %d\n", *p);

    // printf("after set_value_wrong() main() p  : %p\n",p);
    // printf("after set_value_wrong() main() &b : %p\n",&b);    



    // set_value_correct((void**)&p,&b);

    // printf("p points to: %d\n", *p);

    // printf("after set_value_correct() main() p  : %p\n",p);
    // printf("after set_value_correct() main() &b : %p\n",&b);        



    // 이제 아래 코드에 대해 어느정도 이해를 할 수 있을거 같음


    //void** ptr = 0x00000000FFFF8392; // 예시로 든 값 입니다.
    // 1.0x00000000FFFF8392 주소에 있는것은? void* (포인터), 즉 ptr 은 타입이 void 인 포인터를 가르키고 있음
    // 2.*ptr = ptr이 가르키는 값이니까 걍  0x00000000FFFF8392 아닌가?? 확인해보자
    // 음? 아닌거 같네

    // int num = 30;
    // void* ptr = &num;

    // void** pptr = &ptr;

    // printf("pptr = %p\n",pptr);
    // printf("&ptr = %p\n",&ptr);

    // printf("*pptr = %p\n",*pptr);
    // printf("&num = %p\n",&num);


    // char* test = "안녕하세요";

    // void** ptr = (void**)&test;
    // char* name = (char*)*ptr;
    // printf("%s\n",name);
    // printf("%p\n",name);


    // printf("%s\n",name +1);
    // printf("%p\n",name);

    // return 0;


}
