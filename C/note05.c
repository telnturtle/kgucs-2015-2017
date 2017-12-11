char *mkstr(char c, int x)
{
    //char *mkstr('a', 5);       
     //'a' 'a' 'a' 'a' 'a' '\0', 주소값 0x20
    int i;

static char str[100];
for(i = 0; i < x; i++)        str[i] = c;

str[x] = NULL;
}
// 이렇게 짜면 문자열에다가 c를 x번 찍고 마지막에 NULL을 넣는 함수를 만들 수 있다. 실제로 있는 함수가 아님

char *s;

s = mkstr(

...



// (다음)



sprintf(str, "%d", 123);

// str의 메모리에 문자열 "123" 가 들어감.

sscanf(str, "%d", &j);
// 그럼 str메모리에 있는 "123" 가 들어와 10진수타입의 123가 j에 저장된다.




struct st {
//blah blah blah 


//...




};


struct st st1, st2, st3;

//s1.······

memcpy(&s2, &s1, sizeof(struct st));    //struct st1의 내용을 st2로 복사할 수 있다.
