# 컴파일러

과목 소개

- 이은정
- 교재 안 사도 됩니다
  - 교수님이 번역한 책이 있다 뭐였는지 까먹음
  - 5000, 6500원
- 목표
  - 컴파일러 만드는건 요즘 의미가 없고 언어 이해를 해보자 (??)
  - 언어 처리 기술
  - 기술 활용
  - 완화 비율이 아니다
- 강의 내용
  - 언어
  - 문법, Regexp, Parce
  - 파서 생성기
    - 진입 장벽
  - 다른거..새로운거
  - XML 기술
    - 할지말지고민
- 강의계획
  - 자바의 정규표현식이 잘 되어있다
    - Java Regex
  - 유한오토마타
    - 천지인 오토마타
  - Context-free grammer
    - **여기까지 중간고사**
  - 파서 생성기
    - ANTLR
  - 학기말에 Java 8 를 할지도

람다 대수..는 힘들고요

- Term Project
  - 파서 생성기
  - 언어기술이용
    - e.g. 파일 비교 / 디렉토리 비교
    - Python Doc 생성기..?
    - 계산기? 너무 쉽나
    - 어느정도 복잡도가 있는 파서 생성기
    - git commit 이거도 못하려나
  - 1-3인 1팀
  - Project 안하면 조사 발표
    - A받으려면 플젝하세요
  - 배운 언어 기술 활용
  - 제안서, 중간 보고서가 있다
  - 기말고사를 대체한다
  - 중간고사는 있다
- 실습 좀 있습니다 앞으로 당겨앉아 주세요
- 출석 인증은 뭐지
- 15학번 나 혼자냐

> Sep 6 w1

언어

- 언어는 심볼의 나열이다
  - 나열 순서
  - 반복
  - 선택
  - 규칙
  - 심볼
  - 정보
- 통신
- 데이터 저장 수단
- Serialize
  - 일렬의 데이터로 저장한다는 뜻
  - 직렬화된걸 output
- Deserialize
  - Input을 deserialize
- 데이터 구조는 언어가 아니다
  - not Sequential
  - 데이터 구조를 sequential한 표현으로 만들어놓으면 그건 언어겠지

근데 이거 PL ppt인데? 언어라서 그런가

Language representation

- Protocol
- Mathematical
  - Regex
  - Grammer
- Docs
  - URL
  - Email address
- Language Spec
  - C++

해석기

- 문법에 맞는가?
- 자동 생성기
  - 툴
- 도구를 쓰자

Compiler

- 어휘 분석
  - Lexer
- 구조 분석
  - Tree
  - Parser
- 의미 분석
- Front-end와 back-end가 있다
- 어셈블리 코드를 생성한다

> 컴파일러는 안 배워도 되는 기술이에요

yacc: 파서 생성기

> Sep 13

언어의 규칙을 수학적으로 표현한다

- 언어의 처리
  - 표현
  - 생성
  - 검사
  - 해석

### 언어의 종류
- 복잡도에 따라 분류하기
  - 간단한 언어
    - 반복, 선택, 등의 구조로 표현이 가능하다
  - 좀 더 복잡한 언어
    - 반복, 선택 외에 중첩 구조도 표현 가능하다 e.g. Properly Nested Parentheses
  - 아주 복잡한 언어 e.g. 자연어
- Regular Language
  - 나열, 반복, 생략, 선택으로 표현할 수 있는 언어
- Context-free Language
  - (중첩) 재귀 구조를 포함
- 언어의 구분에 따라 표현 방법 및 처리기의 알고리즘이 결정된다

## Regular Language
### 심볼
- 언어의 기본 구성 단위
- 심볼은 언어에 따라 달라진다
  - e.g. C
    - 어휘분석에선 void가 언어고 v는 심볼
    - 구문분석에선 void와 int가 심볼
- 심볼을 정의하는것이 언어를 정의하는 첫걸음이다
- 알파벳 Σ = 심볼의 집합
  - e.g.
  - Σ1 = {0,1}
  - Σ2 = 영문자 ∪ 숫자 ∪ {underscore}
  - Σ3 = 한글글자
- 메타심볼
  - 언어를 표현하는데 사용하는 연산 기호
  - 심볼 집합에 속하지 않음
  -  ε, Ø, |, *, (, )

### Regex
- L(r): Set of strings
- String: 심볼이 나열된 것
- e.g. L(a) = {a} 에서, 앞의 a는 regex repr, 뒤의 a는 string 이다
- ε: Empty string
  - L(ε) = {ε}
- Ø: empty set
  - L(Ø) = Ø

#### Choice
r | s: 정규식 r과 s 중에서 선택

L(r|s) = L(r) ∪ L(s)

#### Concatenation
L(rs) = L(r)L(s)

연산자 생략 가능 e.g. a·b 를 ab로 쓸 수 있다

#### Repetition
`L(r*) = {ε, r, rr, …} = L(r)*`

S* = {ε} ∪ S ∪ SS ∪ SSS ∪ …

Kleene closure 라고 한다

#### Brackets
- L((r)) = L(r)
- 연산자의 우선순위를 바꾼다

#### Operator Priority
`* > concat > |`

#### 연습문제
aaaa

aaab

aaba

abaa

abab
- `(a|b)*b(a|b)*`
  - 15
- `0*110*`
  - 3
- `0*10*10*10*`
  - 4
- `(b*ab*a)*b*`
- `(a*|b)a*`
- b가 연속해서 나오지 않는 모든 문자열의 집합
  - `(a|ba)*(a*|b)`
- ab가 나오지 않는 모든 문자열
  - `b*a*`
- ab가 한번 이상나오는 모든 문자열
  - `(a|b)*ab(a|b)*`
- b가 [안나오는, 한번이상, 한번만, 두번이상, 짝수번]
- a로 시작하면서 길이가 짝수
  - a(a|b)(aa|ab|ba|bb)*

#### regex 변환 공식
- r|s = r|s
- (r|s)|q = r|(s|q)
- r(s|q) = rs|rq
- r|r = r
- `r* = ε|rr* = (v|r)* = (r*)* = r*|r`
  - = r*|r|ε
- `(r|s)* = (r*|s*)* = (r*s*)*`
  - != r*s*

**ASSIGNMENTS**: '구하기' 유인물

> Sep 20 w3

## Java Regex
### 개요
Java.until.regex API
- 기본 구문과 다른 새로운 형식이다
- 프로그램 코드에서 사용가능한 형식으로 정의되었다
- 대부분의 언어에서 비슷하게 사용된다

정규식의 표현
- 세 개의 클래스 사용
- Pattern, Matcher, PatternSyntaxException

Pattern
- 정규식의 컴파일된 표현
- 생성은 static 생성 메소드를 이용 -> Pattern 객체 반환
- 정규표현식 문자열을 첫 번째 매개변수로 받음

Matcher
- 패턴을 해석하는 엔진
- 입력에 대해 매치 연산을 수행
- Pattern 클래스의 matcher 메소드로 반환 받음

### 테스트 장치
정규식의 테스트 프로그램

RegexTestHarness.java

### 스트링 리터럴
정규식의 가장 간단한 형태

정규식 foo
- 자바에서는 정규식도 문자열로 표현됨 "foo"
- 문자열 "foo"에 매칭됨

테스트 방법
- 매치 성공

```
> javac RegexTestHarness.java

> java RegexTestHarness

Enter your regex: foo
Enter input string to search: this is foo test!
찾은 문자열  "foo" (8, 11)

Enter your regex: foo
Enter input string to search: this is foo test. where is foo?
찾은 문자열  "foo" (8, 11)
찾은 문자열  "foo" (27, 30)
```

메타문자
- 정규식을 작성하는데 쓰이는 특수문자
- cat. : 점은 메타문자로 임의의 글자를 뜻한다

메타문자의 종류
- <([{\^-=$!|}])?*+.>
- 메타문자가 일반문자처럼 취급되는 경우
  - 백슬래시의 뒤에 오는 경우
  - \Q(인용 시작)과 \E(인용끝) 으로 둘러싸여 있는 경우

### 문자 부류 (Character Classes)
Class란: 문자 집합으로 표현되는 심볼의 종류

Construct | Description
--- | ---
[abc] | a, b, 또는 c(단순 클래스)
[^abc] | a, b, 또는 c 이오의 모든 문자 (제외)
[a-zA-Z] | a에서 z, 또는 A에서 Z까지 양쪽 포함 (범위)
[a-d[m-p]] | a에서 d, 또는 m에서 p까지: `[a-dm-p]` (합집합)
[a-z&&[def]] | d, e, 또는 f (교집합)
[a-z&&[^bc]] | a에서 z, b와 c 제외: `[ad-z]` (빼기, 차집합)
[a-z&&[^m-p]] | a에서 z, m와 p 제외: `[a-lq-z]` (차집합)

#### 기본 부류
[brc]at
- b, c, r 중 하나
- bat, cat, rat 테스트. hat은?

#### 제외
[^bcr]at
- 대괄호 제일 앞에 ^을 넣으면 제외하고 나머지

#### 범위 
[1-5], [a-h]

### 미리 정의된 문자 클래스
자주 쓰이는 문자 클래스를 미리 정의해 둔 것

수식 | 설명
--- | ---
. | 모든 글자 (줄바꿈 포함 여부는 설정에 따라)
\d | 숫자 [0-9]
\D | 숫자 아닌 것 [^0-9]
\s | 공백 문자 [ \t\n\x\B\f\r]
\S | 공백 문자 아닌 것 [^\s]
\w | 단어 글자 [a-zA-z_0-9]
\W | 단어 글자 아닌 것 [^\W]


> Sep 27 w4

입력 스트링에서 인덱스 위치: 
```
  cell 0    cell 1    cell 2
──────────────────────────────
│    f    │    o    │    o    
──────────────────────────────
†         †         †
Index 0   Index 1   Index 2
```

### 퀀티파이어
매치되는 횟수를 지정한다

Greedy | Reluctant | Possessive | Meaning
--- | --- | --- | ---
X? | X?? | X?+ | X, once or not at all
X* | X*? | `X*+` | X, zero or more times
X+ | X+? | X++ | x, one or more timse
X{n} | X{n}? | X{n}+ | X, exactly n times
X{n,} | X{n,}? | X{n,}+ | X, at least n times
X{n,m} | X{n,m}? | X{n,m}+ | X, n번 이상, m번 이하

심볼의 등장 횟수를 지정하는 방법

? | 0번 또는 1번
* | 0번 이상
+ | 1번 이상
X{n} | 정확히 n번
X{n,} | n번 이상
X{n,m} | n번 이상, m번 이하

한정자는 한 글자에 적용된다






### 캡처 그룹
괄호로 묶인 부분 e.g. (abc)+

여러 개의 문자를 하나의 단위로 취급하는 방법

나중에 후참조로 참조 가능하다

문자 부류: 대괄호로 묶인 부분 e.g. [abc]+

e.g. ((A)(B(C)))
- ((A)(B(C))): 0번
- (A): 1번
- (B(C)): 2번
- (C): 3번
- 캡처 그룹 개수는 매처.groupCount()
- 번호를 매기는 순서는, 0은 전체 패턴 매치고, 나머지는 preorder

매처 클래스에서 그룹 번호 사용
- start(n): 직전 매치 연산에서 n번째 그룹에 캡처된 부분의 시작 인덱스 반환
- end(n): ~~ 끝 인덱스 반환
- group(n): ~~ 입력부분을 반환

패턴 내에서 backreference로 사용가능
- \1: 1번 그룹에 매치된 문자열
- (\d\d)\1

### 연습 문제

맨앞과 맨뒤가 동일한 암호가 나와야 한다. 시작과 끝에 암호를 가지는 입력 (암호는 단어)

^(\w+) .* \1$

```앞에 나온 카드 번호와 입력의 제일 뒤에 나오는 ****- ****-****-oooo의
끝 네자리가 일치해야 함

^\d\d\d\d-\d\d\d\d-\d\d\d\d-(\d\d\d\d).*
\d\d\d\d-\d\d\d\d-\d\d\d\d-\1$
```

### Pattern 클래스의 메소드들
패턴 클래스란
- 정규식을 표현하는 클래스
- 내부적으로 FSM으로 표현됨

Flags
- 매치의 조건을 지정하는 방법
- 대소문자 구별, 멀티라인지원, 패턴내  코멘트허용 등
- 내장 플래그: 패턴 내에서 플래그 표현
  - (?i)\w*aa: 대소문자 구별하지 않음

패턴 클래스의 주요 메소드
boolean Pattern.matches(String, CharSequence)
```
int val = 0;
String token = scan.next();
if (Pattern.matches("\\d+", token))
    val = Integer.parseInt(token);
```

split(String)
```
Pattern p = Pattern.compile(REGEX);
String[] items = p.split(INPUT);
```

### java.lang.String 의 regex 지원기능
- str.matches(regex)
  - pattern.matches(regex, str)
- String[] tokens = str.split(regex)
  - Pattern.compile(regex).split(str)
- public String replace(CharSequence target, CharSequence, replacement)
  - 여기서 target은 문자열 리터럴임

### 매처 클래스
패턴과 문자열에 대해 매치를 수행할 객체
- 매치된 결과를 저장 matches, find
- 요청에 따라 결과 반환 group()

```
Pattern patt = null;
String line = null;
while (true) {
    System.out.print("pattern expression : ");
    line = scan.nextLine();
    if (line.length()==0) break;
    patt = Pattern.compile(line);
    while ((line = r.readLine()) != null) {
        Matcher m = patt.matcher(line);
        while (m.find())
        index.add(m.group(0));
    }
    arrList = new ArrayList<>(index);
    Collections.sort(arrList);
    for (String s : arrList)
    System.out.println(s);
    System.out.println(arrList.size()+"개 요소");
}
```

```
Pattern pattern = Pattern.compile(console.readLine("\nEnter your regex: "));
Matcher matcher = pattern.matcher(console.readLine("Enter input string to search: "));
while (matcher.find()) {
    console.format("찾은 문자열 " + " \"%s\" (%d, %d)%n",
    matcher.group(),
    matcher.start(),
    matcher.end());
}
```

### 과제
다음 수업 전 까지, regex과제있음 lms참조

## LEX - 어휘분석기 생성기
- 용도: 토큰의 종류가 많고, 입력 데이터가 많고, 실시간 처리가 필요한 경우, Regex 방식으로는 성능을 낼 수 없을 때 쓴다
- 사용 단계: 토큰과 토큰 별 액션을 모두 정의하고, 코드를 생성해 어휘분석기를 빌드하고, 입력을 처리한다

### Lex의 메타심볼
- 메타심볼 : * + ( ) | ?
  - 메타심볼이 아니면 “if”나 if 모두 허용
  - 메타심볼이면 반드시 "(" 또는 \( \n \t
  - e.g. `(aa|bb)(a|b)*c? = (“aa”|”bb”)(“a”|”b”)*”c”?`
- [...] : 심볼집합
  - e.g. = (aa|bb) [ab]*c?
  - `[abxz][0-9][^0-9abc]`
  - `("+"|"-")?[0-9]+("."[0-9]+)?{E("+"|"-")?[0-9]+)?`
- […] 안에서는 메타심볼의 특성을 잃어버린다.
  - [-+]: - 또는 +
  - [+-]: +부터 전부
  - [."?] . 또는 " 또는 ?
  - 예외: ^와 \    [\^\\]
- 미리 정의된 정규표현의 이름에는 {…} 사용 e.g.
```
nat [0-9]+
signedNat (+|-)? {nat}
```
### 심볼 및 메타심볼

패턴 | 의미
--- | ---
a | 문자 a
“a” | 문자 a, 메타심볼 포함
\a | 문자 a, 메타심볼 포함
a* | a를 0번 이상 반복
a+ | a를 한번 이상 반복
a? | 생략가능한 a
a|b | a 또는 b
(a) | a 자신
[abc] | a, b, c 중 하나
[a-d] | a, b, c, d 중 하나
[^ab] | a와 b를 제외한 모든 글자
. | Newline을 제외한 모든 글자
{xxx} | xxx라는 이름이 나타내는 정규표현식

### Lex의 인풋 포맷
Input file = regex + C code
- Definitions
  - Header: 생성 코드 앞에 넣을 코드: `%{...}%`
  - 토큰정의부: 이름을 가지는 정규식 정의부
- Rules
  - regex + C code (action)
  - 처리할 토큰과 액션을 정하는 부분
  - 그 토큰이 인식될 때 수행할 액션
- Optional
  - C code + main program (if needed)

Layout
```
{definitions}
%%
{rules}
%%
{auxiliary routiens}
```

프로그램의 실행 방식
- yylex()에 의해 어휘분석 실행
- main()ㅔㅇ서 yylex()를 호출

yylex()의 수행 방식
- 입력을 계속 읽으면서
- Rules에 있는 토큰을 하나씩 인식할 때마다 액션을 수행한다.
- 다음 토큰을 읽는다.

Definitions
- 공통 헤더
  - 생성된 코드에서 사용하는 유닉스 함수 더미
  - 윈도우 환경을 위한 #define
- 전역변수 정의
  - int lineno: ㅐㅇㄱ션부에서 줄번호를 출력하기 위한 전역 변수
- 정의부 `%{...}%`는 생성된 코드에 그대로 덧붙여진다.

```
%{
#include <stdlib.>
#define YY_SKIP_YYWRAP
int isatty(int a) {return 0;}
int yywarp() {return 1;}
int lineno = 1;
}%
```

공통부
- 토큰정의부
- 어휘분석기에서 사용할 토큰을 정의하는 부분
- 다른 토큰에서 쓰기 위한 부분도 정의
- 단순 토큰 for, if 이런 것은 정의하지 않고 규칙부에서바로 사용 가능

```
digit   [0-9]
number  {digit}+
float   {number}(\.{number})?
newline \n
```

규칙부
- 토큰 별로 액션을 지정
- 토큰의 매치 순서를 결정: 앞에 나오는 것 우선
- 규칙에 매치되지 않는 것은 패스

```
%%
{number}    {int n = atoi(yytext);printf("%5d\n",n);}
{newline}   {lineno++;}
.           ;
%%
```

보충코드부
- 생성될 코드 끝부분에 그대로 집어넣을 코드
- main 함수 코드ㄹㄹㅡ 넣을 수 있다.
- 이 예에서 main 함수는 생성된 코드의 함수인 yylex()를 호출
```
%%
void maiN()
{
    yylex();
}
```

### Flex 설치 및 진행
설치

Lex 입력 파일을 이용하여 실행
- flex eg1.l ("El")
- Lex.yy.c 파일이 생성됨
- vs에서 프로젝트 생성 (????)
  - 생성된 .c 파일 이용

- Flex 설치 (path 자동 설정됨)
- 입력 파일 .l을 가진 디렉토리에서 터미널 열어서
- `> flex eg1.l`

- 생성된 lex.yy.c 파일을 vs로 열어서 프로젝트 생성하고
- 실행
- 명령창에서 입력 후 ^Z를 입력해서 EOF를 입력할 수 있다.

입력.l 파일을 수정하여 다시 생성하는 경우, flex를 다시 수행하면, 소스 파일이 다시 생성되므로 빌드를 다시 해야 한다. 

`//#include <unistd.h>`

Example 1
```
file eg2.l
%{
/* a Lex program that adds line numbers to lines of text,
printing the new text to the standard output
*/
#include <stdio.h>
#include <stdlib.h>
int isatty(int a) {return 0;}
int yywrap() {return 1;}
#define YY_SKIP_YYWRAP
int lineno = 1;
%}
line .*\n
%%
{line} {printf("%5d %s",lineno++,yytext); }
%%
main()
{ yylex(); return 0; }

in cmd
> flex eg2.l
> gcc lex.yy.c
> a < in2.txt > out.txt

file in2.txt
azyk
nir mtuhmnw
oaisjdfo
3213
50.54064.

out.txt
    1 azyk
    2 nir mtuhmnw
    3 oaisjdfo
    4 3213
    5 50.54064.
```

```
/****************************************************/
/* File: tiny.l                                     */
/* Lex specification for TINY                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

%{
#define YY_SKIP_YYWRAP
#include "globals.h"
#define MAXTOKEN 100
#define MAXTOKENLEN 30
/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];
int lineno = 1;
int isatty(int a) {return 0;}
int yywrap() {return 1;}
%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%

"if"            {return IF;}
"then"          {return THEN;}
"else"          {return ELSE;}
"end"           {return END;}
"repeat"        {return REPEAT;}
"until"         {return UNTIL;}
"read"          {return READ;}
"write"         {return WRITE;}
":="            {return ASSIGN;}
"="             {return EQ;}
"<"             {return LT;}
"+"             {return PLUS;}
"-"             {return MINUS;}
"*"             {return TIMES;}
"/"             {return OVER;}
"("             {return LPAREN;}
")"             {return RPAREN;}
";"             {return SEMI;}
{number}        {return NUM;}
{identifier}    {return ID;}
{newline}       {lineno++;}
{whitespace}    {/* skip whitespace */}
"{"             { char c;
                  do
                  { c = getchar();
                    if (c == EOF) break;
                    if (c == '\n') lineno++;
                  } while (c != '}');
                }
.               {return ERROR;}

%%

void printToken( TokenType token, char* buf )
{ switch (token)
  { case IF:
    case THEN:
    case ELSE:
    case END:
    case REPEAT:
    case UNTIL:
    case READ:
    case WRITE:
      strcpy(buf, "reserved word");
      break;
    case ASSIGN: 
    case LT: 
    case EQ: 
    case LPAREN: 
    case RPAREN: 
    case SEMI: 
    case PLUS: 
    case MINUS:
    case TIMES:
    case OVER: strcpy(buf, "operator"); break;
    case ENDFILE: strcpy(buf, "EOF"); break;
    case NUM:
      strcpy(buf, "num");
      break;
    case ID:
      strcpy(buf, "ID");
      break;
    default: /* should never happen */
      strcpy(buf, "unknown");
  }
}


void main()
{
  TokenType currentToken;
  char buf[20];
  while (1) {
	currentToken = (TokenType)yylex();
    printf("\t%d: ",lineno);
	printToken(currentToken, buf);
    printf("%s \t %s\n", yytext, buf);
  }
}
```

자바 regex랑 lex는 중간고사야

> Oct 11 w5

## DFA
표현: 정규식, 알고리즘: 오토마타

프로그래밍을 모델링 할 때도 오토마타를 쓰면 좋습니다 다큐먼트로도 쓰임

전이되는 여기 상태 단 하나

Deterministic Finite Automaton

### 정의

A deterministic finite automaton M is a 5-tuple, (Q,Σ,δ,q0,F), consisting of
- a finite set of states (Q)
- a finite set of input symbols called alphabet (Σ)
- a transition function (δ : Q × Σ → Q)
- an initial or start state (q0 ∈ Q)
- a set of accept states (F ⊆ Q)

Let w = a1a2 ... an be a string over the alphabet Σ. The automaton M accepts the string w if a sequence of states, r0,r1, ..., rn, exists in Q with the following conditions:
```
    r0 = q0
    r i+1 = δ(ri, a i+1), for i = 0, ..., n−1
    rn ∈ F.
```

In words, the first condition says that the machine starts in the start state q0. The second condition says that given each character of string w, the machine will transition from state to state according to the transition function δ. The last condition says that the machine accepts w if the last input of w causes the machine to halt in one of the accepting states. Otherwise, it is said that the automaton rejects the string. The set of strings that M accepts is the language recognized by M and this language is denoted by L(M).

A deterministic finite automaton without accept states and without a starting state is known as a transition system or semiautomaton.

For more comprehensive introduction of the formal definition see automata theory.


### 동작
상태 p에서 입력 a를 보고 상태 q로 이동할 수 있다. 

T(p, a)가 없다면, 처리되지 않는 입력이다. 에러 상태는 굳이 나타내지 않아도 된다.

### 문자열에 의한 전이
T(p,ab) = T(T(p,a),b) = r if T(p,a) = q and T(q,b) = r

T(p0, a1 a2...an) = T(T(p0, a1), a2...an) = T(p1, a2...an) = T(T(p1, a2), a3...an) = ... = pn

문자열: x,y,z ∈ Σ*

### 받아들이는 언어
DFA M, L(M) = { x | T(s0, x) ∈ F }

acceptableString = a1 a2...an ∈ L(M)

### State Transition Diagram
DFA를 그림으로 표현하는 방법

### DFA 구하기
L을 받아들이는 머신 M이 있다면, L의 여집합을 받아들이는 머신은, M의 파이널을 넌파이널로, vice versa, 머신이다.

### State Transition Table
- 시작상태 p, 최종상태집합 {r}
- 상태집합 S = {p,q,r}
- 알파벳 Σ = {0,1}
- 전이함수
  - T(p,0) = q, T(p,1) = p
  - T(q,0) = r, T(q,1) = q
  - T(r,0) = r, T(r,1) = r


 | 0 | 1
--- | --- | ---
p | q | p
q | r | q
r | r | r  

### 설계 방법
- 알파벳과 시작 상태를 나타낸다.
  - 널 스트링을 포함한다면, 시작 상태가 최종 상태가 됨
  - 시작 상태에서 각 심볼로 이동할 수 있는 상태를 구한다
  - 새로운 상태가 필요한지, 기존의 상태로 갈 수 있는지
- 상태의 설계 방법
  - 상태는 현재까지의 입력이 어떤 값인가를 나타내는 역할: 구별되어야 하는 정보를 표현
  - 언어의 조건을 만족하기 위해 필요한 상태를 구해가는 과정

### DFA 프로그래밍
필요한 자료구조: 심볼의 집합, 상태전이표

처리할 내용
- 상태의 이동: 현재 상태 + 다음 심볼
- 종료 상태 도달 여부 검사
- 오류처리
  - 심볼이 아닌 입력
  - 다음 상태가 없는 경우

#### e.g. 
자료구조의 표현
- 심볼: 0부터 차례로 번호를 가짐
  - char[] Symbols = {'0', '1'};
- 상태전이표: 이차원 배열
  - 상태 x 심볼 번호
  - int[][] tran = {{1,0},{0,2},{0,2}};
  - 종료상태 집합
    - boolean[] accepts = {false, false, true}

현재 상태와 현재 심볼: int q = 0; char ch;

기본 알고리즘
- 입력을 한 글자씩 읽으면서 (입력이 끝날 때까지)
  - q = trans[q][ch]; // q: 다음 상태
  - if (q == -1) break; // 다음 상태가 없으면 오류
  - 다음 한 글자를 읽는다.
- 입력을 모두 읽고 종료상태에서 끝나면 성공
- 아니면 실패

```c
char[] symbols = {'0','1'};
int[][] = trans{{1,0},{0,2},{0,2}};
boolean[] accepts = {false,false,true}; // Boolean?!
int q = 0; char ch; // Current state and symbol
while()
{
  q = trans[q][ch];
  if(q == -1) break;
  read_next_ch;
}
if final then success else fail
```

## 한글 오토마타
### 선택 과제 ASSIGNMENTS
- 종성 처리 기능 추가 구현
- 전체 오토마타 그리기 (ppt) (?)

뭐라고?

- 종성오토마타를 이쁘게 그리는걸 선택과제로 내는걸로 아니 뭔소리야 교수님 이해를 못함

-----
10월 중에 파서 생성기를 할 예정이에요

11월 중엔 뭘 할지 고민이에요 프로젝트나 할까

> Oct 18 w6

요약

파싱, 문맥무관문법, 파스 트리와 추상 구문 트리, 문법의 모호성, EBNF와 구문 다이어그램, 문맥자유문법의 특성, TINY 언어의 구문

## Context-Free Grammar
정규언어는 유한상태오토마타로 표현할 수 있는 언어.

(a^n b^n) <- 언어를 생각해봅시다. 오토마타를 그리면, a가 몇개 나왔는지 기억하려면, 상태가 n개가 필요하겠죠. n->inf. 로가면, 상태가 무한하게 필요하겠죠

### Context-free language
- 특징
  - 재귀적 구조를 허용 -> 스택을 하나 가지고 있는 오토마타다, 라고 보시면 됨
  - e.g. 올바른 괄호, (a^n b^n), a와 b가 나온 회수가 동일

푸시 다운 오토마타 == 파서

### 파싱 (신택스 애널라이시스)
프로그램의 구문(구조)를 결정하는 작업

파서를 돌리면 파스 트리 (혹은 신택스 트리)가 나옴

regex를 이용해서, 어디까지가 원하는 토큰인지 정의할 수 있음 (토큰은 정규언어다)

구문구조의 정의
  - 컨텍스트 프리 문법으로 규칙을 정함
  - 표현법: BNF
  - 단위: production
  - nonterminals and terminals (toknes)

### Context-free grammar
G = (N,T,P,S)
- N = 넌터미널 심볼 집합
- T = 터미널 심볼 집합
- P = 구문 규칙의 집합
  - A -> alpha, A (is element of) N, alpha (is element of) (N union T)*
- S = 시작 넌터미널 심볼 (element of) N

e.g.
- N: A, B, C, 
- T: a, b, c,
- T*: x, y, z
- (N union T)*: alpha, beta, gamma,

e.g. grammar
- S -> aS | ε
- N = {S}
- T = {a}
- P = {S -> aS, S -> ε}
- S가 시작심볼

#### Derivations
유도란
- 대치
- 문법에 맞는 입력의 결정 과정
- 넌터미널 심볼, 구문 구조의 이름을 production(문법 규칙)의 우변으로 대치
- => 로 표시

- e.g. S -> aS | ε
  - S => aS => aaS => aaaS => aaa

#### 문법이 정의하는 언어
문법으로 시작 심볼에서 유도해 얻는 모든 문자열의 집합

##### e.g.
- L(G) = { s | S => * s, s (is element of) T* }

- 여는 괄호의 수와 닫는 괄호의 수가 같은 문자열
  - Grammar 1: E -> ( E ) | a
    - N = {E}
    - T {(, ), a}
    - L(Grammar 1) = {a, (a), ((a)), ...}
    - ((a))의 유도: E => (E) => ((E)) => ((a))
  - Grammar 2: E -> ( E ) | ε
    - L(Grammar 2): 여는 괄호와 닫는 괄호만 있는, 올바른 괄호들의 스트링
  - Grammar 3: E -> E+a | a
    - L(Grammar 3): a(+a)*
    - a+a+a의 유도: E => E+a => E+a+a => a+a+a
  - 반복이 되는 구조는 넌터미널의 오른쪽에 계속 생겨나는 문법
  - 중첩 구조는 e.g. E => (E) | a 따위. 얘는 정규표현으론 못 하지
  - Grammar 4: S -> aSb | ε
    - e.g. aaaaabbbbb
    - L(Grammar 4) = (a^n b^n)
  - 생성 규칙은 한 줄 화살표, 유도는 두 줄 화살표로 표기하는걸 지켜써줘
  - Grammar 5: S -> aSa | bSb | ε
    - L(Grammar 5): { x (concat) reversed x where x is (a|b)* }
    - L(Grammar 5): { ww^R | w is (a|b)* }

### 정규언어는 컨텍스트프리언어의 부분집합이다
#### 배상원교수님 계산이론 Oct 19
##### Thm 3.3.1 Any regular language is a context-free language
```
PROOF   Let L be any regular language. Then exists a DFA M = (Q, Sigma, 
delta, g, F) s.t. L = L(M).
GOAL    Construct a CFG G = (V, Sigma, R, S) s.t. L = L(G)
M accepts w if and only if S ==*=> w
w = w1w2..wn ∈ Sigma*
w_i를 읽은 후, M의 state가 A ∈ Q 라면, S =>* w1w2..wiA가 되도록 G를 
구성해보자. 
(q--w1-> A1 --s2-> A2 --w3-> ... --wn-> An): M
S => w1A1 => w1w2A2 => ... => w1w2..wnAn
G = (V, Sigma, R, S)  V=Q   S=q   R={A->aB | delta(A,a)=B, A and B ∈ V, 
a ∈ Sigma} ∪ {A->epsilon | A }

e.g. L = { w ∈ (0,1)* | 101 is a substring of w }
    0 1         TABLE  condition
    ─ ─                ─
S | S A         from | to
A | B A
B | S C
C | C C
G = (V, Sigma, R, S)
R: S -> 0S | 1A
   A -> 0B | 1A
   B -> 0S | 1C
   C -> 0C | 1C | epsilon
```

#### 정규 언어
- 선택
  - A -> a | b
  - L: (a | b)
- 연결
  - A -> BC, B -> b | d, C -> c | ε
  - L: (b|d)(c|ε)s
- 반복
  - A -> aA | ε
  - L: a*

- (a|b)* abb (a|b)*
  - S -> AabbA, A -> aA|bA|ε

### 좌측 또는 우칙 재귀구조
- 좌측 재귀
  - 일반형: A -> Aalpha | beta ( = beta alpha*)
  - 예:
- 우측 재귀

#### 문맥 무관 언어
- 나열, 선택, 반복, 중첩
- 중첩
  - S -> aSb
- 나열: 문맥 무관 언어가 연결될 수도 있다
  - S -> AB
  - A, B는 각각 문맥 무관 문법의 시작 심볼

##### e.g. 
- S -> s; S | s
  - s; s; s; s
- 짝 맞는 중첩 괄호 문자열 e.g. (()())()
  - S -> (S)S | ε
  - S => (S)S => ((S)S)S => (()S)S => (()(S)S)S => (()()S)S => (()())S => (()())(S)S => (()())()S => (()())()
  - 교수님의 문법 S -> aSbS | bSaS | ε

- a와 b의 개수가 같은 모든 문자열
  - 올바론 괄호와 같음, 다만 a와 b중 아무거나.. a나 b 어느게 먼저 나올지 알지 못함
  - S -> A | B, A -> aAbA | ε, B -> bBaS | ε

### 사칙연산 수식 언어
수식에 들어가는 문법이 굉장히 복잡하고 코드에서 차지하는 비율도 큽니다.

중첩, 재귀적인 구조이므로 정규 문법으로 표현이 불가능하져

근데, 1도, 2, 3, ..., 44, ...도 터미널이면, 터미널이 무한개일까? 그건 아님. 왜냐면 먼저 토큰으로 나누기 때문. 44는 하나의 토큰.

#### 이진연산자 수식을 표현하는 문법
- G = (N, T, P, E)
- N = {E, O}, 
- T = {n, +, -, *, (, )}, 
- E -> E O E | ( E ) | n  // n은 숫자
- O -> + | - | *

##### 유도 e.g. 
```
(34-3)*42
E => E O E => ( E ) O E => ( E O E ) O E => ( n O E ) O E => ( n - E ) O E 
=> (n - n) O E => (n - n) * E => (n - n) * n
```

```
3 + 5 * (2 - 4)
E => E O E => E O E O E => E O E O (E) => E O E O (E O E) => E O E O (E O 4) 
=> E O E O (E - n) => E O E O (n - n) => E O E * (n - n) => E O n * (n - n) 
=> E + n * (n - n) => n + n * (n - n) 
```

이은정 교수님 까이지만, 그래도 자기 분야라 그런지 김차영 교수님보단 잘하시는데

##### 표준적인 유도 방법
유도 과정에서 여러  개의 넌터미널이 있는 경우 어느 것을 먼저 유도할 것인가?

좌측유도: inorder 좌파스와 대응함

##### 파스 트리
유도의 과정을 트리로 표현한 것

터미널 노드를 왼쪽에서 오른쪽으로 차례로 연결하면 유도된 문장(언어인 문자열)이 된다.

parse tree for (34-3)*42
```
          E
     |    || 
    E     O E
 |  |  |  | |
(   E   ) * n
   |||
  E O E
  | | |
  n - n
```

parse tree for 3+5*(2-4)
```
      E
   |  |    |
  E   O     E
 |||  |  |  |  |
E O E * (   E   )
| | |      |||
n + n     E O E
          | | |
          n - n
```

### 파스
파스란 유도 과정에서 적용된 생성규칙의 순서를 나열한 것이다. 생성규칙에 id를 매긴다.

좌파스: 좌측 유도에서 적용된 순서에 따른 파스. 우파스: 우측 유도에서 적용된 순서에 따른 파스. 

좌파스: 파스트리에서 적용된 생성규칙의 번호를 **선방문**으로 나열한 것. 트리와 일대일대응함. **시험 문제**

아 이거 inorder네

#### 좌파스 구하기 연습
수식 문법이 
1. E -> E O E
2. E -> ( E )
3. E -> a
4. O -> +
5. O -> -

일 때

```
a + ( a + a )

  E
  1
E O     E
3 4     2
a + (   E  )
        1
      E O E
      3 4 3
      a + a
```

```
( a + a ) - ( ( a - a ) + a )

          E
          1
    E     O             E
    2     5             2
(   E   ) - (           E   )
    1                   1
  E O E           E     O E
  3 4 3           2     4 3
  a + a       (   E   ) + a
                  1
                E O E
                3 5 3
                a - a
```

규칙
1. S -> (S)S
2. S -> ε

일 때

```
올바른 괄호

(()(()()))

S
1
(S            )S
 1             2
 (S)S           
  2 1
    (S      )S
     1       2
     (S)S 
      2 1
        (S)S
         2 2
            

(( )(( )( ) ) )

1 1 2 1 1 2 1 2 2 2 2         
```
#### 좌파스 to 파스 트리
```
1 3 4 1 2 1 3 5 3 4 3

  E
  1
E O           E
3 4           1
a +     E     O E
        2     4 3 
    (   E   ) + a
        1
      E O E
      3 5 3
      a - a
```

#### 문장구하기
```
1 2 1 3 4 3 4 2 1 3 5 2 1 3 4 3

          E
          1
    E     O     E
    2     4     2
(   E   ) + (   E           )
    1           1
  E O E       E O     E
  3 4 3       3 5     2
  a + a       a - (   E   )
                      1
                    E O E
                    3 4 3
                    a + a

( a + a ) + ( a - ( a + a ) )
```

중간고사 시험 11/8 정규수업시간에 시험만 보고 해산하는걸로 어때요?

> Oct 25 w7

### Ambiguous Grammars
- 같은 입력 문장에 대해 파스 트리가 두 개 이상 있는 문법
  - 좌측 유도가 두 개 이상 있는 문장이 존재
- 주어진 문법이 모호한가 판별하는 방법은, 파스 트리가 두 개 있는 문장을 찾으면 된다.

#### e.g.
L: a와 b의 개수가 같은 모든 문자열 집합

G: S -> aSbS | bSaS | epsilon

이 문법이 모호함을 보이시오.

### 모호한 문법의 처리
- 처리 방법
  - 모호함 제거 규칙(disambiguating rules)을 명시
    - 어떤 파스 트리가 맞는지 규칙으로 명시한다
  - 모호함이 없도록 문법을 수정한다
- 모호함 제거를 위한 일반적인 고려사항
  - precedence
  - associativity: left or right
- 문법 수정: 언어와 구문
  - 받아들이는 언어가 동일하지만 구문 구조는 다른 문법

#### 모호함이 없도록 문법을 수정
- 우선순위 부여 e.g. * > +, -
  - E -> E O E | T
  - O -> + | -
  - T -> T * T | F
  - F -> ( E ) | n
  - ?
  - Tip
    - 우선순위가 높은 생성규칙에 새로운 심볼을 도입한다.
    - F: ()나 숫자만 가능한 심볼
    - T: * 수식만 가능한 심볼, F 포함
    - E: +/-가 가능하고 T,F 포함
- 결합 순서 e.g. 좌결합
  - E -> E O E | T
  - O -> + | -
  - T -> T * T | F
  - F -> ( E ) | n
  - Tip: 결합규칙에 의해 먼저 유도되어야 하는 생성규칙에 새로운 심볼을 도입한다
    - + 나 - 왼쪽에는 +나 -가 올 수 있고, 오른쪽에는 올 수 없다
    - * 왼쪽에는 *가 올 수 있고, 오른쪽에는 올 수 없다

#### e.g. 
34-3*42
```
tree
```
34-3-42
```
tree
```
2+3*(5-1)의 좌파스를 구하시오.

생성규칙
1. E -> E O T
2. E -> T
3. O -> + 
4. O -> -
5. T -> T * F
6. T -> F
7. F -> ( E )
8. F -> n

```
좌파스
```

#### 복잡한 수식 문법
```
S -> id = B
B -> L | B && L | B || L
L -> E | L < E | L == E | L > E
E -> E + T | E - T | T
T -> T * F | T / F | F
F -> n | id | (S) | id (P)
P -> epsilon | p'
P' -> P, B | B
```

#### e.g. 다음 문장에 대한 파스 트리를 구하시오 b = 3+7*f(c,3d)

#### 수식 문법에 연산자 추가하기
위 문법에 아래의 연산자들을 추가하여 문법을 만드시오.
- <= 는 < 와 같은 우선순위를 가진다
- && 와 || 는 < 보다 낮은 우선순위를 가진다
- +, --(후증감연산) 는 * 보다 높은 우선순위를 가진다

e.g. * < ** < () 을 우결합으로 만들기

 T -> T * J | T / J | J
 
 J -> F ** J | F

 > 우결합이니, 우측 재귀로 만듦 ( ** J)

#### 모호한 문법을 변환하기 (2) e.g. 
- S -> aSbS | bSaS | epsilon
  - aababb에 대해 가능한 두가지 파스 트리를 보이시오.
  - a와 b가 짝을 짓는 방법이 두 가지다
  - a ab ab b 와 a a ba b b
  - S -> A | B, A -> aAbS | abS, B -> bBaS | baS
    - 모호하지 않은 문법으로 변환
    - 결합 규칙: 먼저 나온 것 끼리 짝을 지음
    - epsilon을 A와 B에 안 박은 이유는, 둘 다 박으면, epsilon에 대한 트리가 두 개 나오기 때문이다

> 문법을 만드는 건 어려운 거에요

#### 모호한 문업을 변환하기 (3) e.g.
S -> if C then S else S | if C then S | a, C -> b

다음 문장에 대해 두 개의 파스트리를 보이시오. if b then if b then a else a. 각 파스 트리에 대한 좌파스는?

### The Dangling Else Problem
#### Solution 1: 모호성 제거 규칙을 적용한다
e.g.
```
if (x != 0)
  if (y == 1/x) ok = TRUE;
    else x = 1/x;
```
모호성 제거 규칙: else 부분고 가장 가까운 if를 짝짓는다

#### Solution 2: 문법을 수정한다
- S -> M | U
- M -> if C M ELSE M | a
- U -> if C S | if C M else U
- C -> b
- (S: statement, M: matched if statement, U: unmatched if statement)

복잡해짐!!

#### If statement 파스 트리 구하기
규칙
 1. S -> M
 2. S -> U
 3. M -> if C M ELSE M
 4. M -> a
 5. U -> if C S
 6. U -> if C M else U
 7. C -> b

if b if b a else if b a

이거 안되는데?

### Abstract Syntax Tree
파스 트리는, 좌에서 우로 터미널 노드를 나열한게 입력 문자열이고, 내부 노드는 유도 과정을 보여주고, 실제 파싱에 필요한 것보다 훨씬 많은 정보를 표현한다.

파스 트리를 추상 구문 트리로 표현하면, 구문 구조에 필요한 노드만 표시한다.

#### e.g.
```
  E
 |||        +
E O E  =>  | | 
| | |      3 4
n + n
```

```
          E
    E     O E            + 
(   E   ) * n    =>    -   4
  E O E              34 3
  n - n
```

### ANTLR

#### 제안서
파스
11/8(수)에 제출
