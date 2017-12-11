double *pd;
double d;
d = 10.0;
pd = &d;
printf("%f", *pd);

// pd: 4 bytes 내용 : 0x20
// d: 8 bytes 주소 : 0x20~0x27 내용 : 10.0    


char *pc;
int i = 10;
pc = &i;

// pc : 4 bytes 내용 : 0x40

// i : 4 bytes 내용 : 000000A 주소 : 0x40~0x43

printf("%d", *pc); //이러면 ascii값이 나옴
printf("%c", *pc); //이러면 0 나옴


pc = (char *)&i;

printf("%d", *pc);





// * : 간접 참조 연산자

// 선언할때 * : 이 변수를 포인터로 선언하겠다는 뜻



// *는 포인터 변수에만 붙일 수 있다.

*p = 10;    //실행 에러


int *p = NULL;    //p를 널 포인터로 초기화한다.


if (p != NULL);
    *p = 10;            //p가 널 포인터가 아니란 걸 확인하고 쓴다


/// 전전긍긍


/*
intel컴퓨터 little endian 리틀 엔디언. 

0x40 41 42 43 : 빅 엔디언
00     00 00 0A
0x43 42 41 40 : 리틀 엔디언 
00     00 00 0A

*/


pi = &i;
pi = pi + 1;    //4를 더한다.




int arr[5] = {10, 20, 30, 40, 50}
int *p;
p = arr;
printf("%d", p[i]);    //p[i] == *(p + i)



struct student s1 = {blah blah blah};
struct student *p = &s1;

s1.math = 40;
(*p).math = 40;
p -> math = 40;
