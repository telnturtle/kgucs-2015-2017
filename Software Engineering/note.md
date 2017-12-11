# Software Engineering
- 채승기

> Sep 8 w2

1주차는 옆반꺼들었고 2주차부터 이 클래스를 듣기 시작함

### 시스템 개발
- 계획
  - 필요성
  - 기능
  - 버짓
  - 계획서
- 요구사항, 분석, 설계, 개발, 테스트
  - 수행계획서
- 유지보수
  * 유지보수계획서

> 이 수업에서 배우는게 이 안에 다 있어요

* Project Management
  * 수행
* Prouct Management
  * 계획 + 수행 + 유지보수

> 이 프로세스는 크게는 안 바껴요

### 소프트웨어 발전과정
- 1,2,3,4세대

> 옛날에는 어땠냐면   사용자가 이기능 추가해주세요   기다리세요. 하드웨어 사주세요. 기타이유    근데 지금은 쿠팡에서 물건주문이안되서 클레임했는데   기다리세요 할수있습니까?

- 옛날
  - IT관리자 -> X -> 경영
- 지금 
  - 경엉 -> 실시간 -> IT 관리자
  - 레고블럭처럼, 이것 빼고 저것 넣자
  - 왜 변화했나?
```
이천년대에 미국에서 회계부정이 일어나서, 샤베인-옥슬리법이 생겼어요
회계부정이 일어나면 경영자가 감옥을가요
그래서 IT관리자의 SW가 변화무쌍해질 필요가있다
??
```
내가 개발잔데 사람이라서 falut가 있다 줄이자

옛날에는 말로하던걸 개발프로세스를 체계화해서 단계별로 만든게 SE

### SW 위기
HW가 급속도로 발전, 범용컴퓨터가 광범위하게 보급됨

새로운 시장 SW 수요를 감당못함

SW의 유지보수는 어렵다

무어의 법칙: 마이크로칩에 저장할 수 있는 데이터량/속도가 18개월마다 x2

황의 법칙

SW 인건비 상승

### SW 특성
- 무형
- 진화
  - 사용자를 편하게하려고
- 비소멸성
- Developed not manufactured
  - 사람마다 만드는게 다 달라요
    - UI, 색깔
    - 개발자마다 수준차
  - 백색가전은 완성품은 다똑같잖아 불량이없으면

내가 확통을 왜배우나했는데 대학원가서 쓰더라고 퍼포먼스 증명하는데

### 생산의 4M
- Man
- Material
- Machine
- Method

### IT 거버넌스
아니라고들 하지만, 생산과 비슷하다.

not 새로운기술, 사회현상 캐치, 사회현상에따라 시스템이 바뀜

### 클라우드
- 유휴장비
  - 입시 접수
  - H/W 사지마, 있는거 써

### 빅데이터
- 소셜의 텍스트 모아

> 근데 이 교수님 경영이야기랑 개발이야기를 비벼드신다

### SE
- Objective
  - S/W 위기 해결
  - High S/W quality
  - Productivity
  - 비용 절감
- Definition
  - 경제성
  - 체계적인 접근 방법
  - 문서
  - **표준화된 절차** **시험 문제**
- 도구, 방법론, 프로세스, 품질
  - 누구나 방법론을 따라가면 아웃풋이 나오게한다
  - 방법론의 각 단계마다 산출물
- 도구: CASE

### 사용자 로그인
- Concept
  - Authentication: ID / PW
  - Authorization: Access permission
  - Accounting
    - 결제말하는듯

Concept에서부터 개발합시다

### OS
사람 -> OS -> H/W

### SE Process
- Definition phase
  - What
  - Info, performance, function, interface, 제약조건
  - Spec 결정
- Development phase
  - How
  - 데이터 구조화, func, design, dev, test
- Support phase
  - Change
  - Correct fault, 사용환경 따라가기, 요구변경에따른 변화
  - 기존 성질은 바꾸지 않는 범위에서 변경
  - 종류
    - 수정, 적응, 강화, 예방
> 종류 외우세요 **시험 문제**

유지보수는 개발비의 0.1 이더라

### Software Development Life Cycle: SDLC
- Definition
  - 정의, 개발, 유지보수, 폐기과정을 하나의 연속된 주기로 취급

교수님, 했던 말 또 하시는거, 자비좀

### Models
- Waterfall
  - 거꾸로 못가는 순차적
  - 실제론 못씀
  - 초기불확실성
  - 많이 써봐서 사례는 충분
  - 테스트까지 끝나야 고객에게 넘김
- Prototyping
  - 의사소통
  - 프로토타입도 일이긴 함
  - 프로토타입 폐기는 비경제적
- 반복적 개발
  - Spiral
    - 기획  분석  설계  구축  운용    x n
  - 단계적 결과물은 요구사항의 일부만을 만족시킨다
  - 블랙박스 화이트박스
  - Incremental
    - 분석단계에서
    - ID/PW를 만듦
    - 카드키를 해달래서 만듦
    - 지문도 만듦
  - Evolutionary
    - 로그인을 분석 -> 테스트 까지함
    - 상품 분 -> T
    - 장바구니 분 -> T
    - 결제 분 -> T
  - 이전 설계내용과 조율한다
- Rapid Application Development
  - 애자일
  - 개발자와 사용자가 리얼 같이있음?

### Agile
관공서랑하면 하기 어렵습니다

- 개인과 상호작용 > 프로세스와 도구
- 동작하는 S/W > 문서
- 사용자와 협력 > 게약에 대한 협상
- 변화에 대흥 > 계획에 따름

### Agile 개발 방법론
### Agile Core Value
1. Communication
2. Simplicity
3. Courage
  !. Feedback
4. Respect

### Waterfall vs Agile
- Fixed: Scope, Resources and Time
- Estimated: Resources and Time, Scope

> 일반적으로 Agile을 할 기회는 적어요
> Waterfall-like로 Iteration을 하던 할거에요

품질에서 baseline 엄청 중요함

고객에게 산출물 줬는데 14일 이내 답 안주면 자동 승인하는 법 있음

> 다음시간엔 출석을 해야지 9시에

### TP
```
웹 아직 안했는데
이 참에 공부해라
HTML/css
js
Java
Oracle(p.o.)

컴과는 왠만해선 Java
Python 할거면 팀 통일 파이썬
디자인을 이쁘게 할 필욘 없지만
폰트와 폼은 통일
```

> Sep 15 w3

###  분석
- 구조적 방법론
  - 프로세스 중심
  - 프로세스는 바뀜
- 정보공학 방법론
  - 데이타 중심
  - 데이타는 안 바뀜

논리 schema를 정한 다음 물리 schema를 정하는 거에요

Repositroy와 DB는 File입니다

### DB
created date + modified date + Inserted/Deleted/Updated

OO-DBSM 다 망함. 쓰는건 R-DMBS

### 소프트웨어 개발방법론
- 절차, 산출물
- 모듈화 -> 재사용
- 가시호 e.g. 분석 - 분석.2.3 - 분석.2.3.3 - 누가|언제|...
- 의사소통을 위한 표준화된 용어
- 구조적 방법론 -> 정보공학 방법론 -> 객체지향 방법론 -> CBD(Component)|Agile

### 정보전략계획(ISP)
전문가-> 조사 -> paper

- 환경분석 업무분석 추진목표 이행계획 예산

### Encapsulation
private: public

### UML: 모델링 랭귀지
- view: Use case, logical, process, component and Deploy view

> 여러분 피드백 받고 싶으면 문서 숙제 사전에 넘기세요

### Assignments
1. Java Servlet 웹 프로그래밍 환경설정 (Apache JDK) 사용자 정보입력 해서 파일 저장하기
   - Tomcat
   - code만 sgchai@hanmail.net 로
   - 변수 선언 잘 하고 코멘트 잘 다세요
2. UML Use case diagram 
   - Use case diagram의 의미
   - Notation of use case diagram
   - Use case, actor, relationship 등
   - 예제로 너가 원하는 개념으로 하나 만들어와 e.g. 도서관 학사관리 이런거?
   - 툴 쓰세요
   - LMS로

> Sep 22 week 4 w4

컴포넌트?

객체지향 vs CDB (component based develop)

MVC (모델뷰컨트롤러
- 패턴
- best practice
- ontology

통신할 때 클라->서버가 안받는다->타임아웃->을 컨트롤러가 함

타임아웃을 60초로해라 리트라이는 3번으로하자 클라이언트 모듈에 넣어도 되는데 따로 배면 관리 편함. control.ini에 있겠죠. control.java에 있으면, 컴파일을 다시 해야겠죠. 텀프에 넣으세요.


### 컴포넌트 소트프웨어
EJD는 비쌌는데 많이 썼어요. CORBA는 쓸일 억고. COM+도 잘안쓰죠. 덩어리 덩어리들을 만들어준거. 예를들어 통신을 하고싶다 그걸 껍데기를 만들어줘요. 쉽게 맨땅에 헤딩안하게. 분산컴포넌트, ㅇㅇ, ㅇㅇ, 뭐 이런 게 있다

### CBD = CD(Component development) + CBSD(component based softward development)
소프트웨어 재사용크기 (내림차순): CBD(비즈니즈측면 접근), 객체지향(sw 개발 패러다임의 변화), 정보공학(방법론 중심 개발 접근), 구조적방법

### 유즈케이스
시스템 덩어리의 생김새를 직관적으로 보여주는 뷰

유즈케이스 개발얘기

학생이-> 수강신청하네; 교수가 -> 학사관리하네; 로 시작했는데. 잘들으세요. 기술을 써서 의미있는걸 하는게 중요한거지 얽매일필요 없다 노테이션은 노테이션일 뿐이다. 익스텐드 인클루드... 의미가 중요한거다

1. 쓰임새주도 (유즈 케이스 드리븐): UML
1. 아키텍처 중심: 재사용
1. 반복과 점진: 스파이럴 기억나죠

- 객체지향과 비교
  - 블랙박스, 표준 인터페이스와 비즈니스

클라이언트 서버 할일을 정해라. send 이거하면 receive 해서 이걸 해. 근데 receive에서 B가 안나와.. 등등 히스토리

DB의 RBAC가 뭐에요. MAC은 사람에 퍼미션을 주는거에요. DAC는 객체에게. RBAC는 Role based access control. 유닉스 755가 뭐에요. 파일이나 디렉토리에 주잖아요. rwx <- 이게 DAC 방식. chmod "/data". 설계할 때, 우리가 접근 권한을 사람에 줄래? 오브젝트에 줄래? 정하기. RBAC는 뭐야. 총장님의 권한을 A,B,C에 엑세스, 홍보의 권한은 A,C에 엑세스, ..., 등을 정해두고 사람이 나가고 들어오면 롤을 부여. 롤을 부여 -> **provisioning**. 이런것 컴포넌트로 팔아먹는게 CBD고, 우리가 걍 쓰는게 OO. 컴포넌트ㄹㄹㅡ 알아야 클라우드 할 때 잘해. 클라우드는 두 가진데 컴포넌트거나 객체지향-맨땅에 헤딩임.

### CBD 성공요인
표준이 있어요; 이런일을 할 때 -> 이런걸 분석해서 -> 이런 비즈니스를 사와.

### CBD 수행과 관리방안
- 컴포넌트 실행환경 표준 (닷넷), 개발표준 (UML), 프로세스표준
- 아키텍처: 서브시스템과 인터페이스

start-end, start-destination, 사용자-데이타

사용자-웹서버-데이타. 사용자-서버-미들웨어-데이터

쓰리티어: 웹서버-미들웨어-데이터

> 피피티를 책처럼 쓰셔서 중요한거 필기는 선별이 필요함.

### CBD 실무적용
- 조직의 성숙도진단
  - 성숙도: 정성적 효과, 정럄적 효과->숫자, 얘기 성숙도 높음(?)
  - 성숙도를 따져서, 우리가 자체로 할건지, 솔루션 사올건지, 의사결정을 한다
- 설계, 스크린 플로우 다이어그램: UI 흐름 그려서, 디스커션, UI 화면 프로토타이핑
- 구현,, 배치(deployment) 계획: e.g. 파이어월 -> web1 + web2 -> was1 + was2 -> db1 + db2. web1은 was2에도 붙어야 하고, vice versa. 는 기본이고, 나머지 서버 배치 어떻게할지. 파이어월은 (ID, port)차단이니까 맨 앞 단. IDS: 디텍션이니 was에.

### CBD 프로젝트의 고려사항
- 반복횟수 정하기
- UML의 가독성향상
  - 문서작성할 때, data dictionary: 용어 정리 e.g. 사용자:웹사용자를이름, 웹/고객. -> 사료, 온톨로지 구축, 메타데이터 설계

### 모델드리븐 아키텍처 (MDA: Model driven architecture)
- **시험문제** 자세하게 읽어보자
- 어떤 일정한 수준까지는, 플랫폼-인디펜던트하게 만들자. PIM이 하나 이상의 PSM로 별환.
  - PIM: platform-independent model
  - PSML playform specific model
  - PIM을 재사용하는것. 재사용하려고 여러가지 한다.
  - PIM-PSM

### ASSIGNMENTS
```
지금 낸 소스 가지고 해~
due 9/28(목) 23:59
4 files: user.html   user.java   ~~userview~~result.html    user.dat
in user.java
for line in file
if <!--datainput-->
then 로직
else print.write(line)

or

file open user.dat
transaction -> message
err -> errmsg
for line in file:
    print line if not <!-> else p.w(msg);

in result.html
<html>
...
<!--dataprint-->

- 유저 정보를 보여주세요
- 이거 내가 만드는거?

숙제 도움 링크들

Do I need to close() both FileReader and BufferedReader?
https://stackoverflow.com/questions/1388602/do-i-need-to-close-both-filereader-and-bufferedreader

JAVA 파일 입출력(2) - FileReader & FileWriter
http://twinw.tistory.com/94

자바 String 클래스 - contains, equals
http://all-record.tistory.com/89

이클립스에 JSP 파일중 빨간색 밑줄이 생기는 현상 문의 드립니다
https://okky.kr/article/177163
http://since83com.tistory.com/entry/%EC%97%90%EB%9F%AC-Multiple-annotations-found-at-this-line

[JSP] 파일 읽기
http://kudolove.tistory.com/1044

[100628] html에서 jsp요청 
https://m.blog.naver.com/PostView.nhn?blogId=vincentkng&logNo=10089071565&proxyReferer=https%3A%2F%2Fwww.google.co.kr%2F

예제로 배우는 JSP
http://cloudstudying.kr/courses/11

자바(Java) 문자열 구분을 위한 Split 함수 사용하는 방법
http://mainia.tistory.com/3950

HTML 강좌 | 표(Table) 만들기
https://www.cmsfactory.net/node/10300
```

### 텀프 시스템 개발 공통사항
e.g. 음악 사이트 -> 카테고리: 어린이, 7080, 최신곡 -> 곡 들... 구조. 

클라이언트, datasend.module -> 서버에서 data receive 모듈이 파일 받아서 -> 카테고리에 꽂아야지

게시판 기능 구현: replay 기능. 트리 구조. 답글이 parent를 알아야 한다. sibling...을 알아야 구조를 만들어주지 (?)

문서 카테고리: not fixed, 관리자가 카테고리 가능해야. 카테고리는 계청적 가능해야. 구조를 만들어서 DB에 넣어놓으면 읽어서 화면에 뿌리는거 가능해야. 카테고리는 1-2-3 depth 까지 구현

항목의 맛보기 / 상세보기: 메타데이터 (data of data) e.g. 논문: 제목, author, 학회, 년도. 영화: 제목, 주연, 배포, 연도, 장르. 해보세요 ㅎㅎ

사용자 추천: (개인화) - (fixed). "채승기 어린이 잘 왔어요. 이번 터닝메카드 봤니?"

회의록: 얘기한거 주절주절 적고, 결론 내고. 산출물~~, 문서 폼들~~ 적어주자

제안요청서: 폼, 폼, 폼, 적당히 쓰자~~

제안요청서 내용: 요약한거 풀기~

기능 요구사항 중요: 그럼 2가지 뷰가 생기고

요구사항 목록표: (hwp파일의 표를 봐라) 하나씩 만드는거야 / 고객의 요구사항. 이 있고. 개발하는 사람들이.

테스트 이후거는 안해도 됨

너무 부담갖지 말고. 소공 절차가 있고 만드는 회의록 요청서. 구조를 알아가고. 개발은 돌아가면 됨(?)

절차 따라가는 마음으로 하자. 산출물 흐름, 행위 따라해보자, 이게 목표임

우리 수준은 이만큼이니까 이만큼할게요 -> 근데 쿠사리는 하신다고

UML: 유즈 케이스, 시퀀스 다이어그램

여러가지, 뭐가 있나, 사이트 돌아다녀 보세요

맛보기 텍스트로만 뿌리던가, 시간 없으면.

기본적으로 할건 다 훑어야 함.

잘할라고 하기 보다 개념습득

그림 캡션은 밑, 표는 위에 다는거야. 한글쓰세요

표에서 그랜드 토탈이 위에 있는거야. 서브 토탈은 밑에.

일주일 단위로, 조장들이, 되든 안 되든 교수한테 보내.

> Sep 29 w5

시험 못봐도 프로그램 과제 안하면 안 돼

### UML
- 표준, 이해 쉽다, 설계 결과를 타인과 효과적으로 공유
- The 4+1 view model: Use case + design view, implementation view, process view, depolyment view
- 클래스뷰 그리기: 이름만 -> + attributes, methods -> + spec

### Usecase-Driven
- Requirement documentation <-> usecase model <-> design model <-> implementation model <-> test model
  - Requirement doc. for end user
- 구조: 클래스 다이어그램, 객체 다이어그램
- 행위: 유즈케이스 다이어그램, 상호작용, 액티비티, 스테이트 차트 다이어그램
- 구현: 컴포넌트 다이어그램, 배치 다이어그램
```
RFP (request for proposal): proposal -> 요구사항분석, 에서 시작한다. frp를 잘 쓸 수 있냐로 잘하냐 못하냐가 결정. 정제된 언어로 쓰기 어려우니 자연어로 줄줄 적어보고 그러고나서 정리해. 보고서엔 템플릿이 있어요. 제목 \n 오른쪽정렬 학번이름\n 1. 개요 1. what 1. how 1. 결론
1. 결론
  1. 개요
    가. use case 정의
    가. sue case 특징/목적
  1. what
    가. use case 구성요소 (actor, relation...)
  1. How
    (그림) (설명)
  1. 결론
    향후계획 발전방향 유즈케이스가 어떤 분야에서 쓰는지

법정서식기호에요
```

> sgchai@naver.com 한글로 템플릿 맞춰서 숙제 줘요

### UML Diagram
- use case diagram: 사용사례와 사용자의 관계를 표현하는 다이어그램
- class diagram: 클래스의 관계를 표현하는 다이어그램
- state diagram: 객체의 생명주기를 나타내며, 이벤트에 의해 변화하는 객체의 상태를 표현하는 다이어그램
- activity diagram: 객체에 작용하는 활동의 흐름을 표현하는 다이어그램
- sequence diagram: 객체들간의 상호작용을 시간적 순서를 강조하여 표현하는 다이어그램
- collaboration diagram: 객체들간의 상호작용을 공간적 협조 체계를 강조하여 표현하는 다이어그램
- cmoponent diagram: 컴포넌트들의 관계를 표현하는 다이어그램
- deployment diagram: 시스템을 구성하는 물리적 객체나 장치들의 관계를 표현하는 다이어그램

> 전산하는 사람들은 키워드를 잘 알아야해 모르면 책이 안읽어져

### Use Case Diagram
- 시스템 요구사항을, actor와 use case의 관계로 표현
- 액터는 사람과 디바이스, 다른 외부시스템 가능
- 사용자와 개발자, 시스템 설계자와의 의사소통 도구
- 랙탱글 바운더리 안이 시스템
- 사용자 입장의 기능 요구사항을 나타낸다

Gartner 보고서 기술 트렌드

IoE: IoT + 감성 (근데 감성이 딥러닝임...??)

### Notation of Use Cas Diagram
- Use case: name이 안에 있는 타원
- actor: stick man 또는 stereotype이 "actor"인 클래스의 사각형

> 도메인 단어들 stereotype: 유형, 표준

### relationship
- association -> dependency, association의 하위 개념으로 유즈케이스 구조화에서 이용한다
- dependency의 <<include>>: 유즈 케이스를 구조화할 때 가장 일반적인 스테레오타입
  - 한 유즈케이스가, 반드시 다른 유즈케이스를 사용한다는 의미
  - base use case vs included use case <- 는, 재사용 관점에서 아주 중요ㅎㅁㅏ
  - 베이스에서 무조건 포함을 갔다와야해. like subprocess (확장은, 베이스에서 안불러주면 실행 안함... 그래서 화살표가 베이스를 바라봄)
  - 만약 인클루드를 재사용하지 않으면 베이스에 포함하는게 효율적임 -> e.g. 교보문고에선 도서 조회를 도서주문을 안하고도 할수있잖아. 인클루드는, 베이스 말고 다른놈들이 갖다 써야해 (도서 주문 -> include 도서 조회)
  - **시험문제** -> 도서 주문하는데 반드시 도서 조회해야해 -> include
  - > 액터랑 릴레이션이 없는 유즈케이스는 없어요 (아님 다른 유즈케이스와라도 있어야)
  - 타임오더: 도서 조회와 도서 주문, 결제 (오름차순). 그럼 다이어그램 그릴 때 액터 -> 도서 조회, 도서 주문, 결제 이 순서로 그리라는 의미. 도서 주문 -> << include >> 도서 조회, << include >> 결제
- extend: optional
  - base use case가 특정 시점에 extended use case를 실행할 수도 있음
  - actor -> 도서 조회, 내 장바구니 -> << extend >> 도서 조회. 내 장바구니는 도서 조회 하면서 원하는 도서를 내 장바구니에 넣을 수도 있음. 내 장바구니 시나리오가 없어도 도서조회는 단독적으로 시나리오 수행 가능 **시험문제**
- 제너럴라이제이션: 상속. 정교수 -> 교수
- 커뮤니케이츠 릴레이션십: 액터 -> 유즈 케이스
- 익스텐즈 릴레이션십: 익스텐디드 유즈 케이스의 모든 행위가 베이스의 행위의 일부로 포함됨
- 유지즈 릴레이션십: 상속과 유사하며, 베이스의 모든 행위는 유즈드의 모든 행위를 상속한단 뜻임 -> 베이스들의 공통되는 부분을, 전부 밖으로 빼야 함

### Example of Use Case
```
actor 사용자
사용자 -- (게시물리스트보기)
사용자 -- (게시물수정)
사용자 -- (게시물등록)
사용자 -- (게시물내용보기)
(첨부파일삭제).> (게시물수정): extend
(게시물수정).> (로그인): include
(게시물등록).> (로그인): include
(첨부파일추가).> (게시물등록): extend
(첨부파일다운).> (게시물내용보기): extend
```

### 시퀀스다이어그램
```
timeorder. 서비스마다 세로 시간선
분기에선 세로 직사각형으로. 하다보면 커지잖아요. 그걸 ㄸ내요. 로그인은 여기까지
노테이션. 리퀘 -> red: ~ 리스폰스 -> res ~
e.g. 사용자정보 (분석단계의) 객체에서, attr와 method가 있잖아요.
근데 리포와 파일에는 메소드가 없잖아요. 그게 현실과 다름. 그럼 속성값과, 메소드객체를 분리해야...
시퀀스다이어그램은 하기 간단하지만, 요구사항을 풍성하게 잘 분석해야 잘 됨.
```

### 개인과제
.jsp 말고 .java로 보냈으면 좋겠다

#### 다른사람소스 열어서 코드리뷰
`<!--` 를 만나면 이메일을 찍고 아니면 html line을 찍게했는데, 
`String userInfoOfHtml = "<!-- userinfo -->";` 로 하구쓰렴
버퍼드리더는, 화경 변수 등은 상단에 선언
익셉션 나면 그거 표시좀... 일반적으로 사용자들이 잘 내는 에러는, 화면에 뿌려줘야지
final 문은 있어야지. 파일 닫아야죠
// member.txt를 읽어서 이메일 비밀번호 확인 -> // member.txt 구조 ID & PW 각 8자리
null 체크해야죵
공개 코드리뷰한 코드 주인한테 와인 줌 ㅋ

### ASSIGNMENTS
TP: RFP, 기능 정리해서, 조장이 메일로 보내줘요 10/12(목) 23:59 due

우리가 html에서 file로 해봤으니, DB로 바꿔봅시다. 오라클 쓰세요. 포스트그레스나 큐브머시기? 맘대로. 하나도 안해봤다면 오라클 쓰세용. JPBC가 있어야하니. 설정. 

type 2 "oci" c/s

**type 4 "thin" web**

DB -> 서비스 id - port, 리스너 - ID/PW. in .java: sid, port, id/pw.

테이블 설계는 마스터 슬레이브 구조로 만드세요. M: 이름 S: 나이, 주소 pkey = 디파인. e.g. userid   fkey는?

userid -> 마스터의, row cuont(); -> 유니크하겠지. 삭제: M지우면 S도 지워야.

S키에 이미지 [검열됨]; blob나 clob 타입으로 디파인하면됨. name varchar10; 이미지 BLOB; 로컬 디렉토리에, 이미지 car.jpg, BLOB 대신 파일 패스. 아 이미지 다 

똑같게 해야지. 여기까지 숙제. 수정삭제... 구현해야하나?

### Term project
```
재식오빠 .jsp 파일 소스 돌려보기
재식오빠가 이미지 올린거 중에 골라서 메인화면 디자인 해오기
HeidiSQL
```    

> Oct 20 w6

숙제 끝까지 내야해 늦었어요 중간에 포기하지 말고

프로그램과 sql에 대한 고민은 나중에 해도 되고 지금은 그냥 해

시험 중간고사 다음 주 10/27

### 숙제 ASSIGNMENTS
```
#1
표1 사번: 관리자의사번, 이름, (연봉).  표2 이름, 연봉 뭐야이거  SQL문으로 엑셀로 나오게

일별
20171020 홈페이지 서비스번호1 10회
20171020 홈페이지 서비스번호2 5회
20171020 게시판   서비스번호1 10회
...
20171021
...


#2
월별
201710 홈1 30회 (sum)
...

접속통계
since 20170515 until 20171029 몇회?

조건
월별통계에는 매월의 합계 값이 YYMM의 키로 
일별통계엔


#3
지점장은 우리은행 vvip 고객인 '채승기'씨의 거래 내역을 확인하고 싶4ㅓ서 2017.04.16에 계좌번호 '채승기'에 대한 3개월 간 평균 잔액을 구하라고 전산실에 부탁했다. 채승기의 3개월간 평균 잔액은 얼마인가?
> 잔고 적분. SQL문을 만들어봐

# SQL과제
sum    decode    inner/outter join

3개를 SQL 한덩어리로 하는거여

SQL 3개 나왔는데, 앞으로 4개 남았고, 그거 다 하면 SQL은 공부가 싹 될것

아 이거 시간부어야겠네
```
due: 다다음주 11/3 (fri) 까지
```
여러분 숙제할때 rownum 왜안써요?
insert 할때,    userid는 select rownum from usertable
sql문을 이렇게 만들어야, 중복이 안 됨
```

## UML
### Class Diagram
- 시스템의 정적인 구조를 나타낸다
- 시스템을 구성하는 클래스와 이들 클래스들 간의 관계를 표현한다
- package: 관련 있는 여러 클래스들을 묶어서 표현한다
  - 하나의 클래스는 하나의 패키지 내에서 유일한 이름을 가져야 함
  - 다른 클래스를 가리킬 때 만약 패키지가 다르다면 그 레퍼런스의 이름은 package-name::class-name으로 표기

#### Notation of Class Diagram (1)
- name: stereotype + class name + property
- attribute: visibility name:type-expression=initial-value{property-string}
- operation: visibility name (parameter-list): return=type-expression=initial-value{property-string}
- visibility
  - `+` public
  - `#` protected
  - `-` private

e.g.
```
Rectangle

- width: int
- height: int
/ area: double

_ Rectangle(width:int, height: int)
+ distance(r: Rectangle): double
```

### 객체 모델링
사용사례를 작성하여 도메인 분석이 어느 정도 된 후 객체를 찾고 관계를 정의하는 작업

- 클래스가 될 수 있는 요소들
  - 구조
  - 디바이스
  - 운영절차
  - 조직
  - 외부 시스템
  - 역할
  - 장소
  - 완성된 시스템에 의하여 조작되어야 할 정보
- 클래스 후보의 세가지 유형
  - 엔티티 클래스
  - 바운더리 클래스
  - 컨트롤 클래스

**시험 문제**
#### <<Entity>> 클래스
- e.g. 수강신청정보, 학생정보, 강죄정보
- 시스템에서 계속 추적해야 할 자료가 들어 있는 클래스. 업데이트, 인서트, 등. CRUD. DB로 넣을 것. 엔티티 클래스엔 비즈니즈 로직이 들어가지 않는다. get/set메서드만있으면되겠네
- 엔티티 클래스를 발견하는 휴리스틱
  - 사용사례를 이해하기 위해여 사용자와 개발자가 명확히 규정된 용어
  - 사용사례에서 반복되어 나오는 용어
  - 시스템이 계속 추적하여야 하는 실세계의 엔티티
  - **자료저장소 또는 단말**
  - 자주 사용하는 응용 도메인의 용어

#### <<Boundary>> 클래스
- e.g. 수강신청 메인화면, 수강신청 등록화면
- 시스템 외부의 액터와 상호 작용하는 클래스로 사용자 인터페이스를 제어하는 역할
- 역터와 연결된 시스템의 인터페이스 표현
- 사용자 인터페이스를 개괄적으로 모형화
- 타입으로 도출된 분석 클래스는 설계 단계에서 UI를 구현하기 위한 클래스로 상세화

#### <<Control>> 클래스
- 재사용 관점에서 중요하다
- e.g. 수강신청 컨트롤
- e.g. 리스트를 보고, 무료와 유료가 있으면, 사용자에 대한 비즈니스 로직을, 공통으로 끄집어내는겨
- 경계 클래스와 엔티티 클래스 사이에 중간역할
- 사용 사례의 초기에 생성되고 끝5가지 존재
- 겨ㄱㅇㅖ 클래스로부터 정보를 받아 엔티티 클래스에 전달 e.g. 양식의 순서, undo, 히스토리 저장 큐, 등
- 자료를 다른 클래스로부터 받아 처리하는것이 주임무다
- 비즈니스 로직을 담당하고 있는 클래스와 데이터의 delegation 역할을 한다
  - 데이터의 delegation 역할을하는 클래스를 <<control>> 클래스로 정의하고, 업무로직을 담당하는 클래스를 <<entity>> 클래스로 전환하여 정의
- 내가 정리하는
- 바운더리: 비즈니스로직, 이 아니라 UI아님?, 컨트롤: 엔티티에서 데이터 갖고와서 던져주기, + 많은 비즈니스 로직 아니냐, 엔티티: 데이터 리포

**시험 문제** 근데 mda가 머야

**시험 문제** 문장에서 uml 그리기. include 화살표두개 잘하자...

### Notation of Class Diagram
```
windows
```

```
class name: windows

attributes: size: Area
            visibility: Boolean

opeartions: display()
(methods)   hide()
```

```
windows {abstract, author = Joe}

+size: Area=(100,100)
#visibility: Boolean=invisible
+default-size: Rectangle
#maximum-size: Rectangle
-xptr: Xwindow*

+display()
+hide()
+create()
-attachXWindow(xwin:Xwin*)
```

### Notation of Relationships
**시험 문제** 클래스 다이어그램의 릴레이션십. 조그맣게 써놓은 거 보세요. association의 one-to-one, etc.

#### association
one-to-one, one-to-many
```
----    *    <- Works-for 1...* ----
Company ----------------------- Person
----    employer       employee ----
```

multiplicity (how many are used)
```
*     => 0, 1, or more
1     => 1 exactly
2..4  => between 2 and 4, inclusive
3..*  => 3 or more
```
#### aggregation
is part of
```
---- 1                        1 ----
Car (white diamond)------------ Engine
----                            ----
```
#### composition
is entirely made of 
#### dependency
uses temporarily
#### generalization

#### notes

#### example of class diagram
> 그림 보고 이해할 수 있니?

밑에 화살표 두 개는 디펜던시구나 contactinformation 이랑 personnelrecord 이거
TODO: 다이어그램그리기

### Interaction diagram
- 시스템의 동적인 면을, 롤 간의 인터랙션을 표현하는 다이어그램
- 콜라보레이션 다이어그램
  - 롤 간의 릴래이션십에 중심을 두고 다이어그램을 그린다
- 시퀀스 다이어그램
  - 인터랙션의 시각적인 순서에 중심을 두고 다이어그램을 그린다.
  - 시퀀스 다이어그램을 그려서 클래스 다이어그램을 도출해내는게 더 수월하다

#### Notation of sequence diagram
##### 객체 & 라이프 라인 & 액티베이션
- 윗 네모, 세로줄, 세로 정사각형 둘레
##### flat flow of control message
- 일반적인 메시지(asynchronous message)의 호출
- 그림: 사각형 없음, 실선 화살표 (->)
e.g.
```
학생        수강신청화면        학생 정보        수강신청화면
|              |                 |                 |
|    인증      |                 |                 |
|    ID/PW     |                 |                 |
|------------->|                 |                 |
|req_user_AC   |    ID/PW        |                 |
|(id,pw)       |    학생정보요청 |                 |
|             | |--------------->|                 |
|             | |                |                 |
|req_user_AC  | |                |                 |
|false        | |                |                 |
|<------------| |                |                 |
|             | |                |                 |
|              |                 |                 |
|              |    학생정보리턴 |                 |
|             | |<---------------|                 |
|  인증결과   | |                |                 |
|<------------| |                |                 |
| req_user_AC | |                |                 |
| boolean     | |                |                 |
|             | |                |                 |
|             | |  req_view_of_student_info(       |
|             | |    studentinfo)|                 |
|             | |--------------------------------->|
|             | |                |                 |
|             | |                |                 |
|             | |                |                 |
```

```
얘를 세세하게 하면 할 수록 코딩하기 편해요.
엔티티에서 비즈니스 로직 (if 라던가...) 넣지 말기, 로직으로 돌아가서 거기서 리퀘 날리기
시퀀스다이어그램 그릴 때, 부분에 대한 설명을 한국어로 막 적어도 돼요
처음엔, 시스템보단 화면이라고 생각하고 그리는게 더 쉬울거야
```
##### nested flow of control message
- 일반적으로 프로시저 호출 (synchronous 메시지를 나타낸다)
- 그림: 사각형 없음, 실선 화살표, 화살촉은 채운 세모 (-|>)

##### asynchronous flow of control message
- 명시적으로 asynchronous 메시지를 나타낸다
- 그림: 사각형 없음, 실선 화살표, 화살촉은 위까치집 (-\)

#### Sequence diagram: object interaction
self-call: A message that an object sends to itself.

condition: Indicates when a message is sent. The message is sent only if the condition is true.
```
[condition]
-------------------->
remove()
(condition)

*[for each] remove()
-------------------->
(iteration)

----
    |
<---     (self_call)
```

#### Sequence diagrams: object life spans
- lifelines
  - the dottedline that extends down the vertical axis from the base of each object.
- messages
  - labeled as arrows, with the arrowhead indicating the direction of the call
- activation bar
  - the long, thin boxes on the lifelines are method-invocation boxes indicting that indicate processing is being performed by the target object/class to fulfill a message.
- Rectangle also denotes when object is deactivated
- deletion
  - placing an 'X" on lifeline (but not)
  - object's life ends at that point

> 요구사항에 다 쓰라구. 구현은 다음 문제구

다담주 11/3(금)에, 재식네 조 -> 클래스 다이어그램을 발표, 러프하게 그려, 핵심적인 부분, 팀 차원에서, 시퀀스->유즈케이스->클래스 다이어그램 순서

**시험 문제** 유즈케이스는 노테이션에 대한 디파인을 할 수 있어야해.

방법론, 프로토타입이 왜 필요할까, 방법론들에 대한 간단한 설명,

논술형

> Nov 3 w8

여기서부터 기말고사 범위

## Test
정의: 오류를 찾는 과정

목적
- robust한 시스템을 만들기
- 사용자 요구만족도, 제품신뢰도 향상

Lessoned learn

Debugging

특징
- 결함을 찾기
- 개발자가 자기 프로그램을 직접 테스트하지 않음??

단계별 테스트

V&V model

사용자 환경 | 설치 테스트
--- | ---
시스템 정의 | 인수 테스트
요구 분석 | 시스템 테스트
구조 설계 | 통합 테스트
상세 설계 | 모듈 테스트
코딩 | 디버깅

validation & verification

### Unit Test
White box

인터페이스, 자료구조, 수행경로, 오류처리, 경계

### Intergration Test
Top-down
- 회귀 테스트(Regression test) **시험 문제 (기말)** 테스트는 밑에도 있으니 거기서 보자
  - 모듈간에 인터페이스가 있는데 오류가 났을때 어느쪽에서 났는지 규명하는게 중요함. 구조가 바뀔 수도 있음. 리퀘를 받는 게 내부망에서 도는 거였던 거임 ㅋㅋㅋ. 이런걸로 존나 싸웠음. -> 그래서 리그레션 테스트가 중요함 ???
  - 그래서 리그레션 테스트가 뭐죠??
  - 모듈을 수정하면, 걔랑 연관된 모듈마다 테스트를 함
  - 힘듦
  - 졸려서 수업 듣기 힘듦
- stub(dummy module)을 사용

### System Test
회복 테스트

안전 테스트: 시스템의 보호 기능이 불법적인 침투로부터 시스템을 보호하는지, 에대한 검증 테스트

스트레스 테스트

알파 테스트: 개발자가 사용상의 문제를 기록

베타 테스트: 사용자들이 사용상의 문제나 개선 사항을 기록

### Black and White Box Test
ㅇㅇ

### 블랙박스 테스트의 기법
동등 분할 기법: divide and conquer

결함예측 기법

### 화이트박스 테스트
프로그램 내의 소스들은 적어도 한번은 수행 되어야 함

테스트 케이스

> Nov 10 w9

### Inspection
**시험 문제 (기말)**

Defect를 사전 예방하기 위해 하는 것임.

baseline을 긋는다

Knowledge System, Project Management System: 매 프로젝트마다 쌓임

> 공장관리: 4M: Man material method machine

Inspection은 제품이 정확하고 표준/명세/요구사항에 합치하는지를 보증하기 위해 결함을 찾도록 훈련된 작은 팀이 산출물을 한번에 한 부분씩 검토함으로써 지적 (Intellectual) 제품을 검증하는 공식적인 프로세스임 R. Ebenau "Software Inspection Process", McGraw-Hill Inc., 1994

Planing
- 목적
  - 조직
- 담당자
  - Moderator
  - Author
- 주요 업무
  - 일정 계획
  - 참가자 지정
  - 미팅 공지
  - 자료 배부

Overview
- 목적
  - 교육
- 담당자
  - Moderator
  - Author
  - Inspectors
  - Others
- 주요 업무
  설명회 (교육)

Preparation 단계
- 목적
  - Understanding
  - 잠재 defect 식별
- 담당자
  - 모든 Inspectors
- 주요 업무
  - 자료 사전 review (사전 공부)

Meeting 단계
- 목적
  - 검증, 검토
- 담당자
  - Moderator
  - Author
  - Reader
  - Recorder
  - Inspectors
- 주요 업무
  - 회의 취지
  - 준비사항 점검
  - 자료 읽기 & Defect 기록
  - 찾은 Defect 검토

Rework
- 목적
  - defect 제거
- 담당자
  - Author
- 주요 업무
  - 모든 Defects 제거 작업

Follow-up
- 목적
  - Certify Inspection
- 담당자
  - Moderator
  - Author
- 주요 업무
  - Rework 검증
  - 처리 결과 보고

### Inspection과 CMM 관련
G01: 동료 검토 활동을 계획한다.

G02: 작업 산출물의 결함을 파악하여 제거한다.

KPA | 연계 내용
--- | ---
RM | 요구사항에 대한 동료검토 수행
SPP | 동료검토계획은 개발계획에 포함
SPTO | 동료검토 활동이 추적되어야 함
SCM | 결함수정에 대한 변경관리
SSM | 협력업체의 산출물도 포함
SQA | 동료검토 계획 및 결과의 데이터 검사

### 소프트웨어 테스트 고려사항
- 테스트 모형 설계 시 예상출력 정의
- 프로그래머는 자신의 프로그램 TEST 금지
- 테스트 결과의 철저한 분석의 요구
- 부당하거나 예기치 않은 입력도 테스트 등
- TEST CASE 유지(재사용) 등

### 테스트 전망
#### 테스트 전략
- 시험자: Verification (검증)
- 개발자: 디버깅
- 사용자: Validation (확인)
- 폼질보증요원: 품질보증 (Workthrough, Inspection, Review, Verification, Validation)

#### 테스트 발전방향
- S/W 테스트는 개발 및 시스템 구축의 완전성을 위한 중요 요소
- Black box 밎 White box 테스트 방법을 개발 과정 중 보편적 사용
- 효율적인 소프트웨어 테스트를 위해 QA Check list map을 이용, 요구대비 테스트 목표달성 여부 분석, 최적 테스트 케이스 / 테스트 계획 준비
- 사용자 참여하여 테스트 결과를 철저히 검토, 기록, 수정하고 개선사항을 반영
- 자동 테스트 케이스 생성 및 테스트 실시와 같은 선진 기법 필요
- 국가적으로 테스트 툴에 대한 연구개발 및 현장 도입이 필요 (?)

## 유지보수
유지보수의 정의
- SDLC의 마지막 단계로, 소프트웨어의 생명을 연장시키는 작업
- 소프트웨어 공학 재검토 과정의 각 단계에서 고려
- 오류의 수정, 원래의 요구를 정정, 기능과 수행력을 증진시키는 일련의 작업
- 소프트웨어가 인도된 후 결함의 제거, 성능향상, 변화된 환경에 적응토록 수정
- 소프트웨어 유지보수 및 운영 전담조직이 필요 (Maintentance-bound)
- 개발은 제작중심의 작업이며 유지보수는 운영중심의 작업
- 소프트웨어가 인수되어 설치된 후 일어나는 모든 소프트웨어 공학적 작업

유지보수의 필요성
- 유지보수 비용이 전체 비용의 70~80% 를 차지
- 소프트웨어 인력이 신규 프로젝트보다 유지보수 업무에투입되는 낭비 요소 발생
- 유지보수의 비효율성으로 인해 패키지 소프트웨어의 도입 확산
- 프로젝트보다 기존 소프트웨어 개선에 더 많은 인력과 비용 소요
- 소프트웨어기능의 복잡화에 따른 난해함으로 문서화 등의 관리업무가 증가
- 개발은 1 - 2 년 정도지만 유지보수는 5 년 또는 10 년 정도로 장기
- 용역개발보다 패키지의 선택이 확산됨에 따라 유지보수 부문이 증가 예상

유지보수의 목표
- 소프트웨어의 성능 개선
- 소프트웨어의 하자 보수
- 새로운 환경에서 동작할 수 있도록 이식 및 수정
- 예방적 조치 

분류기준 | 유지보수의 종류
--- | ---
사유 | 교정, 적응, 완전 유지보수
시간 | 계획, 예방, 응급, 지연 유지보수
대상 | 데이터/프로그램, 문서화, 시스템 유지보수

유지보수 유형
- Corrective Maintenance
  - 처리오류: 비정상적인 프로그램 중단, 입력 데이터 검증 누락, 출력 프로그램의 부정확
  - 수행오류: 느린 응답시간 또는 부적절한 트랜잭션 처리율
  - 구현오류: 프로그램 설계에 있어서 표준, 범칙 또는 불일관성/불완전성
- Adaptive Maintenance
  - 프로그램 환경 변화에 소프트웨어를 적응시키도록 수행
  - 데이터 환경의 변화: 데이터 매체의 변경, 일발 파일에서 데이터 베이스 관리시스템의 변환
  - 처리환경의 변화: 새로운 하드웨어 플랫폼 또는 운영체제로 이전
- Perfective Maintenance
  - 수행력 향상, 프로그램 특성을 변경 또는 첨가, 또는 프로그램의 장래 유지보수성을 향상시키기 위해 수행 
- 문서 유지 관리
  - 분석/설계 산출물, MRF(Modification Request Form), CR(Change Request), SCR(Software Change Report), 등
- 품질 보증
  - 소프트웨어 유지보수 시기, 구성 계획 등의 적절성과 유지보수 내용의 관련 문서와 일치성 확보

유지보수의 발생 요인 분석
- 소프트웨어의 유기적인 측면
  - 소프트웨어 시스템에 대한 사용자 참여 및 만족도 미흡
  - 개발된 시스템의 문서화, 유연성, 신뢰성 저하
- 개발 환경적 측면
  - 유지보수 보다는 신규 프로젝트에 치중
  - 표준화된 방법론 및 개발 도구 적용의 부재
  - 분석 설계 시 유지보수성 및 재 사용성 요인 반영의 미흡

유지보수 문제점 및 해결방안

문제점 | 해결방안
--- | ---
유지보수에 따른 코드, 자료, 문서상 불일치 발생 | 표준화된 개발방법론 및 개발도구 적용
시스템의 신뢰성 저하 발생 | 소프트웨어 재공학 도구 활용: 분석, 재구조화, 역공학
유지보수 비용 및 인력의 증가 | 유지보수 요인에 대한 예방활동 실시
유지보수 절차, 조직 및 운영 방법이 비체계적 | 변경관리, 형상관리 등 적절한 프로젝트 관리기법 도입

**시험 문제 (기말)**
중간고사에서 UML 2문제는 기말도 똑같이 내려구.

> Nov 17 w10

## SE 관점의 Quality Assurance
제품을 사면, "품질보증서" 라는게 들어있기도 한다. 앞에서도 생각해 보았지만, 과연 좋은 소프트웨어란 무엇인가? 소프트웨어의 품질을 어떻게 보장할 수 있는가?

Quality Assurance란. 소프트웨어 "프로세스"와 "프로덕트"에 대한 품질을 관리하고 향상시키는 작업이다.

We will cover... 품질 개념, 품질 보증 활동, 프로세스 품질, 프로덕트 품질, 인스펙션

### 좋은 품질?
사용자 관점: 원하는 기능을 제공하여 유용하고 쉽게 쓸 수 있고, 신뢰성 높고 필요에 따라 계속 발전하는 소프트웨어어

개발자 관점: 좋은 설계 구조를 가지며 쉽게 유지 보수할 수 있고, 테스트가 용이하고 환경에 맞도록 변경 가능한 소프트웨어

### 품질 측정 가시화의 어려움
구체적으로 원하는 수준의 품질인지 판단하기

다른 소프트웨어와의 품질 비교

### 두 가지 개념의 소프트웨어 품질
Big Quality: 고객 만족

정확하고 성능이 좋은 것은 물론이며 고객이 원하는 바로 그것, 어떤 탁월성을 보여서 사용하면서 만족을 얻을만한 것이 되어야 한다. -> 토탈 상품, 시그마 운동

Small Quality: 요구 만족

개발자의 입장으로 국한 할 수 있고 개발자가 생각하는 품질의 개념은 소프트웨어가 요구를 만족하느냐 못하느냐의 여부

### ISO 9126의 소프트웨어 (프로덕트) 품질 특성
**시험 문제 (기말)**
- 개발자 관점
  - 기능성: 요구된 기능이 소프트웨어에 있는가?
  - 사용성: 사용하기 쉬운가?
  - 신뢰성: 얼마나 신뢰할 만 한가?
- 유저 관점
  - 유지보수성: 소프트웨어를 변경하기 쉬운가?
  - 이식성: 다른 환경에 얼마나 쉽게 이식할 수 있는가?
  - 효율성: 얼마나 효율적인가?

### 소프트웨어 특성에 따라 품질에 대한 요구는 매우 다를 수 있다. 
e.g. 증권 거래 시스템 → 기능성, 신뢰성, 사용성, 변경의 용이성

e.g. 임베디드 시스템 → 신뢰성, 효율성

S/W 결함이 인명과 재산에 치명적인 시스템
- 신뢰성, 정확성, 테스트 용이성
- e.g. 원자력발전소, 방사선 치료기

긴 수명을 요하는 시스템
- 유지보수성, 이식성, 융통성
- e.g. 전자 정부 시스템, 전자 도서관

실시간 응용 분야의 소프트웨어
- 효율성, 신뢰성, 정확성
- e.g. 통신 시스템, 유도 미사일

보안이 중요한 응용 시스템
- 다른 시스템과의 연동이 필요한 상호 운용성
- 은행 결제 시스템, 증권 거래 시스템

### 프로덕트 품질과 프로세스 품질
프로덕트 품질
- 소프트웨어 자체의 품질을 의미한다. 일반적으로 생각하는 품질을 의미한다.
- 수돗물 비교: 맛, 색깔, 유해성분, …

프로세스 품질
- 소프트웨어를 개발하는 과정의 품질을 의미한다.
- 수돗물 비교: 파이프의 청결도, 집수장의 위치, …
- 과정의 품질이 좋지 않으면 궁극적인 프로덕트의 품질이 나쁘다는 인식에서 출발한다.
- 프로세스의 품질이 높으면 s/w에 내제된 잠재적인 오류를 줄일 수 있다. 

과거에는 프로덕트 품질을 중시했으나, 현재는 모든 분야에 있어서 프로세스의 품질을 중시하는 경향이 있다.

> IT Governance: 경영 등

> Compliance: 지침

> PMS(Project Management System): 산출물, 프로세스의 결과물 쌓기

### 프로덕트 품질
소프트웨어 자체의 품질을 의미하나, 소프트웨어를 대하는 사람의 입장에 따라서 품질의 정이가 달라진다. e.g. 구매자는 외부로 드러나는 품질요소, external characteristics를 중시한다. 오류 횟수, 판매 횟수 등.
유지보수 엔지니어는, 제조 과정에 내재된 내부 특성, internal characteristics를 중시한다. 함수 재사용이 용이한가, 등.

관련 표준: ISO 9216, ISO 14598

### 프로세스 품질
개발하는 과정이 소프트웨어 품질에 많은 영향을 준다는 주장

개발 및 유지 보수하는 프로세스의 품질이 프로덕트 자체의 품질 못지않게 중요하다는 입장

향상 방안
- 특정 오류가 언제 어디서 발견되는가?
- 어떻게 하면 개발 과정에 오류를 조기에 발견할 수 있는가?
- 어떻게 하면 오류에 대한 내성이 있는 시스템, 즉 오류가 소프트웨어ㄹㄹㅡ 정지시키는 확률이 적은 시스템으로 만들 수 있는가?
- 프로세스가 좋은 품질을 보장하는 더 효율적이며 효과적인 다른 방법이 있는가?

### 품질 보증 활동의 내용
조직: 품질 보증을 수행하는 조직의 구성과 역할은?

계획: 품질 보증 활동을 어떻게 계획할 것인가?

작업: 품질 보증은 구체적으로 어떤 작업을 통해 수행할 것인가?

### 품질 보증 활동
개념: 소프트웨어 제품이나 아이템이 정해진 요구에 적합하다는 것을 보장하는데 필요한 계획적이고 체계적인 활동 [IEEE 610, 1991]

일반적인 품질 보증 작업
1. 소프트웨어 품질 확보를 위한 요구 제정 (각종 요구사항 제정 및 관리에 초점)
1. 소프트웨어를 개발, 운용, 유지보수하기 위한 방법론, 프로세스, 절차의 제정과 실행 (개발 과정을 관리하는데 초점)
1. 소프트웨어 제품이 품질을 평가하고 관련 문서, 프로세스, 품질에 영향을 미치는 activity를 평가하기 위한 방법론, 프로세스, 절차의 제정과 실행 (제품 자체의 품질 관리에 초점)

### 프로세스 품질
내용
- 미국 정부 회계국 발표: 1991 전세계의 대형 프로젝트의 성공률이 1%
- 프로세스: 개발을 위한 질서 있고 경험에 의한 규칙 있는 인력, 기술, 절차, 도구가 어우러져 통합된 작업
- 프로세스에 의해서 소프트웨어의 품질을 높일 수 있다
- "소프트웨어 시스템의 품질은 그것을 개발하는데 사용되는 프로세스의 품질에 좌우된다" [Humphrey]

소프트웨어 프로세스 평가 모델
- 미 국방성의 CMM(Capability Maturity Model)
- IEEE SPICE(Software Process Improvement and Capability dEtermination)

소프트웨어 프로세스 성숙도 레벨 5단계 (CMMI)
- 레벨 1(Initial) -개인의 역량에 따라 프로젝트의 성공과 실패가 좌우된다. 소프트웨어 개발 프로세스는 거의 없는 상태를 의미한다.
  - 표준화된 프로세스 없이 프로젝트 수행결과 예측이 곤란한 조직
  - 적용 프로세스 없음.
- 레벨 2(Managed) - 프로세스 하에서 프로젝트가 통제되는 수준으로 조직은 프로세스에 대한 어느 정도의 훈련이 되었다고 볼 수는 있지만, 일정이나 비용과 같은 관리 프로세스 중심이다. 기존 유사 성공사례를 응용하여 반복적으로 사용한다.
  - 기본적인 프로세스 구축에 의해 프로젝트가 관리되고 있는 조직
  - 적용 프로세스
    - 요구사항 관리(Requirement Management)
    - 프로젝트 계획(Project Planning)
  - 프로젝트 감시 및 제어(Project Monitoring & Control)
  - 공급자 계약 관리(Supplier Agreement Management)
  - 측정과 분석(Measurement & Analysis)
  - 프로세스와 제품 품질 보증(Process & Product Quality Assurance)
  - 형상관리(Configuration Management)
- 레벨 3(Defined) - 레벨 2에서는 프로젝트를 위한 프로세스가 존재한다면 레벨 3에서는 조직을 위한 표준 프로세스가 존재한다. 모든 프로젝트는 조직의 프로세스를 가져다 상황에 맞게 조정하여 승인받아 사용한다.
  - 세부 표준 프로세스가 있어 프로젝트가 통제되는 조직
  - 적용 프로세스
    - 요구사항 개발 (Requirement Development)
    - 기술적 해결 (Technical Solution)
    - 제품 통합 (Product Integration)
    - 검증 (Verification)
    - 조직 프로세스 중점 (Organization Process Focus)
    - 조직 프로세스 정의(Organization Process Definition)
    - 조직 훈련(Organization Training)
    - 통합된 프로젝트 관리(Integrated Project Management)
    - 통합된 공급자 관리(Integrated Supplier Management)
    - 위험(Risk Management)
    - 결정분석 및 해결(Decision Analysis & Revolution)
    - 통합 조직 환경(Organizational Environment for Integration)
    - 통합된 팀 구성(Integrated Teaming)
- 레벨 4(Quantitatively Managed) - 소프트웨어 프로세스와 소프트웨어 품질에 대한 정량적인 측정이 가능해진다. 조직은 프로세스 데이터베이스를 구축하여 각 프로젝트에서 측정된 결과를 일괄적으로 수집하고 분석하여 품질평가를 위한 기준으로 삼는다.
  - 프로젝트 활동이 정략적으로 관리․통제되고 성과 예측이 가능한 조직
  - 적용 프로세스
    - 조직적 프로세스 성과(Organizational Process Performance)
    - 정량적인 프로젝트 관리(Quantitative Project Management)
- 레벨 5(Optimizing) - 이 레벨에서는 지속적인 개선에 치중한다. 조직적으로 최적화된 프로세스를 적용하여 다시 피드백을 받아 개선하는 상위 단계이다.
  - 지속적인 개선활동이 정착화 되고 최적의 관리로 프로젝트가 수행되는 조직
  - 적용 프로세스
    - 조직 혁신 및 이행(Organization Innovation & Deployment)
    - 분석과 해결(Casual Analysis & Revolution)

다시 말하지만 **시험 문제 (기말)** CMMI의 3 -> 4 단계로 갈 때, KPA를 논하시오. (정성 -> 정량.)

12/15(금) PM 5 마지막 강의날에 기말 시험을 볼 예정. 시험시간은 90분이고, 끝나고 소주(???)하자. 45명 예약 잡아놔라. 이거 실화냐? 컴과 전통에 따라 아무도 안 갈지도 모르겠는데

> Dec 1 w12

조견표

RFP    제안서    기술협상서    사업수행계획서    요구사항 분석    설계    개발    테스트

### 프로젝트 일정계획
어떤 프로젝트를 하지 말아야 하는지

부정당 먹으면 안대

### 요구분석 단계
주요 요구분석 기법
- 회의
- 인터뷰
- 설문조사
- 프로토타이핑

### 설계 및 구현 단계
사용자 인터페이스 설계의 기본원리
- 공동의 노력
- 사용자 능력에 부합
- 일관성 유지
- 도움말 기능의 제공

### 테스트 유형
p 33 **시험 문제 (기말)** 테스트는 오류를 수정하는거야

구분: 테스트 단계


테스트의...

단계 | Unit Test | 모듈 시험 (모듈의 독립성 평가); White Box Test
--- | --- | ---
단계 | Integration Test | 모듈간 인터페이스 테스트; 결함 테스트
단계 | System Test | 전체 시스템의 기능수행 테스트; 스트레스,성능,회복,안전,구조테스트
단계 | Acceptance Test | 사용자만족(요구사항 만족도평가); 확인,알파,베타테스트
단계 | Installation Test | 사용자 환경
목적 | Recovery Test | 고의적 실패 유도
목적 | Security Test | 불법적인 소프트웨어
목적 | Stress Test | 과다 정보량 부과
목적 | Performance Test | 응답시간, 처리량, 속도
목적 | Structure Test | 내부논리 경로, 복잡도 평가
시각 | 검증(Verification) | 과정
시각 | 확인(Validation) | 결과
방법 | Black Box Test | 기능/성능테스트
방법 | White Box Test | 내부 구조를 중점으로

### 프로젝트 관리구성
p 57 **시험 문제 (기말)** 공예품

```
프로젝트                       납기준수
                                 ↑
프로젝트           효율적인     공정관리
관리              자원분배  ↙          ↘ 정확한개발작업
3대요소    예산준수  ←  예산관리   ←   품질관리 → 품질준수
                            철저한품질보증


프로젝트
관리                 계획  조직화  인력확보  지휘  통제
5대기능
                              통합관리
프로젝트
괸리            일정관리  품질관리  범위괄리  위험괄리
지식분야        원가괄리  인력괄리  의사소통  구매외주
```

### 잡담?
근데 테일러링이 뭐지 -> 아하 기간같은거 늘리고 줄이는거

IT 하는 사람들 이 SE 과정에서 하나도 안벗어나고 맨날 한대

공부는 탑다운으로 하는 게 중요해

### PDM
**시험 문제 (기말)** 

Finish-Start    Finish-Finish    Start-Start    Start-Finish

```
Early start |  기간    |  Early Finish  |
          사용자 등록
Late start  |  float  | Late finish |

0 | 2 | 2 |    2 | 3 | 5 |

8 | 8 | 10 |    10 | 8 | 13 |

0 | 5 | 5 |    5 | 8 | 13 |

0 | 0 | 5 |    5 | 0 | 13 |
```

> Dec 8 w13

시험문제 | 9개
--- | ---
1 | Test
2 | Inspection
3 | ISO 9126
4 | CMMI 3 4단계
5 | 프로젝트 관리구성
6 | PDM
7 | 소프트웨어 사업대가
8 | Usecase diagram
9 | Class diagram

소프트웨어 사업대가 **시험 문제 (기말)**

| . | . | . | . | Data | 〃 | Tran. | 〃 | 〃
--- | --- | --- | --- | --- | --- | --- | --- | ---
. | . | . | . | Internal | External | EI | EQ | EO
. | . | . | . | 2 | 1 | 6 | 3 | 6
Data | Internal | 고객 | I | 1 | . | . | . | .
〃 | 〃 | 제품 | I | 1 | . | . | . | .
〃 | External | 공급자 | E | . | 1 | . | . | .
Transaction | 고객관리 | Create | EI | . | . | 1 | . | .
〃 | 〃 | Read | EQ | . | . | . | 1 | .
〃 | 〃 | Update | EI | . | . | 1 | . | .
〃 | 〃 | Delete | EI | . | . | 1 | . | .
〃 | 〃 | Report 1 | EO | . | . | . | . | 1
〃 | 〃 | Report 2 | EO | . | . | . | . | 1
〃 | 〃 | Report 3 | EO | . | . | . | . | 1
〃 | 〃 | Report 4 | EO | . | . | . | . | 1
〃 | 제품 | Create | EI | . | . | 1 | . | .
〃 | 〃 | Read | EQ | . | . | . | 1 | .
〃 | 〃 | Update | EI | . | . | 1 | . | .
〃 | 〃 | Delete | EI | . | . | 1 | . | .
〃 | 〃 | Report | EO | . | . | . | . | 1
〃 | 공급자 | Read | EQ | . | . | . | 1 | .
〃 | 〃 | Report | EO | . | . | . | . | 1
