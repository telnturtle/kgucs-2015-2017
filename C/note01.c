a[0] = 'H';
a[1]='e';
a[2]='l';
a[3]='l';
a[4]='o';
a[5]='\0';                                //'\0', 0, NULL

char a[10] = "Hello";        //초기화는 특별한 거에요

#include <string.h>
strcpy(a, "Good Bye");
strcmp(a, "Hello");            //같으면 0, 다르면 1
strlen(a);                                //'\0'

배열의 변수이름은 배열의 0번지 메모리주소를 가리킨다.

char c[] = "Karl Heltant";

printf("%s\n", c);
printf("%s\n", &c[0]);

