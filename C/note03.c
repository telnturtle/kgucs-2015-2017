// 속도 : 함수 매크로
// 메모리 : 함수(?????)//함수로 쓰면 스택 메모리에 넣고, 또 호출하면 넣고 빼고, ···
// 간단히 말해서 간단한 연산은 매크로로 쓰는 게 좋다.

// 매크로 쓸땐 #define SQUARE(x) (x)*(x)라고 쓰는 게 좋다. 괄호로 감싸주자
// 매크로에는 연산을 넣지 않는 게 좋다.


#define DEBUG


// ···
#ifdef DEBUG
// ···


#endif

#if define(DEBUG)
// ···
#endif




int main(int argc, char *argv[])




(int *)malloc()~~~~    //malloc은 메모리 얼로케이션이다. 
void *malloc(size_t size);
//할당할 수 없으면 NULL을 반환한다.
//free(pi)
void &calloc(size_t n, size_t size);



realloc()
// :

int *p;
p = (int *)malloc(5 * sizeof(int)));
p = realloc(p, 7 * sizeof(int))
