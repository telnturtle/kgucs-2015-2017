# Web Service
- Professor: 김희열
- Site: islab.kyonggi.ac.kr
- But Web Application

### World Wide Web
- A system of Interlinked Hypertext Documents Accessed via Internet
- Web Server
- Client

### Web Application
- An Application Accessed via Web Browser Over a Network Such as Internet
- Need No Update (for client) and Install
- Easy Maintenance
- Cross-platform
- Client, Web Servers, Web Application Server, DB, ..
- Youtube, Instagram, Twitter, Google Calander

### Web Service
- A software System Support Interoperable Machine-to-machine Interaction Over a Network
- WSDL + SOAD
- RESTful
- e.g. Mashup with OpenAPI
  - Combine two service
  - 부동산 + 지도
  - Need API

근데 우리는 웹을배운적이없어요

웹서비스지만 HTML조차 한적이없어요

그래서 웹 애플리케이션을 하는데 초점을 맞출 겁니다

웹사이트를 만들거나 웹에서 특정한 동작을 구현하는거 등

다양한 랭귀지, 다양한 프레임워크

> 자바안배운사람?  저요  수학과 복수전공  두명이네  근데 내생각엔 차피 문법은 안어렵고, 랭귀지부터 수업듣고 앉아있으면 너무 느림 그냥 하는게 나아  나도 자바 하나도 모르는데 그냥 할거야..

시간남으면 Spring을 할까 합니다

### Syllabus
- Objective
  - JSP + Servlet
  - Develop web application
- Instructor
  - heeyoul.kim@kgu.ac.kr, room 8211, 249-9607
- Text
  - IT CookBook, 프로젝트로 배우는 자바 웹 프로그래밍, 황희정, 한빛미디어, 2014
- Grading
  - Mid 0.3, Final 0.3, Attendance 0.1, TP and Practice 0.3

### Schedule

### Sample Project
- 중간고사 뒤엔 팀플
- 유튜브로 플레이리스트 십년전에 만들었음

> 질문 (나): 팀 인원은 어떻게  서너명이 한 팀

팀 편성도 중간고사 뒤에 한다

> Sep 7

### Network
- OSI 7 Layer
  - Physical Layer
  - Signal
  - Data link layer
  - 옆 노드에 데이터전송
  - Network Layer
  - IP
  - Transport Layer
  - TCP
  - Session Layer
  - Presentation Layer
  - Application Layer
  - HTTP, FTP, ..
- TCP/IP
  - OSI 7 layer를간단화함
  - Network Interface
  - Internet
  - Transport
  - Application
- IP Address
  - Identify
- IPv4
  - Internet Protocol version 4
  - 32-bit addresses
- IPv6
  - Expand addressing capability
  - 128-bit addresses
- Domain Name
  - A unique name by which a network-attached device known
  - DNS
  - aka Hostname
  - Domain name -> DNS -> IP addr. -> routing -> dest. web server

### Internet and Web
- Internet
  - Network of networks
  - A standardized global system of interconnected networks
  - Origin from 60s
- Internet Services
  - Web service
- Web Server and Client
  - Server-client architecture
  - Peer-to-peer
  - Web server: Apache
  - Web client: Browser
- HTTP: HyperText Transfer Protocol
  - WWW
  - On application layer
- HTML: HyperText Markup Language
- URL: Unique Resource Locator

HTML Docs Transfer on HTTP Protocol

- Request and Response Header
- HTTP Methods
  - GET
  - Request the specified resource
  - 서버에서 데이터 가져오기
  - POST
  - Submit data to the specified resource
  - 서버에다 데이터 쓰기

이거 어떻게 다른거임? https://blog.outsider.ne.kr/312 참조

- 기타 HTTP Methods
  - HEAD
  - PUT
  - DELETE
- MIME Type
  - An identifier for the file formats
  - E.g.
  - Text/html: HTML
  - Application/zip: zip file
  - Audio/mpeg: mp3 or mpeg audio file
  - Image/jpeg: JPEG image file

다음주엔: HTML이나 css를 할거에요

미리봐오면 좋음 ㅎㅎ

> Sep 21

> 렉처 사이트 홈페이지가 죽었어요 sites.google.com/view/kgu-lecture 를 임시로 사용하세요

> 근데 나 지난 주 html 한거 하나도 기억 안나

### 서버 사이드 프로그래밍
html은 정적인 웹 페이지를 생성한다. 동적인 페이지는 어떻게 만들까?

- Client-side coding
  - 웹 브라우저가 돌림
  - 서버의 개입을 줄여서 빠른 처리가 가능
  - e.g. 회원 가입 폼의 data validation
  - 자바스크립트

- Server-side coding
  - 웹 서버가 처리
  - 코드를 실행해서 다이내믹하게 html 페이지를 만듦
  - JSP, PHP, ...

### Server-side Coding
- CGI
  1. 브라우저가 http://xxx.xxx.xxx/cgi-bin/a.cgi
  1. 웹 서버가 프로세스 생성
  1. 프로세서가 HTML 문서 출력
  1. 웹 서버가 브라우저에게 문서를 전송

  - 오버헤드가 크다
    - 각각의 클라이언트 요청에 대해 개별적인 프로세스를 생성한다
    - 시스템 리소스 많이씀
- Servlet
  - 자바 코드 안에서 stdout으로 HTML 포맷으로 출력
- Server-side scripting
  - HTML 코드 안에서 자바 코드를 넣음
  - 디자인과 데이터를 구분하고, 코드를 수정하기와 관리하기가 쉬운 장점
  - ASP, PHP,
  - JSP
    - 서블릿과 연계되는 서버사이드 스크립트고, 각 요청에 대해 별도의 프로세스가 생기지 않고 쓰레드 기반으로 처리한다

### 일반적인 웹 서버 동작
1. 브라우저가 url 입력
1. DNS 서버가 ip address로 바꾸고 브라우저로 돌려보냄
1. 브라우저가 웹 서버에 HTML 페이지를 요청, 포트 번호는 웹 서버로 데이터를 전하기 위해 쓴다 기본 80
1. 웹 서버가 요청을 분석하고 HTML 파일을 읽는다
1. 웹 서버가 HTML을 전송
1. 브라우저가 화면 만듦

### JSP 동작 방식
1. url
1. IP address
1. jsp 페이지 리퀘스트 (8080 포트)
1. 웹 서버가 요청/분석 넘김
1. JSP/서블릿 컨테이너가 JSP를 서블릿으로 컴파일 (컨테이너에서 JSP가 처리 됨)
1. 서블릿 로드
1. DB가 데이터 전송까지 하면 
1. HTML 넘김
1. 브라우저가 받음

### JSP -> Servlet
1. 요청 받음
1.
    if servlet in jsp then compile to servlet, load to container else pass
    execute servlet
    if database_processing in servlet then take data from DB else pass
1. 실행 결과 전송

### Java 개발환경 구축
이클립스 설치하고

(네온 3) Eclipse Java EE IDE for Web Developers를 설치하면 wtp가 설치되어있음

워크스페이스 설정

한글 인코딩 설정: UTF-8, preference-general-workspace and preference-web(-jsp, html)-

톰캣 서버 설정: windows-preference-server-runtime enviroments-apache tomcat v8.5-톰캣 디렉토

### 아파치 톰캣 서버
- Web server
  - 정적인 html 문서나 이미지 컨텐츠 처리
- Web application server
  - DB 서버와 연동하거나 비즈니스 로직의 처리를 담당하는 미들웨어
  - JSP/servlet 등을 이용해서 동적인 컨텐츠 처리
  - 분산 환경에서 트랜잭션 처리하기 용이하다
- 자바 서블릿과 jsp 스펙을 구현했으며 기본적인 httl web server를 함께  포함
- (설치과정)
- 런
  - 모니터 톰캣 in 시스템 트레이
- 테스트
  - http://localhost:8080
- 셧다운
  - Apache Tomcat 7.0 Tomcat Properties 에서 Stop

### 헬로월드
이클립스 프레젝트 생성 File-New-Dynamic Web Project

context root: url 상의 메인 접속 경로로 설정하고 e.g. https://localhost:8080//webservice 각 웹 앱은 하나의 컨텍스트로 관리되며 동일 컨텍스트 내에서만 세션 등 공용 정보를 공유한다

contect directory: jsp, html, 이미지파일 동 컨텐츠를 위치할 디렉토리

java source directory: jsp와 연동할 자바 소스 위치

- helloworld.jsp 만들기
  - <content_directory>/ch03 - new - jsp file
  - 작성

이클립스에서 톰캣을 설정했으면 걔가 알아서 톰캣을 켜니깐 윈도우에서 톰캣을 꺼라. 윈도우에서 톰캣을 돌리고 있으면 같은 포트를 써서 에러가 난다

    <%@ page language="java" contentType="text/html; charset=UTF-8"
        pageEncoding="UTF-8"%>
    <!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
    <html>
    <head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>Insert title here ww</title>
    </head>
    <body>
        <center>
            <h2>Hello world!</h2>
            <hr>
            datatime.now: <%= new java.util.Date() %> 
        </center>
    </body>
    </html>


### 서블릿 라이프 사이클

### Servlet
- 서블릿 컨테이너 (웹 컨테이너)
  - 자체적으로 JVM과 JRE를 포함한다
  - 웹 서버의 url 요청을 받고, 매핑되는 서블릿을 실행한다.
  - 서블릿의 라이프사이클 관리
  - 아파치 톰캣, BEA WebLogic, ...

### 컨테이너와 서블릿의 동작 방식

클라이언트 브라우저가 url을 써서 웹서버에 요청을하죠 웹서버가 서블릿이구나 판단을하면 자체적으로 동작을 못하죠 그럼 컨테이너에게 보냅니다 컨테이너는 이 요청에 해당하는게 이 ㅓㅅ블잇ㄱ이구나. 서블릿은 쓰레드를 하나 생성합니다 새 스레드.
얘를 동작시켜야하는데 어떻게 해요? 메소드 호출해요
service() ㅏ는 메소드는 서블릿 내에 다 있어요
이 서블릿에 대해서 서비스() 메소드를 호출해요
이 서비스는 분기가 되어요 doGet() doPost()
http 프로토콜얘기하면서 겟과 포스트를 얘기했어요
get이면 doGet()을 요청하고 포스트면 doPost()를 요청ㅐ요
그럼 html 문서가 생성되고 컨테이너가 웹서버에 주고. 웹 서버가 클라이언트에 줍니다
컨테이너가 두가지가있어요 httpServletRequest, httpServlet Response
리퀘는 다양한 요청 정보가 있어요
리스폰스는 어디에 활용되냐면 최종 결과물에 관련된 부분은 리퀘스트 메소드인지 객체인지ㅗ 활용을해요

처음에 서블릿을 작성했어요
톰캣이 적재했어요
컨테이너는 초기화 과정에서 나에게 해당하는 서블릿 클래스에 뭐가 있나 봅니ㅏ
메모리에 올립니다
서블릿 인스턴스가 생성되죠 생성자가 호출됨
모든 서블릿은 init()이란 메소드가 지원되요
컨테이너는 호출ㅇ하면 인스턴스에서 각종 초기화가 되어요
레디ㅏㅇ태가됨
그러다가 이거실행해줘하는 요청이 오면 service()를 불러요 그럼 쓰레드가 생김
막 그러다가
다 쓰고 톰캣 그만쓸거야 하면destroy()를 불러요
그럼 없어질때 클린업
이것들을 컨테이너가 다 관리해요
개념만 알아두면 되요컨테이너가 다 ㅏ알아서 해주니


### URL servlet mapping

web.xml 파일 안에다가 적어놨어요
옛날엔 이렇게 적었ㅓ요
어떤 유알엘이면 어떤 메소드다
유알엘과 클래스만 잘 연결해줘도 되는ㄷ서블릿이 늘어날때마다 일일히 추가해줘야하니 불편하죠
요샌 어노테이션을 기반으로해요
자바코드중에 골뱅이+회색글자.
그중에서도 매핑정보를 표현하려면 어떻게하냐
골뱅이 웹서블릿
그럼 서블릿이 이런 요청이 들어오면 이런메소드를 실행해야지 하고 이해를하게됩니다

### 서블릿의 장점
- 쓰레드기반이라서 리소스를 효율적으로씀
- 서블릿은 자바클래스니까 자바의 장점을 그대로 가집니다 platform-independent
- java api나 라이브러리와 십게 연동을할수있다
- 웹앱관저에서 서블릿이 뭐가 좋냐면
- 코드의 형태니까 하고싶은걸 다할수있ㅇ요
- 리스너나 필터등으로 할수있어요
- 단점이있는데
- 서블릿은 자바코드니까 로직개발하는덴좋은데
- 되게기다란html문서를찍어야한다
- 프린트 프린트 프린트
- 귀찮아서 jsp가 나왔어요
- 근데 문제가 뭐냐
- 얘는 반대의 단점이 있습니다 간단하게 코드를 넣는건 좋은데 복잡한 로직을 만드는건 어렵다
- 그래서 서블릿이랑 jsp를 가이쓰자
- MVC 패턴으로 진행합니다

### 서블릿을 만드는법
```
아무거나 클래스를 만들어서 이거 서블릿이야 하면 컨테이나가 관리해주진않아요
서블릿 만들때는 다른클래스를 상속받아서만들어요 HttpServlet
상속 얘기. 부모클래스를 가져다가 내가하고싶은걸 덧붙여서.
HttpServlet은 GenericServlet을 상속받아서 만들었구요
얘는 Servlet이란 인터페이스를 상속받고있어요
인터페이스가뭐에요
명세 껍데기 메소드구현
init void  service void  destroy void 세 개의 메소드가 정의되어 있습니다
아까 컨테이너가 서블릿을 관리할때 init service destroy로 관리한다고했죠
설계와 구현을 분리한다
서블릿이란 인터페ㅇ스가 정의되어있고
제네릭서블릿이있고
httpservlet이 상속받고있어요
http는 그프로토콜 상에서 동작하는 서블릿이고요
다른 프로토콜도있어요
그래서우리는 HttpServlet을 상속받아서 쓰는거에요
필요한기능만 추가하면되요
우리는 myServlet에 두겟과 두포스트를 오버라이딩해줘요
우리가원하는 특벼한 ㅏㄱ업을 하는거죠
그럼 컨테이너가 알아서 관리 실행 호출이되는거다
```

### 서블릿 라이프사이클
구체적으로나옴

녹음 서블릿 로딩 init

### HttpServeltRequest

### HttpServletResponse

### Calculator Servlet

실습

다음시간에 하도록하겠습니다

### 집에가서
톰캣 환경설정하세요

서블릿을 배웠어요

끝

> Sep 28 w4

### Calculator Servlet
- HTML 작성
- CalcServlet 작성
  - 서블릿 파일은 WebContent 디렉토리에 넣지 말고 java resource/src에 넣으세여
- JSP/Servlet library 추가
  - Properties for <project>
    - Apache tomcat v8.0
    - EAR libraries
    - JRE System Library [jre 8.0_20]
    - Web App Libraries
- CalcServlet.java

(code)

calc.html -> num1=2, num2=3, operator='+' -> CalcServlet

    extends HttpServlet
    doGet()에서 왜 doPost()임?
    doPost() 메서드요
    웹에서는 입력값이 숫자인지 문자인지 몰라요
    문자열로 처리됩니다
    숫자로 변환
    request.getParameter("num1")
    인풋 - 비즈니스 로직 - 아웃풋 삼단계
    out.println();으로 아웃풋한게 컨테이너를 통해서 HTML로 가고, 그건 클라의 브라우저로 가죠

이거 코딩해야해!!

- webservice/WebContent/WEB-INF/web.xml
  - 여기다가 적었었는데 요샌 잘안함

### ServletConfig
- servlet이 초기화 할 때 관련 정보를 저장해서 제공하는 객체
- generated by container
- web.xml에서 <init-param>을 읽어서 ServleConfig에 저장
- Annotation-based config
- (ppt 몇페이지)

### ServletContext
- 서블릿컨피그보다 중요해요
- 컨피그는 여러개의 서블릿이 있으면 각각의 서블릿마다 있어요
- 서블릿 컨텍스트는 서블릿 각각이 아니라 하나의 웹 애플리케이션에 하나만 존재합니다
- 컨텍스트 개체를 이용해서 설정한 초기 파라미터는 모든 서블릿에게 동일한 파라미터를 주죠
- methods
  - 서버 정보
  - 서버 자원
  - logging
  - manage attribute
  - parameter
- 초기 파라미터 전달 수단으로 활용, 모든 서블릿이 공유해야 하는 정보 전달 e.g. 회사명, DB서버

### HttpSession
- http 프로토콜은 stateless 프로토콜이다
  - 연결->요청->응답->종료
  - 연속적인 사용자 정보가 보존되지않는다
- 클라이언트를 구분할 방법이 필요하다
- 쿠키 vs 세션
  - 쿠키
    - name, value 쌍
    - http 헤더에 포함되어 웹 서버가 클라이언트에게 전송
    - 이후에 접속마다 클라가 서버에게 재전송
    - 보안상 취약점
  - 세션
    - 사용자 정보를 서버에 저장
    - 클라이언트의 최초 접속 시, 새로운 세션을 생성하고 세션id를 전송한다
    - 이후에 접속마다 클라가 세션id 재전송
    - 세션id에 해당하는 세션 정보를 서버가 알 수 있다
    - 세션 id 전송 수단으로 쿠키를 사용를 사용할 수 있다

### 세션 동작 흐름
- 최초 접속
  - 클라 request, "kim" -> 컨테이너 -> 서블릿 setAttribute("name", "kim") -> HttpSession 

ID=12; name-kim
  - 컨테이너 new -> HttpSession
  - 컨테이너 response, ID=12 -> client
```
HTTP/1.1 200 OK
...
SetCookie: JSESSIONID=12
...
```

- 재접속
```
POST /session.do HTTP/1.1
...
Cookie: JSESSIONID=12
...
```
  - 클라이언트 request, ID=12 -> container -> servlet getAttribute("name") -> ID=12; 

name=kim HttpSession
  - servlet name=kim -> container response -> client

### 세션 관리
```
힘들어서 바깥에서 쿠키도 건드려야 하고
근데 서블릿쓸때는 컨테이너가 다 해줘요
테이너에게 세션 객체를 달라고 요청하면되요
HttpSession session = request.getSession();
생성된 세션이 없다면, 컨테이너가 새로운 세션 ID 만들고 ID를 클라에게 보낼 준비 하고, 새로운 HttpSession 객체 생성하고 서블릿에 제공하고
기존 세션이 있다면, 리퀘에 있는 id에 해당하는 HttpSession 객체를 찾아서 제공
클라1가 있고 서버가 있어요
세션 객체를 요청해요
그럼 컨테이너가 세션1을 만들어줘요
서블릿2도 세션을 요청해요
동일한 클라니까, 아까 만든 세션1을 서블릿2에게 제공해요

세션은 서블릿마다 할당이 되는게 아니라, 클라마다 하나에요
```

> Oct 12 w5

## 세션
### lifecycle
`request.getSession()`을 최초로 호출하면 컨테이너가 생성

클라이언트가 세션id로 접속해서 사용함. `request.getSession()`으로 사용중인 HttpSession 

객체를 획득한 후 사용

`invalidate()`를 호출하거나, 타임아웃되면 컨테이너가 소멸시킨다

ServletContext: 웹 앱 시작 시 생성, 웹 앱 종료 시 소멸. 하나의 앱의 서블릿들이 공유

HttpSession: 컨텐트 최초 접속시 생성, 타임아웃이나 `invalidate()` 호출시 소멸. 동일한 

클라의 요청을 받아서 도는 애들끼리는 동일한 세션 객체를 공유하게 된다

HttpServletRequest: 해당 서블릿 요청시 생성, 요청 완료시 소멸.

### attribute
어트리뷰트는 객체 ServletContext, HttpSession, HttpServletRequest에 바인딩해서 사용한

다

특정 정보와 행위를가지고 있는 객체를, **어트리뷰트**화 한다.

자바 오브젝트 형태. 모든 자바 클래스는 Object 형태로 변환 가능

내부적으로 (name,value) 형식으로 저장

어트리뷰트를 바인딩한 객체의 스코프 안에서 정보 공유에 사용함 e.g. 장바구니

어트리뷰트 스코프는, ServletContext는 동일 애플리케이션, HttpSession은 동일 세션, 

HttpServletRequest는 동일 리퀘스트 내에서 사용이 가능하다.

#### methods
```
void setAttribute(String name, Object value)
Object getAttribute(String name)
void removeAttribute(String name)
Enumeration getAttributeNames()
```

#### 카운터
서블릿(.java) 추가하기: project_directory/Java Resources/src/class_name/에 new > 

servlet

```
// Counter.java

// ServletContext 객체와 속성 이용

package myapp;

public class Counter {
    private int count = 0;

    public void addCount() {
        count++;
    }

    public void init() {
        count = 0;
    }

    public void getCount() {
        return count;
    }
}
```

```
// CounterServlet.java

package myapp;

import java.io.IOException;
import java.io.*;
import javax.servlet.ServletException;
import javax.servlet.ServletContext;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class myapp
 */
@WebServlet("/myapp")
public class CounterServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CounterServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

    /**
     * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doGet(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        response.setContentType("text/html; charset=UTF-8");
        PrintWriter out = response.getWriter();
        out.println("<H1>Counter test</H1>");
        
        ServletContext sc = getServletContext();
        Counter cnt = (Counter)sc.getAttribute("counter");
        if (cnt == null) {
            cnt = new Counter();
        }
        cnt.addCount();
        out.println("<p>당신은 " + cnt.getCount() + "번째 사용자입니다.</p>");

        sc.setAttribute("counter", cnt); 
        
        // response.getWriter().append("Served at: ").append

(request.getContextPath()); // 원래 있던 줄
    }

    /**
     * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doPost(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        // TODO Auto-generated method stub
        doGet(request, response);
    }

}
```

http://localhost:8080/webservice/CounterServlet 으로 접속해서 확인해보자

#### 장바구니
HttpSession 객체와 속성 이용

project/WebContent/mydirectory에 new > HTML 파일
```
// login.html

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>장바구니</title>
<style>
    body {text-align:center;}
</style>
</head>

<body>
    <h2> 로그인 </h2>
    <form name=form1 method=post action=/hy_webapp_w5/SelectProduct>
        <input type=text name=username />
        <input type=submit value=로그인 />
    </form>
</body>
</html>
```

```
// SelectProduct.java

package myapp;

import java.io.IOException;
import java.io.*;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class SelectProduct
 */
@WebServlet("/SelectProduct")
public class SelectProduct extends HttpServlet {
    private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public SelectProduct() {
        super();
        // TODO Auto-generated constructor stub
    }

    /**
     * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doGet(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        // TODO Auto-generated method stub
        response.getWriter().append("Served at: ").append

(request.getContextPath());
    }

    /**
     * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doPost(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        response.setContentType("text/html; charset=UTF-8");
        request.setCharacterEncoding("UTF-8");
        String username = request.getParameter("username");
        HttpSession session = request.getSession();
        session.setAttribute("username", username);
        
        PrintWriter out = response.getWriter();
        out.println("<center>");
        out.println("<H2>상품 선택</H2>");
        out.println(username + "님으로 로그인했습니다");
        out.println("<form name=form2 method=post action=AddProduct>");
        out.println("	<select name=product>");
        out.println("		<option>apple</option>");
        out.println("		<option>orange</option>");
        out.println("		<option>lemon</option>");
        out.println("	</select>");
        out.println("	<input type=submit value=추가 />");
        out.println("</form>");
        out.println("<a href=CheckOut>결제</a>");
        out.println("</center>");
    }
}
```

```
// AddProduct.java

package myapp;

import java.io.IOException;
import java.util.*;
import java.io.*;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class AddProduct
 */
@WebServlet("/AddProduct")
public class AddProduct extends HttpServlet {
    private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public AddProduct() {
        super();
        // TODO Auto-generated constructor stub
    }

    /**
     * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doGet(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        // TODO Auto-generated method stub
        response.getWriter().append("Served at: ").append

(request.getContextPath());
    }

    /**
     * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doPost(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        String product = request.getParameter("product");
        HttpSession session = request.getSession();
        ArrayList<String> list = (ArrayList<String>)session.getAttribute

("productlist");
        if (list == null) {
            list = new ArrayList<String>();
        }
        list.add(product);
        session.setAttribute("productlist",  list);
        
        response.setContentType("text/html; charset=UTF-8");
        PrintWriter out = response.getWriter();
        out.println(product + "이(가) 추가되었습니다.");
    }
}
```

```
// CheckOut.java

package myapp;

import java.io.IOException;
import java.io.*;
import java.util.*;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class CheckOut
 */
@WebServlet("/CheckOut")
public class CheckOut extends HttpServlet {
    private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CheckOut() {
        super();
        // TODO Auto-generated constructor stub
    }

    /**
     * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doGet(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        response.setContentType("text/html; charset=UTF-8");
        HttpSession session = request.getSession();
        String _username = (String)session.getAttribute("username");
        ArrayList<?> list = (ArrayList<?>)session.getAttribute

("productlist");
        
        PrintWriter out = response.getWriter();
        out.println("<center> <H2>" + _username + " 님이 선택한 상품 

목록</H2>");
        
        if (list == null) {
            out.println("선택한 상품이 없습니다.");
        } else {
            for (Object product:list) {
                out.println(product + "<br>");
            }
            out.println("</centre>");
        }
        
        
    }

    /**
     * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse 

response)
     */
    protected void doPost(HttpServletRequest request, HttpServletResponse 

response) throws ServletException, IOException {
        // TODO Auto-generated method stub
        doGet(request, response);
    }
}
```

```
근데 문제가 많아요
다른 유저로 로그인하면, 이전 유저 장바구니 물품까지 다 나와요
그리고 세션 객체는 사용자가 한시간동안 접속을 안 하면 없어져요
@TODO: apple을 두 번 추가하면 apple이 두 개 생기는거 해결
```

#### 이제 하나남았죠 request 객체에도 바인딩 할 수 있어요
```
리퀘스트는 (언제) 사라지는데 거기다가 왜 바인딩 하냐? 라는 의문이 생길 수 있어요
우리가 한 건 간단함. 하나의 서블릿에서 처리가 가능한데
복잡하면 여러 서블릿이 협업해야함. 그럴 때 씀.
```

포워딩이라고 해요 `forward(request. response)`

HTML -> Controller.java -> View.java

```
// Controller.java

protected void doPost(HttpServletRequest request, HttpServletResponse response) 

throws ServletException, IOException {
    String username = request.getParameter("username");
    RequestDispatcher view = request.getRequestDispatcher("/View");
    view.forward(request, response);
}

```

```
// View.java

protected void doPost(HttpServletRequest request, HttpServletResponse response) 

throws ServletException, IOException {
    response.setContentType("text/html; charset=UTF-8");
    PrintWriter out = response.getWriter();
    String username = (String)request.getAttribute("username");
    out.println("User name is " + username);
}
```

> Oct 19 w6

## Chapter 6 jsp 문법
### JSP -> Servlet 으로의 변환
hello.jsp (변환)---> .java (컴파일&로딩)---> hello_jsp (HttpJspPage 인터페이스를 구현한 servlet)

```
    <<Interface>>               (재정의 가능)
    javax.servlet.jsp.JspPage
----
jspInit()
jspDestroy()

        ↑

    <<Interface>>               (재정의 불가능)
    javax.servlet.jsp.HttpJspPage
----
_jspService(HttpServlet Request, HttpServletResponse)
```

JSP/서블릿 컨테이너
```
1.요청 분석/넘기기--> 해당 JSP 파일에 
                     해당 서블릿이 있는지? (NO)---> 2.서블릿으로 컴파일
                         ↓ YES                        ↓
                    서블릿 실행  <---------------  3.컴파일된 서블릿
                         |                          컨테이너에 적재
                         ↓
                    4.데이터베이스 처리 부분 있는지? YES---
                         | NO                           ↓
6.실행 결과 전송  --------------------------------- 5.데이터 가져오기
                                                        ↑
                                                   데이터베이스
```

```
○
↓
hello.jsp
↓
Class 존재?    NO-->    hello_jsp.java
↓ YES                       ↓
메모리에 로딩?    NO-->    hello_jsp.class
| YES                       ↓ jspInit()
----------------------->    ready          ↻ _jspService()
                            ↓
    웹 컨테이너 종료           destroy
                              ↓ jspDestroy()
                              ○
```

#### 변환 예
HttpJspPage를 구현한 실제 servlet 클래스는 컨테이너마다 다름

```
public abstract class HttpJspBase extends javax.servlet.http.HttpServlet
                                  implements javax.servlet.jsp.HttpJspPage
```

jsp 따로 서블릿 따로있는게 아니라 그놈이 그놈이다

jsp 페이지를 만들 때의 문법, 지시어들을 배워봅시다

### 주석
`<!-- HTML 주석 -->`
클라이언트에게 전송되어 브라우저가 처리한다. HTML 파일에 주석이 들어간다.

`<%-- jsp 주석 --%>`
서버 내부에서만 처리된다. jsp는 서블릿이 생성되고, 서블릿이 html 문서를 만들어준다. jsp 주석은 html 문서로 들어가지 않는다.

### Directives (지시어)
JSP 파일의 속성을 기술한다.  Container에게 해당 파일을 어떻게 처리해야 하는지 전달한다.

page, include, taglib가 있다.

#### page
현재 JSP 페이지의 속성을 기술한다

`<%@ page language="java" contentType="text/html"; charset="UTF-8" pageEncoding="UTF-8"%>`

속성
- contentType
  - JSP를 통해 생성된 결과물의 타입 설정
  - 한글 처리를 위한 인코딩 방식도 함께 설정
  - in servlet: `response.setContentType("text/html; charset=UTF-8");`
  - in jsp: `<%@ page contentType="text/html; charset=UTF-8" %>`
- pageEncoding 
  - 페이지의 character set 설정
  - JSP 2.0 이후 추가된 속성
  - 한글 지원을 위해서는 pageEncoding과 contentType을 병행해서 사용
  - `<%@ page pageEncoding="UTF-8" %>`
- import
  - Java 언어의 import와 동일한 기능
  - JSP 내에서 외부 패키지와 클래스를 사용해야 하는 경우 기술
  - 기본적으로 포함되는 패키지
    - `java.lang.*`
    - `javax.servlet.*`
    - `javax.servlet.jsp.*`
    - `javax.servlet.http.*`
    - e.g.
      - `<%@ page import="java.sql.*, java.util.*" %>`
      - `<%@ page import="myapp.*" %>`
- errorPage / isErrorPage
  - JSP 내에서 오류가 발생하는 경우를 처리
  - errorPage: 오류 발생시 호출할 페이지를 지정한다
  - isErrorPage: 작성되는 jsp가 오류 처리용 페이지임을 명시한다
  - 장점: 환경(개발/배포)에 따라 다양한 방식의 오류 처리 가능

##### errorpage / isErrorPage
기본적인 오류 처리 방식
```
Error_test.jsp

<body>
    <H2>Error test page</H2>
    <%= 5/0 %>
</body>
```

errorPage / isErrorPage 활용
```
Error_test.jsp
<%@ page language="java" contentType="text/html"; charset="UTF-8"
    pageEncoding="UTF-8" errorPage="Error.jsp" %>

<body>
    <H2>Error test page</H2>
    <%= 5/0 %>
</body>
```

```
Error.jsp
<%@ page language="java" contentType="text/html"; charset="UTF-8"
    pageEncoding="UTF-8" isErrorPage="true" %>

<body>
    <H2>처리중 아래와 같은 에러가 발생했습니다. </H2>
    <%= exception.toString() %>
    <hr>
    contact to admin@myserver.com
</body>
```

#### include
- 현재의 JSP 파일에 다른 HTML이나 JSP를 포함하는 기능 제공한다
- 장점
  - 각 기능별로 모듈화된 JSP를 작성
  - 여러 모듈을 include 해서 새로운 페이지 구성하기가 용이
  - 구조 변경 등의 유지보수에 용이 (프로그램 모듈화와 유사)
- 여러 페이지에 공통으로 포함되는 내용을 관리할 때 유용하다
  - CSS 및 JSP 공통 선언 포함
  - 저작 정보, 연락처 등 포함
- `<%@ include file="Company.jsp" %>`
```
Include_test.jsp
<body>
    <H2>This is my first page</H2>
    <HR>
    <%= include file="Company.jsp" %>
</body>
```

```
Company.jsp
<body>
    Last modified at 2009/10/05 by administrator of Myservice.com copr. <BR>
    Email: admin@myserver.com

</body>
```

그럼 Include_test.jsp 다음과 같이 보인다
```
This is my first page

Last modified at 2009/10/05 by administrator of Myservice.com copr.
Email: admin@myserver.com
```

여러 페이지에서 동일한 정보를 불러올 때 사용한댔지? 다른 페이지로 활용해보자
```
Include_test2.jsp
<body>
    <H2>This is my second page</H2>
    <HR>
    <%= include file="Company.jsp" %>
</body>
```

```
http://localhost:8080/jspbook/ch06/Include_test2.jsp
This is my second page

Last modified at 2009/10/05 by administrator of Myservice.com copr.
Email: admin@myserver.com
```

#### taglib
사용자 정의 태그 라이브러리를 사용하기 위한 정보 기술

`<%@ taglib uri="/META-INF/mytag.tld" prefix="mytag" %>`

### Scriptlet
JSP 내에 Java 코드를 적는 부분

```
<%
    Statements;
%>
```

```
<%-- hello_scriptlet.jsp -->

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Scriptlet test</title>
</head>
<body>
    <H2> Addition from 1 to 10 </H2>
    <%
        int sum = 0;
        int i;
        for (i = 1; i <= 10; i++) {
            out.print(i + " ");
            if (i != 10) out.print("+ ");
            else out.print("= ");
            sum = sum + i;
        }
        out.println(sum);
    %>
</body>
</html>
```

오 된다

### Counter jsp 만들기
```
WrongCounter.jsp
<body>
    <H2> Counter test </H2>
    <% int count = 0;%>
    <P>
    당신은 <% out.println(++count); %>번째 접속자입니다
    </P>
</body>
```

제대로 동작할까? -> ㄴㄴ, 계속 1번째 사용자라고만 나옴 -> 메서드 안의 지역변수라서 메서드가 끝나면 스코프가 죽음

생성된 서블릿을 보면 _jspService()내의 로컬 변수로 선언이 된다.

#### declaration
생성되는 Servlet 내에서 사용되는 method나 member variable을 선언한다.

`<%! declare... %>`

Servlet 클래스의 내부에, 다른 method의 외부에 위치한다.
```
<%-- SimpleCounter.jsp -->

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
    <H2>Counter test</H2>
    <%! int count=0; %>
    <P>
    당신은 <% out.println(++count); %>번째 접속자입니다.
    </P>
</body>
</html>
```

근데 이렇게는 안하는게 좋아요. jsp 페이지 안에 복잡한 비즈니스 로직을 넣는건 좋지 않음 -> Counter.java와 CounterJSP.jsp를 따로 만드는게 좋다.

```
/* Counter.java */
package myapp;

public class Counter {
    private static int count = 0;
    public static int getCount() {
        return count;
    }
    public static void addCount() {
        count++;
    }
}
```

```
<%-- CounterJSP.jsp --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="myapp.Counter" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Counter JSP</title>
</head>
<body>
    <H2>Counter test</H2>
    <% Counter.addCount(); %>
    <p>
    당신은 <% out.println(Counter.getCount()); %>번째 접속자입니다.
    </p>
</body>
</html>
```

### expression
out.println()으로 표현된 scriptlet을 대체하는 간단한 방식

<% out.println(Counter.getCount()); %> == <%= Counter.getCount() %>

식의 내용이 out.println()의 매게변수가 된다

;이 안붙도록 주의하자

jsp에서는 되도록이면 out.println()을 사용하지 말자

### jsp 내장 객체
- jsp로부터 자동 생성되는 서블릿 코드 내에 이미 선언/할당되는 객체
- scriptlet내에서 다른 변수와 마찬가지로 사용한다
- request, response, out, pageContext, session, application, config, page, 
- servlet 객체: jsp 내장 객체 instance
  - HttpServletRequest: request
  - HttpServletResponse: response
  - JspWriter: out
  - ServletContext: application
  - ServletConfig: config
  - HttpSession: session
  - PageContext: pageContext
  - JspException: exception
  - Object: page

### jsp를 이용한 장바구니
```
<!-- login.html -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>장바구니</title>
</head>
<body>
    <H2>로그인</H2>
    <form name="form1" method="post" action="selProduct.jsp">
        <input type="text" name="username" />
        <input type="submit" value="로그인" />
        </form>
</body>
</html>
```

```
<%-- selProduct.jsp --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
<style>
    body {text-align:center;}
</style>
</head>
<%
    request.setCharacterEncoding("UTF-8");
    String username = request.getParameter("username");
    session.setAttribute("username", username);
%>
<body>
    <H2>상품 선택</H2>
    <%= username %>님이 로그인한 상태입니다
    
    <form name="form2" method="post" action="addProduct.jsp">
        <select name="product">
            <option>apple</option>
            <option>orange</option>
            <option>lemon</option>
        </select>
        <input type="submit" value="추가"/>
    </form>
    <a href="checkOut.jsp">결재</a>
</body>
</html>
```

```
<%-- addProduct.jsp --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.ArrayList" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
    request.setCharacterEncoding("UTF-8");
    String product = request.getParameter("product");
    ArrayList list = (ArrayList)session.getAttribute("productlist");
    if( list == null ) list = new ArrayList();
    list.add(product);
    session.setAttribute("productlist", list);
    out.println(product + "이(가) 추가되었습니다.");
%>
</body>
</html>
```

```
<%-- checkOut.jsp --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.ArrayList" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<style>
    body {text-align:center;}
</style>
<title>Insert title here</title>
</head>
<%
    request.setCharacterEncoding("UTF-8");
%>
<body>
    <H2> <%=session.getAttribute("username") %>님이 선택한 상품목록</H2>
    <%
        ArrayList list = (ArrayList)session.getAttribute("productlist");
        if( list == null ) out.println("선택한 상품이 없습니다!");
        else {
            for (Object product:list) {
                out.println(product + "<br>");
            }
        }
    %>
</body>
</html>
```

### jsp action
### include
`<jsp:include page="JSP name" />`

인클루드 디렉티브: 두 파일 내용을 하나로 합친 후 컴파일. 정적인 페이지를 포함시킬 때 사용

인클루드 액션: 실행 시점에 해당 파일을 호출해서 그 결과를 현 페이지에 포함. 동적인 페이지를 포함시킬 때 사용

```
<%-- include_action.jsp --%>
```

```
<%-- footer.jsp --%>
```
TODO: 코드 삽입

### forward
- 현재 페이지에서 제어권을 다른 페이지로 넘길 때 사용
- 서블릿에서 RequestDispatcher.forward()와 동일한 기능
- 사용법
  - <jsp:forward page="JSP name" />
```
<%-- forward_action.jsp --%>
```

> forward는, 인클루드와 다르게 함수 호출처럼 쓰지 않는다. 다시 포워드를 부른 jsp로 돌아가지 않는다. 파라미터는 똑같다.

### redirect
- forward or request dispatch
  - 요청에 대한 처리를 서버 내부에서 다른 컴포넌트에게 위임
  - 요청에 관련된 request, response 객체가 함께 전달되어 처리
  - in servlet: RequestDispatcher 사용
  - in jsp: forward action 사용
- redirect
  - 요청에 대해 새로운 url을 클라이언트에게 전송해서, 클라이언트가 새로운 url로 다시 요청을 보내도록 한다
  - 새 url에 대한 요청이기 때문에 새로운 request, reponse 객체가 생성
  - in servlet & jsp: response 객체의 sendRedirect() 이용

> 클라이언트에게 200말고 301을 보낸다

```
<%-- page_control.jsp --%>
```

```
<%-- forward_action2.jsp --%>
```
TODO: 코드 삽입
```
<%-- page_control_end.jsp --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
    page_control_end.jsp output page
    <hr>
    name : <%= request.getParameter("username") %> <br>
    tel  : <%= request.getParameter("tel") %>
</body>
</html>
```

```
<%-- response_sendRedirect.jsp --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>
</head>
<body>
    <% response.sendRedirect("page_control_end.jsp"); %>
</body>
</html>
```

> Oct 26 w7

## JSP Beans & MVC Pattern
### JavaBeans

### Jsp Beans
#### Beans Class 구성
일반적인 Java class 구성과 유사하지만, beans 만의 규칙을 따른다
- class name e.g. UserBean
- 파라미터가 없는 default constructor를 제공한다 e.g. public UserBean()
- 클래스 안의 멤버 변수는 private으로 선언해서 direct access를 방지한다 e.g. private String name;
- getter/setter method
  - 멤버 변수명에 기반하는 메서드를 만들어야 한다
  - e.g. setName(String username), getName()

#### Jsp에서 Beans 사용
- Scriptlet 내에 java code를 통해 beans 클래스 사용도 가능하지만, JSP action을 이용해 beans 클래스 사용 가능
- Beans 사용 선언
  - `<jsp:useBean id="bean id" class="bean class" scope="범위" />`
  - bean id: Beans 클래스의 인스턴스 명
  - bean class: Beans 클래스 명으로 패키지 경로를 포함한다
  - scope
    - Beans 클래스는 해당 범위 내의 attribute로 관리된다
    - application: 웹 앱 종료시까지 사용한다
    - session: 현재 세션 종료시까지 사용한다
    - request: 현재 request가 처리 완료될 때까지 사용한다
    - page: "난 아무하고도 공유 안하겠어!" 현재 페이지 내에서만 사용한다

```
JSP
<jsp:userBean id="user" class"="UserBean" scope="request">

Servlet
UserBean user = (UserBean)request.getAttribute("user");
if (user == null) {
    user = nwe UserBean();
    request.setAttribute("user", user);
}
```
해당 scope내에 userBean이 이미 생성되어 관리되고 있으면, 그 인스턴스를 획득한다. 만약 없다면, 새로운 인스턴스를 생성한 후, 해당 scope에 맞게 attribute로 저장한다.

##### get Beans property
- `<jsp:getProperty name="bean id" property="property name" />`
- bean id: Beans 클래스의 인스턴스 명이다
- property name: 획득하려는 property 명이며, Beans class의 getter를 통해 획득한다
```
<HTML><body>
<% UserBean user = (UserBean)session.getAttribute("user"); %>
User name is <%= user.getName() %>
</body></HTML>

==

<HTML><body>
<jsp:useBean id="user" class="UserBean" scope="session" />
User name is: <jsp:getProperty name="user" property="name" />
</body></HTML>
```

##### set Beans property
##### HTML form과 Beans 연결

#### JSP Beans 예제
```
login_form.html
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<style>
    body {text-align:center;}
</style>
<title>Insert title here</title>
</head>
<body>
    <H2>로그인 예제</H2>
    <form method="post" action="/webappw7/login.jsp">
        <table width="250" border="1" align="center">
        <tr>
            <td colspan="2">로그인<td>
        </tr>
        <tr>
            <td>아이디<td>
            <td><input type="text" name="uesrid" size="10"></td>
        </tr>
        <tr>
            <td>패스워드<td>
            <td><input type="password" name="passwd" size="10"></td>
        </tr>
        <tr>
            <td colspan="2">
                <input type="submit" name="Submit" value="login">
            </td>
        </tr>
        </table>
    </form>
</body>
</html>
```

```
LoginBean.java
package webappw7;

public class LoginBean {
    // member vairables
    private String userid;
    private String passwd;
    
    // Source -> Generate Getters and Setters...
    // methods
    public String getUserid() {
        return userid;
    }
    public void setUserid(String userid) {
        this.userid = userid;
    }
    public String getPasswd() {
        return passwd;
    }
    public void setPasswd(String passwd) {
        this.passwd = passwd;
    }
}
```

```
login.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">

<jsp:useBean id="login" class="webappw7.LoginBean" scope="request" />
<jsp:setProperty name="login" property="*" />

<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<style>
    body {text-align:center;}
</style>
<title>Insert title here</title>
</head>
<body>
    <H2>로그인 예제</H2>
    <HR>
    <%
        if (login.getUserid().equals("myuser") && login.getPasswd().equals("1234"))
            out.println("Login Success!");
        else
            out.println("Login Fail!!!");
    %>
    <HR>
    사용자 아이디: <jsp:getProperty property="userid" name="login" />
    <BR>
    사용자 패스워드: <jsp:getProperty property="passwd" name="login" />
</body>
</html>
```
jsp엔 비즈니스 로직을 담지 말고 프레젠테이션만 담자 -> JSP Beans를 쓰는 목적

```
HTTP Status 500 – Internal Server Error


Type Exception Report

Message java.lang.NullPointerException

Description The server encountered an unexpected condition that prevented it from fulfilling the request.

Exception
org.apache.jasper.JasperException: java.lang.NullPointerException
    org.apache.jasper.servlet.JspServletWrapper.handleJspException(JspServletWrapper.java:565)
    org.apache.jasper.servlet.JspServletWrapper.service(JspServletWrapper.java:481)
    org.apache.jasper.servlet.JspServlet.serviceJspFile(JspServlet.java:385)
    org.apache.jasper.servlet.JspServlet.service(JspServlet.java:329)
    javax.servlet.http.HttpServlet.service(HttpServlet.java:742)
    org.apache.tomcat.websocket.server.WsFilter.doFilter(WsFilter.java:52)


Root Cause
java.lang.NullPointerException
    org.apache.jsp.login_jsp._jspService(login_jsp.java:136)
    org.apache.jasper.runtime.HttpJspBase.service(HttpJspBase.java:70)
    javax.servlet.http.HttpServlet.service(HttpServlet.java:742)
    org.apache.jasper.servlet.JspServletWrapper.service(JspServletWrapper.java:443)
    org.apache.jasper.servlet.JspServlet.serviceJspFile(JspServlet.java:385)
    org.apache.jasper.servlet.JspServlet.service(JspServlet.java:329)
    javax.servlet.http.HttpServlet.service(HttpServlet.java:742)
    org.apache.tomcat.websocket.server.WsFilter.doFilter(WsFilter.java:52)


Note The full stack trace of the root cause is available in the server logs.
```

## MVC Pattern
model-view-controller pattern은, 객체간의 커플링 레벨을 줄임으로써 보다 유연한 데이터 처리가 가능하다. 웹 앱에서 많이 사용하는 중요한 패턴이다.

### Three Logical Layers
Model (business process layer)
- 백엔드 단에서의 비즈니스 로직 담당한다
- 데이터와 그에 대한 행동을 모델링한다
- 실제 처리해야 하는 작업을 수행한다
  - DB와 연동해서 쿼리를 실행
  - 비즈니스 프로세스를 수행
- 프레젠테이션 레이어와 무관하게 데이터를 인캡슐레이션 한다

View (presentation layer)
- 비즈니스 로직(model)을 통해 얻어진 결과를 출력한다
- 사용자 타입과 환경에 맞게 다양한 정보를 출력한다
- 정보가 어디서 왔는지와 어떻게 생성되었는지는 상관하지 않는다

Controller (control layer)
- 사용자와 백엔드의 비즈니스 로직을 연결해 주는 역할이다
- 여러 프레젠테이션 중 어느 것을 제공할지 결정해 주는 역할이다 e.g. 사용자 언어, 위치, 액세스 레벨 등에 따라, 다른 프레젠테이션을 제공한다
- 사용자의 요청을 받은 후, 요청을 어떻게 처리하고 어떤 결과를 얻어서 표현해야 하는지를 결정한다

```
login_form.html
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<style>
    body {text-align:center;}
</style>
<title>Insert title here</title>
</head>
<body>
    <H2>로그인 예제</H2>
    <form method="post" action="/webappw7/Login">
        <table width="250" border="1" align="center">
        <tr>
            <td colspan="2">로그인<td>
        </tr>
        <tr>
            <td>아이디<td>
            <td><input type="text" name="uesrid" size="10"></td>
        </tr>
        <tr>
            <td>패스워드<td>
            <td><input type="password" name="passwd" size="10"></td>
        </tr>
        <tr>
            <td colspan="2">
                <input type="submit" name="Submit" value="login">
            </td>
        </tr>
        </table>
    </form>
</body>
</html>
```

```
LoginBean.java
package webappw7;

public class LoginBean {
    // member vairables
    private String userid;
    private String passwd;
    private String error;
    
    // Source -> Generate Getters and Setters...
    // methods
    public String getUserid() {
        return userid;
    }
    public void setUserid(String userid) {
        this.userid = userid;
    }
    public String getPasswd() {
        return passwd;
    }
    public void setPasswd(String passwd) {
        this.passwd = passwd;
    }
    public String getError() {
        return error;
    }
    public void setError(String error) {
        this.error = error;
    }
}
```
Login.java
package webappw7;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import webappw7.LoginBean;

/**
 * Servlet implementation class Login
 */
@WebServlet("/Login")
public class Login extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        LoginBean login = new LoginBean();
        String address;
        
        login.setUserid(request.getParameter("userid"));
        login.setPasswd(request.getParameter("passwd"));
        if (checkUser(login))
            address = "/login_success.jsp";
        else {
            address = "/login_fail.jsp";
            login.setError("Invalid userid/passwd");
        }
        request.setAttribute("userinfo",  login);
        RequestDispatcher dispatcher = request.getRequestDispatcher(address);
        dispatcher.forward(request,  response);
    }
    
    private boolean checkUser(LoginBean login) {
        if (login.getUserid().equals("myuser") && login.getPasswd().equals("1234"))
            return true;
        else
            return false;
    }
}
```

```
login_success.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">

<jsp:useBean id="userinfo" class="webappw7.LoginBean" scope="request" />

<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<style>
    body {text-align:center;}
</style>
<title>Insert title here</title>
</head>
<body>
    <H2> Login Success! </H2>
    <HR>
    사용자 아이디: <jsp:getProperty name="userinfo" property="userid" />
    <BR>
    사용자 패스워드: <jsp:getProperty name="userinfo" property="passwd" />
</body>
</html>
```

```
login_fail.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">

<jsp:useBean id="userinfo" class="webappw7.LoginBean" scope="request" />

<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<style>
    body {text-align:center;}
</style>
<title>Insert title here</title>
</head>
<body>
    <H2> Login Fail! </H2>
    <HR>
    사용자 아이디: <jsp:getProperty name="userinfo" property="userid" />
    <BR>
    사용자 패스워드: <jsp:getProperty name="userinfo" property="passwd" />
    <BR>
    에러 코드: <jsp:getProperty name="userinfo" property="error" />
</body>
</html>
```

**시험 문제**
서블릿속성, 간단한html, 등, 옮지않은거고르기

세션, 쿠키 서술 200%,    6장 50%, 56장 80%

> Nov 9 w9

## Using JDBC & DAO Pattern
### JDBC
Java DataBase Connectivity

Java 프로그램에서 다양한 종류의 database를 표준화된 방법으로 사용할 수 있도록 만든 API 규격

- application
- JDBC API
- JDBC Driver Manager
- Oracle/MySQL/MSSQL JDBC Driver
- DB

### DB 설치 및 설정
MySQL community server 5.7 설치
- 접속포트: 3306, 패스워드 kgu123

DB 생성

`mysql> CREATE DATABASE mydb CHARACTER SET=utf8;`

MySQL Connector/J 설치
- http://www.mysql.com/downloads/connector/j/
  - or C:\Program Files (x86)\MySQL\Connector.J 5.1
- JDBC for MySQL
- \webservice\WebContent\WEB-INF\lib 에 mysql-connector-java jar 파일을 복사

Eclipse 환경 구성
- Database Explorer 뷰 추가
  - Window > Show View > Data source explorer
- Connection 추가
```
New Connection Profile
MySQL
Name/Type: MySQL JDBC Drive 5.1

Jar list: Connector/J 연결

Drivers: Properties: General:
    Database: mydb
    URL: jdbc.mysql://localhost:3306/mydb
    User name: root
    Password: kgu123

Test Connection
```

Table 생성
create_table.sql 생성

```
New SQL File
/WebContent/ch08/create_table.sql

Database server type: MySql_5.1
Connection profile name: New MySQL
Database name: mydb

//code
```



### JDBC Programming
```
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.sql.*" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Event list</title>
</head>
<%
	request.setCharacterEncoding("utf-8");
	String jdbc_driver = "com.mysql.jdbc.Driver";
	String jdbc_url = "jdbc:mysql://localhost:3306/mydb?characterEncoding=utf8";
	
	Class.forName(jdbc_driver);
	Connection conn = DriverManager.getConnection(jdbc_url, "root", "kgu123");
	
	Statement stmt = conn.createStatement();
	String sql = "select id, title, owner from event";
	ResultSet rs = stmt.executeQuery(sql);
%>
<body>
	<h2>이벤트 목록</h2>
	<table border="1">
		<tr>
			<th>Index</th>
			<th>Title</th>
			<th>Owner</th>
		</tr>
		<% 
			while (rs.next()) {
		%>
		<tr>
			<td><%=rs.getInt("id") %></td>
			<td>
				<a href="event_view.jsp?id=<%=rs.getString("id")%>">
					<%=rs.getString("title") %>
				</a>
			</td>
			<td><%=rs.getString("owner") %></td>
		</tr>
		<%
			}
			rs.close();
			stmt.close();
			conn.close();
		%>
	</table>
	<br><hr>
	<form action="event_add.jsp" method="post">
		ID <input type="text" name="id" size=5>
		Title <input type="text" name="title" size=15>
		Owner <input type="text" name="owner" size=10> <br>
		Content <input type="text" name="content" size=40> <br>
		<input type="submit" value="이벤트 추가">
	</form>
</body>
</html>
```

```
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.sql.*" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Event add</title>
</head>
<%
	request.setCharacterEncoding("utf-8");
	String jdbc_driver = "com.mysql.jdbc.Driver";
	String jdbc_url = "jdbc:mysql://localhost:3306/mydb?characterEncoding=utf8";
	
	Class.forName(jdbc_driver);
	Connection conn = DriverManager.getConnection(jdbc_url, "root", "kgu123");
	
	String sql = "insert into event values(?,?,?,?)";
	PreparedStatement stmt = conn.prepareStatement(sql);
%>
<body>
	<h2>이벤트 추가</h2>
	ID : <%=request.getParameter("id") %> <br>
	Title : <%=request.getParameter("title") %> <br>
	Owner : <%=request.getParameter("owner") %> <br>
	Content : <%=request.getParameter("content") %> <br>
	<%
		stmt.setInt(1, Integer.parseInt(request.getParameter("id")));
		stmt.setString(2, request.getParameter("title"));
		stmt.setString(3, request.getParameter("owner"));
		stmt.setString(4, request.getParameter("content"));
		stmt.executeUpdate();
		stmt.close();
		conn.close();
	%>
	위 일정이 추가되었습니다.
	<br><a href="event_list.jsp">이벤트 목록 보기</a>
</body>
</html>
```

```
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.sql.*" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Event view</title>
</head>
<%
request.setCharacterEncoding("utf-8");
String jdbc_driver = "com.mysql.jdbc.Driver";
String jdbc_url = "jdbc:mysql://localhost:3306/mydb?characterEncoding=utf8";
	Class.forName(jdbc_driver);
	Connection conn = DriverManager.getConnection(jdbc_url, "root", "kgu123");
	
	Statement stmt = conn.createStatement();
	String sql = "select id, title, owner, content from event where id="
				+ request.getParameter("id");
	ResultSet rs = stmt.executeQuery(sql);
	rs.next();
%>
<body>
	<h2>이벤트 내용</h2>
	<table border="1">
		<tr>	<td>ID</td>
				<td><%=rs.getInt("id") %></td>	</tr>
		<tr>	<td>Title</td>
				<td><%=rs.getString("title") %></td>	</tr>
		<tr>	<td>Owner</td>
				<td><%=rs.getString("owner") %></td>	</tr>				
		<tr>	<td>Content</td>
				<td><%=rs.getString("content") %></td>	</tr>
	</table>
	<br><a href="event_list.jsp">이벤트 목록 보기</a>
</body>
</html>
```

근데안댐



Problem: DB에 연결하는 각 jsp에서 각자 작업
- DB 연결 등을 위한 코드 중복
  - jsp와 DB가 tight coupling을 가짐
- 수정/보수의 어려움
  - Event 정보를 DB 대신 file로 저장하도록 바꾸면?

Use DAO Pattern

> Nov 16 w10

```
DBEventDAO.java

package myapp.ch08;

import java.sql.*;
import java.util.ArrayList;

public class DBEventDAO implements EventDAO {
	private String jdbc_driver = "com.mysql.jdbc.Driver";
	private String jdbc_url = "jdbc:mysql://localhost:3306/hydb?characterEncoding=utf8";
	private Connection conn;
	private Statement stmt;
	
	private void connect() {
		try {
			Class.forName(jdbc_driver);
			conn = DriverManager.getConnection(jdbc_url, "root", "kgu123");
			stmt = conn.createStatement();
		} catch (Exception e) {
		}
	}
	
	private void disconnect() {
		try {
			stmt.close();
			conn.close();
		} catch (Exception e) {
		}
	}
	
	public void addEvent(EventBean event) {
		String sql = "insert into event values('"
				+ event.getId() + "', '"
				+ event.getTitle() + "', '"
				+ event.getOwner() + "', '"
				+ event.getContent() + "')";
		try {
			connect();
			stmt.executeUpdate(sql);
			disconnect();
		} catch (Exception e) {
		}
	}
	
	public ArrayList<EventBean> getAllEvent() {
		String sql = "select id, title, owner from event";
		ArrayList<EventBean> list = new ArrayList<EventBean>();
		try {
			connect();
			ResultSet rs = stmt.executeQuery(sql);
			while(rs.next()) {
				EventBean event = new EventBean();
				event.setId(rs.getInt("id"));
				event.setTitle(rs.getString("title"));
				event.setOwner(rs.getString("owner"));
				event.setContent(rs.getString("content"));
			}
			rs.close();
			disconnect();
		} catch (Exception e) {
		}
		return list;
	}

	
	public EventBean getEvent(String id) {
		String sql = "select id, title, owner, content from event where id=" + id;
		EventBean event = new EventBean();
		try {
			connect();
			ResultSet rs = stmt.executeQuery(sql);
			rs.next();
			event.setId(rs.getInt("id"));
			event.setTitle(rs.getString("title"));
			event.setContent(rs.getString("content"));
			rs.close();
			disconnect();
		} catch (Exception e) {
		}
		return event;
	}
}
```

```
EventBean.java
package myapp.ch08;

public class EventBean {
	private int id;
	private String title;
	private String owner;
	private	String content;
	
	public String getContent() {
		return content;
	}
	public void setContent(String content) {
		this.content = content;
	}
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	
	public String getOwner() {
		return owner;
	}
	public void setOwner(String owner) {
		this.owner = owner;
	}
	
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
}
```

```
EventControl.java
package myapp.ch08;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/EventControl")
public class EventControl extends HttpServlet {	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doPost(request, response);		
	}
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		EventDAO dao = new DBEventDAO();
		String address = null;
		request.setCharacterEncoding("utf-8");
		
		String action = request.getParameter("action");
		if (action == null || action.equals("list")) {
			ArrayList<EventBean> list = dao.getAllEvent();
			request.setAttribute("eventlist", list);
			address = "/ch08/eventview_list.jsp";
		} else if (action.equals("view")) {
			EventBean event = dao.getEvent(request.getParameter("id"));
			request.setAttribute("event", event);
			address = "/ch08/eventview_view.jsp";
		} else if (action.equals("add")) {
			EventBean event = new EventBean();
			event.setId(Integer.parseInt(request.getParameter("id")));
			event.setTitle(request.getParameter("title"));
			event.setOwner(request.getParameter("owner"));
			event.setContent(request.getParameter("content"));
			dao.addEvent(event);
			request.setAttribute("event", event);
			address = "/ch08/eventview_add.jsp";
		}
		RequestDispatcher dispatcher = request.getRequestDispatcher(address);
		dispatcher.forward(request, response);
	}
}
```

```
EventDAO.java
package myapp.ch08;
import java.util.ArrayList;

public interface EventDAO {
	public void addEvent(EventBean event);
	public EventBean getEvent(String id);
	public ArrayList<EventBean> getAllEvent();
}
```

```
eventview_add.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<jsp:useBean id="event" class="myapp.ch08.EventBean" scope="request" />
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Event add</title>
</head>
<body>
	<h2>이벤트 추가</h2>
	ID: <jsp:getProperty name="event" property="id" /> <br>
	Title: <jsp:getProperty name="event" property="title" /> <br>
	Owner: <jsp:getProperty name="event" property="owner" /> <br>
	content: <jsp:getProperty name="event" property="content" /> <br>
	위 일정이 추가되었습니다.
	<br><a href="/hy_webapp_w5/EventControl?action=list">이벤트 목록 보기</a>
</body>
</html>
```

```
eventview_list.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="myapp.ch08.EventBean"%>
<jsp:useBean id="eventlist" class="java.util.ArrayList" scope="request" />
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Event list</title>
</head>
<body>
	<h2>이벤트 목록</h2>
	<table border="1">
		<tr>
			<th>Index</th>
			<th>Title</th>
			<th>Owner</th>
		</tr>
		<%
			for (int i=0; i<eventlist.size(); i++) {
				EventBean event = (EventBean)eventlist.get(i);
		%>
			<tr>
				<td><%=event.getId() %></td>
				<td>
					<a href="EventControl?action=view&id=<%=event.getId() %>">
						<%=event.getTitle() %>
					</a>
				</td>
				<td><%=event.getOwner() %></td>
			</tr>
		<%	}%>
	</table>
	<br><hr>
	<form action="/hy_webapp_w5/EventControl" method="post">
		ID <input type="text" name="id" size=5>
		Title <input type="text" name="title" size=15>
		Owner <input type="text" name="owner" size=10> <br>
		Content <input type="text" name="content" size=40> <br>
		<input type="hidden" name="action" value="add">
		<input type="submit" value="이벤트 추가">
	</form>
</body>
</html>
```

```
eventview_view.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<jsp:useBean id="event" class="myapp.ch08.EventBean" scope="request" />
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Event view</title>
</head>
<body>
	<h2>이벤트 내용</h2>
	<table border=1>
		<tr>
			<td>ID</td>
			<td> <jsp:getProperty name="event" property="id" />
			</td>
		<tr>
			<td>Title</td>
			<td> <jsp:getProperty name="event" property="title" />
			</td>
		<tr>
			<td>Owner</td>
			<td> <jsp:getProperty name="event" property="owner" />
			</td>
		<tr>
			<td>Content</td>
			<td> <jsp:getProperty name="event" property="content" />
			</td>
		
	</table>
	<br><a href="/hy_webapp_w5/EventControl?action=List">이벤트 목록 보기</a>
</body>
</html>
```

```
create_table.sql
create table event (
	id		int primary key,
	title	varchar(50),
	owner	varchar(50),
	content	varchar(200)
);

insert into event values(1,'a','a','a');

select * from event;
```

> Nov 30 w12

지난 주 필기 사라짐

발표 준비 얘기: 앱 주제, 필요성, (중략) 발표 자료를 형식에 맞춰서, 소스 코드도

기말고사: 12/13(수) PM 5 -> 시간을 바꾸려고 하는데... 확정되면 알려드림.

익스프레셔 랭귀지, 커스탬 태그를 지난주에 했는데

태그 파일, 태그 핸들러

## JSTL
JSTL(JSP Standard Tag Library)은 커스텀 태그 라이브러리 기술을 이용해서 일반적으로 필요한 기능들을 표준화한 것으로 크게 핵심(CORE), xml, I18N(국제화), 데이터베이스(SQL), 함수(functions) 라이브러리로 구성된다.

커스텀 태그 기반이므로 JSTL을 사용하는 방법은 일반적인 커스텀 태그와 같다.

다운로드 : http://tomcat.apache.org/taglibs/standard/

taglib 지시어 사용법(core 라이브러리의 경우)

```
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
```

JSTL은 태그가 제공하는 기능의 성격에 따라 5가지 주요 라이브러리로 구분된다.

- core
  - prefix c
- xml
  - prefix x
- I18L
  - prefix fmt
- database
  - prefix sql
- function
  - prefix fn

### JSTL 설치
tomcat.apache.org/taglibs/standard/에서 1.2 버전을 다운로드

taglibs-standard-impl-1.2.5.jar , taglibs-standard-spec-1.2.5.jar 를 \WEB-INF\lib 에 복사

### 핵심 라이브러리의 주요 태그
`<c:out>` 태그
- 초기에는 jsp 표현식(<%= %>)을 대체하기 위해 개발 되었으나 표현언어가 JSP에
기본으로 제공 되면서 사용 빈도는 줄었으나 몇몇 옵션은 유용하게 사용할 수 있다.
- 사용법
- 태그 바디가 없는 경우
```
<c:out value=“value” [escapeXml=“{true|false}”] [default=defaultValue”]/>
```
- 태그 바디가 있는 경우
```
<c:out value=“value” [escapeXml=“{true|false}”]>
default value (value에 내용이 없을 때 출력될 기본 값)
</c:out>
```

`<c:out value=“${member.name}"/>` 은 `${member.name}`로 대체할 수 있음.

`<c:catch>` 태그

- <c:catch> 태그는 바디에서 실행되는 코드의 예외를 처리한다.
- JSP를 뷰 역할에 충실하게 프로그래밍 한다면 크게 사용할 일은 많지 않다.
- 사용법
```
<c:catch [var=“varName”]>
nested actions
</c:catch>
```

`<c:forEach>` 태그
- 반복문과 관련된 태그로 자바의 for 문과 유사하다. 가장 중요하고 널리 쓰이는
JSTL 태그 중 하나임.
- 사용법
- 컬렉션 객체의 크기만큼 반복
```
<c:forEach[var="varName"] items="collection" [varStatus="varStatusName"]
[begin="begin"] [end="end"] [step="step"]>
body content
</c:forEach>
```
- 지정된 횟수 반복
```
<c:forEach [var="varName"] [varStatus="varStatusName"] begin="begin" end="end"
[step="step"]>
body content
</c:forEach>
```
- varStatus는 반복 과정에서 프로그램적으로 필요한 여러 정보를 제공함.
- 자바 언어에서의 for와 같은 자유도는 없기 때문에 모든 반복 처리에 `<c:forEach>`를 사용하기는 어렵고 데이터 생성시 `<c:forEach>`에서 처리되기 편리한 형태로 가공해주는 것이 필요하다.

`<c:forEach>` 속성 값

## Web Application Deployment
- 개발자 환경과 서비스 제공 환경을 분리
  - Java EE 표준 스펙을 준수할 경우, 동일 애플리케이션은 서로 다른 벤더 컨테이너에서 수정 없이 실행 가능
- In 개발 서버
  - 개발 환경에 적합한 디렉토리 구조 내에서 개발
- In 운영 서버
  - Web application directory 구조 규칙 준수
```
                  deployment
                  war file
Eclipse + Tomcat    →→→     Tomcat
                     x
Eclipse + Tomcat    →→→     WebLogic
개발 서버                   운영 서버
coding                      service
testing
```

### Web Application Directory 구조
classes 디렉토리가 생긴다던가 하튼 다름

어떻게 다른가 -> 톰캣에서 앱이 어떻게 돌아가는지를 알아야

```
tomcat
- webapps
  - jspbook (Context Root: main directory of app)
    - META-INF
    - WEB-INF
      - lib
      - classes (Include Servlet, beans, classes)
        - jspbook
          - ch08
            - EventControl.class
            - EventBean.class
            - EventDAO.class
      - web.xml (Deployment Descriptor)
    - webcontent에 있던 파일들: e.g.
    - Form.html
    - ch08

  - scheduler (another app)
```

이렇게 하기 싫어서 WAR 파일을 만들었어요

### Deploy & Run: War File
- Web APplication aRchive
- 웹 앱에 필요한 html, jsp, servlet, class, lib 등을 포함한 압축 파일
- JAR 파일과 유사
```
tomcat
- webapps
  - jspbook.war
```

Eclipse에서 WAR file 생성하기: File > Export > Web > WAR file

Deploy
1. Tomcat 디렉토리에 war를 카피
1. Tomcat Manager 이용 설정: http://localhost:8080/manager/html 로 tomcat manager 접근

-> 이렇게 하면 톰캣에서 직접, 이클립스와 상관 없이, 애플리케이션을 돌리는거고

### Deploymenet Descriptor (DD)
- 웹 애플리케이션의 기본적인 설정을 포함하는 파일
- WEB-INF/web.xml
- 사용 이유
  - 컨테이너 호환성 유지
  - 효율적 유지 보수
    - 초기 파라미터 설정 등
  - 유연한 애플리케이션 운영
    - 코드 수정 없이 서블릿 매핑 등을 조정

이걸 쓰면, 표준화되어있기 때문에, 어떤 xx를 쓰던지 관계없이 돌릴 수 있다

```
web app name
Servlet 정보
Servlet mapping
초기 parameter
directory url 요청 시 보여줄 file 지정
```

예전엔 이렇게 했는데, 요즘은 어노테이션 기반으로 바뀌었기 때문에, 잘 안씀

### URL 관리
Client가 직접 access할 수 있는 컨텐츠는 따로 분리; 주로 html 문서와 jsp 위치

```
http://localhost:8080/jspbook/ch08/event_list.jsp
- 파일이 있고 클라이언트의 요청을 받아들이는 경우
http://localhost:8080/jspbook/WEB-INF/classes/jspbook/ch08/EventControl.class
- 톰캣에서는, WEB-INF 밑으로 들어가는 것을 막아놓았다. 보안 이슈도 있고.
- 404.
```

친절하게 풀어 설명해주시는 교수님 순서
김남기교수님 -..- 김희열교수님 - 이은정교수님

WEB-INF 내에 있는 컨텐츠 access
- Client에 의한 직접적인 access는 금지
- 다른 웹 app 구성 요소는 access 가능
- 주로 servlet 및 class파일, 일부 jsp 포함
사용자가 servlet을 직접 access하려면?
- DD에 `<servlet-mapping>` 기술

```
<servlet>
    <description>
    </description>
    <display-name>EventControl</display-name>
    <servlet-name>EventControl</servlet-name>
    <servlet-class>jspbook.ch08.EventControl</servlet-class>
</servlet>
<servlet-mapping>
    <servlet-name>EventControl</servlet-name>
    <url-pattern>/EventControl</url-pattern>
</servlet-mapping>

                Context Root  Url pattern에 적용
                      |     | |          |
http://localhost:8080/jspbook/EventControl

-> load class
```

## Web Application Security

CS 155 Spring 2010 

John Mitchell

### Reported Web Vulnerabilities "In the Wild"

### Three top web site vulnerabilites Three top web site vulnerabilites
-SQL Injection
  - Browser sends malicious input to server
  - Bad input checking leads to malicious SQL query
  - **Uses SQL to change meaning of database command**
-CSRF – Cross-site request forgery
  - Bad web site sends browser request to good web site using credentials of an innocent victim site, using credentials of an innocent victim
  - **Leverage user's session at victim server**
- XSS – Cross-site scripting
  - Bad web site sends innocent victim a script that steals information from an honest web site
  - **Inject malicious script into trusted context**

### General code injection attacks General code injection attacks
- Attack goal: execute arbitrary code on the server
- Example
  - code injection based on eval (PHP)
  - http://site.com/calc.php (server side calculator)
```
...
$in = $_GET[‘exp'];
eval('$ans = ' . $in . ';');
...
```
- Attack
  - http://site.com/calc.php?exp=" 10 ; system('rm *.*') " (URL encoded)

### Code injection using system() Code injection using system()
Example: PHP server-side code for sending email

```
```

Attacker can post

```
```

or

```
```

### SQL Injection
#### Database queries with PHP (the wrong way)
Sample PHP

```
$recipient = $_POST['recipient'];
$sql = "SELECT PersonID FROM Person WHERE
  Username='$recipient'";
$rs = $db->executeQuery($sql);
```

Problem: What if 'recipient' is malicious string that changes the meaning of the query? 

#### Basic picture: SQL Injection
#### Example: buggy login page (ASP)
```
```

Is this exploitable?

### Preventing SQL Injection
preparedStatement를 쓰면 매핑할때 체크가 가능하다더라

User ORM framework

### Cross Site Request Forgery
Recall: session using cookies

Basic Picture

#### Cross Site Request Forgery

### Cross Site Scripting (XSS)

시험범위: 방금 배운곳까지
