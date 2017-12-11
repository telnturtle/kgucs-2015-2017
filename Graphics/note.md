# Computer Graphics
- 전준철
- jcchum@kgu.ac.kr
- giplab.kyonggi.ac.kr
- 교재
  - 컴퓨터 그래픽스 배움터
  - 생능 최문철
  - OpenGL
- Office hour
  - 11:00-12:00 Wed
  - 15:00-16:00 Thu
  - 다른 시간은 약속하고 오세요
- Grading
  - 중간 0.3 기말 0.3
  - maybe Project and Assignments 0.2
  - 출석 0.2
    - 출석 걱정은 덜해도 되지만 0..3결석하면 20..17점, 4결석하면 F
    - 결석 이유 => 상담
  - Objective
    - CG 기본 이해
    - 응용분야 이해 및 적용
    - OpenGL 이해 및 사용을 통한 개발능력 확보
      - 익숙해지세요
      - Commands를 외울 필욘없고요 가져다쓰세요

> 수업이 재밌진 않지만 이건 들어야해

> Sep 6

### Graphics  -s
- 뒤에 s가 붙은건 과학이에요 Physics mathematics etc
- 과학 이해가 필요합니다
- World -> modeling -> Model -> rendering -> Display

### Photo-realistic
### Graphics Process
- Geometric Models
  - Attributes
    - Points
    - Lines
    - Surfaces
  - Input
    - 3D scanner
    - Model libraries
- Texture Models
  - Attribute
    - Intensity / color
    - Pixels
  - Input
    - Scanner
    - Image libraries
    - Camera
    - Paint
- Rendering 
  - Transformation
  - Image generation
- Image Display
  - Hardware
  - Frame buffer
  - Display
  - Storage

학기 끝나면 3D object 매핑할줄알게됨
### Two Dimensional Image
- x, y
- Images are made up of pixels
- 3D -> 2D

Vision (해석), 3D Model, Graphics (2D Image), 들은 영역이 겹칩니다

### History of Computer Graphics
- VectorScope(51')
- Spacewars: first CG game (61')
- First CAD system (IBM 59')
- Sketchpad: first interactive graphics (61')
- Movies...
> Term project: 별끼리 충돌, 불꽃놀이 해온사람 있었음
- Morphing
- Cloning
- Rotoscoping
  - face replacement
- Avatar (09')
- 구미호, 괴물, D-War, 해운대.
- Frozen (14')가 안나오다니!

### CG Applicatoin
- Movie, animation
  - Full 3D
  - "Traditional"
- Image processing
- Science analysis and visualization
- Simulations
- Computer aided design
- User interfaces
- Physics based modeling
- Modeling / particle system
- VR / AR

> 한컴에 많이가요, 데려와달라고?

### Nonphoto Realistic Rendering
모자이크 같은거 소개

연구실 소개

너무 길게 하신다

교수님은 해부학 장인이었다

opengl.org -> library download

> Sep 13 w2

졸린 하루

비디오 몇 개 보여줌. 선배들 과제 학부 선배

TP로 할까 일반 과제로 할까 아직도 고민중이에요

Marked AR 거북이 조이스틱

증강현실 안어려워요 툴 써요

당구공 (거의 물리인데) 텍스처 매핑 충돌

3D paint 도형, color pickler, 3d 움직임, 텍스처 매핑, 안드로이드 앱

모바일 증강현실 종이에 컨트롤러 그려놓고 버튼 -> 3d model color

## Computer Graphics System
### Graphics H/W
- Processor: CPU and Graphics accelerator
- Memory: System memory and Frame buffer
- Input/Output device

#### Display Device
- CRT (Cathode Ray Tube)
  - Electron gun project to screen
  - Persistence of phosphors
  - Low persistence: 애니메이션에 적합
  - High persistence: Highly complexm, static picture에 적합
  - Flicker 현상 (깜빡임) 을 방지하기 위해 crt screen을 주기적으로 활성화 (refresh)
- LED (Light emitting diode)
- LCD (Liquid Crystal Display)

### Raster Graphics device
- 오늘날 대부분의 모니터
- 셰이딩과 컬러링에 적합하다
- Raster: set of horizontal scan lines
- Coloring by pixel
- Alias = 계단현상 = Jaggies
- Rasterization = Scan conversion
  - Object coordinates to display coordinates
  - float to int coords

#### Color monitor
- Shadow mask  방식: Raster-scan 모니터에서 주로 사용
- 용어
  - 인점 (phosphor dots)
  - 종횡비 (aspect ratio)
  - 해상도 (resolution)
  - 도트 피치 (dot pitch): 동일선상의 인점 사이의 거리
    - 픽셀간 간격이 크면 같은 resolution 이라도 흐리게 보임
  - Triad, Stripe

#### 주사선과 인터레이싱
- 주사선 (scan line): 화면의 가로방향 화소를 따라서 진행하는 선
- 인터레이싱 (Interlacing, Interleaving): 주사선이 화면을 반 쪽 씩 교대로 그려내는 것
- Hz: 30 Full fps 보단 60 half fsp
- NTSC TV Standard: 60 half fps, 525 scan ilne, 4:3 aspect ratio

#### Non-Interlacing vs Interlacing
검은색 컵과, 같은 그림에 흰 줄이 그어져 있는 그림

#### Frame buffer
- = Color buffer = Video memory
- DAC (Digital Analog Converter) in video controller
  - Digital data in frame buffer to analog voltage
  - 거의 동시 (매우 빠름)

#### Depth of the frame buffer
- 3 -> RGB
- 24-bit RGB
  - 256 gray levels for each of R, G, and B
  - r,g,b 8,8,8-bit
  - 256x256x256 = about 16M (Full color)
  - 사람의 눈 35만개 정도 구분

### Vector Graphic Device
- Line-drawing application에 적합하며 realistic shaded scene에는 부적합하다
- High-resolution 가능!
- smmoth ilne drawing
- line-drawing commands (display file program)
- = calligraphic display, stroke display, random display
- Beam penetration 방식: Random-scan(벡터모니터) monitor 에서, 2 layers of hposphor
- 화소개념 없음
  - 무한 해상도 (전자빔의 폭 -> 해상도)
  - 애일리어싱 없음
  - 전자총의 움직임
- 프레임버터 없음
- 디스플레이 리스트: 명령어 집합
  - 프레임 버퍼보다 소용량
  - e.g. Loop:
    - moveto(10,10)
    - lineto(40,30)
    - lineto(40,10)
    - lineto(10,10)
    - goto Loop

### Raster graphics vs Vector graphics
- Alias 발생 vs 없음
- 채움 다각형: 빠른 렌더링 vs 느린 렌더링
- 래스터 변환: 필수 vs 불필요함
- 메모리: 대용량 프레임 버퍼 vs 소용량 디스플레이 리스트

### Graphics Processor
#### Raster-scan system
  - graphics application program이 실행되어 display file이 생성되어 system memory에 저장된다
  - 이것은 디스플레이 프로세서의 이해 매 refresh cycle 마다 모니터에 디스플레이된다
```
CPU     System memory (display file)    display processor  ->  monitor
 |                   |                          |
                   System bus
                     |
                   I/O device
```

#### Raster-scan system
- 그래픽스 명령어들이 실행되면, 픽셀 이미지 형태로 프레임 버퍼에 저장된다
  - pixel -> scan line -> raster
  - scan conversion = rasterization
- 비디오 컨트롤러는 프레임 버퍼 데이터를 주기적으로 모니터에 활성화한다
```
            Frame buffer    ->      video controller  ->  monitor
                     |
CPU         display processor       System memory (display file)
 |                   |                          |
                   System bus
                     |
                   I/O device
```


#### GPU
- 디스플레이 프로세서
  - 2차원 (윈도우, 비트블록)
  - 3차원 (다각형 채움, 텍스처 매핑)
- 지오메트리 프로세서
  - 3차원 기하처리 가속
- 비디오 컨트롤러
  - DAC's
  - LUT
```
       main memory
-AGP-> DRAM       CPU      i/o device
|       |          |        |
|  <------system bus------------>
|       |          |
-----> display    geometry
       processor  processor
        |
        |
       display memory, frame buffer  ->  video       ->  monitor
       VRAM                              controller
```

### 입력장치
- 2차원
  - 3d, 2d 마우스 
  - 타블릿과 스트일러스
  - 조이스틱
  - 라이트 펜
- 3D digitizer and 3D scanner

### 하드카피 출력장치
#### Printer
- impact printer: dot matrix
- nonimpact printer: ink-jet, laser
  - 레이저 프린터는, 벡터 방식으로 프린트하기 위해 PostScript 표준을 따른다
- 컬러 모니터: CMY, CMYK 컬러모델
  - Cyan, Mageta, Yellow, Black

#### Plotter
#### Motion Capture Device

### Graphcis Software
#### Graphisc Library
- OpenGL, DirectX,
- output primitives 와 attribute: live, polygon, circle, curved line, character string, et cetra
- 그래픽스 오브젝트의 모델링, 기하변환, 뷰잉변환
- object's shading, rendering
- logical picture object unit: segment(GKS), object(opengl)
- 입력장치로부터 상호대화식 데이터 입력: callback funcfion

#### Graphcis Standards
- API: calling graphics libraries in high-level programming languages
  - OpenGL:de facto standard
- Device interface: I/O 장치와 표준 방식으로 상호 소통한다
- 그래픽 데이터의 교환: 그래픽스 응용프로그램간에 그래픽 데이터의 교환 및 저장

#### Hierarchical API, device and graphcis data standard
  - Graphics app program
  - graphics library
  - device interfaces
  - device print
  - mouse, monior, ...

### Graphcis Library
Hierarchical.. grouping

OO graphics

scene graph

VR concept

## OpenGL
- Window independent
- OS independent
- very fast
- Advantages
  - stability
  - reliability and portability
  - scalability
  - easy of use
  - well-documented
### OpenGL Rendering Pipelines
- there are two paths of data flow 
  - pixel-based, image primitives pipeline
  - geometric, vector based primitives pipeline
- Texturing combines the two types of primitives together.
#### Architecture
```
Imaging path
Image ------------> Unpack pixels ----> Pixel Operation ---> Image rasterization
               ^                         |                       v
      Display Lists                      -> texture memory---|  frangment operations -> to frame buffer
               |                                             |   ^
geometry path  v                                             v   |
geometry ---------> unpack verticles -> vertex operations -> geometric rasterization
```
#### Rendering
```
Geometric primitives -> 
Image primitives     -> Rendering -> Frame buffer
```
주전자모양 + 풍경사진 = 주전자에 사진 입혀짐

#### OpenGL is Not a language, it is a  graphcis rendering API
Whenever we say that a program is OpenGL-based or OpenGL applications, we mean that it is written in some programming language (such as C/C++) taht makes calls to one or more of OpenGL libraries

### Libraries
- 프레임버퍼에 그림을 기리는 GL, GLU
  - GL: 메인, prefix "gl"
  - GLU: 고급 유틸리티, prefix "glu"
- 윈도우를 생성하거나 유저 인터랙션을 처리하는 AUX, GLUT
  - app. program과의 인터페이스 툴킷 라이브러리, prefix "aux"
  - 인터페이스 툴킷 라이브러리, 처음에는 X-윈도우에서, 현재에는 다양한 플랫폼
#### OpenGL APi Heirarchy
#### Data types
```
GLshort A [10];   <=> short A[10];
GLdouble B;       <=> double B;
```
#### An example of openGL function naming
glcolor3f(...)
- gl library
- root command: color
- number of arguments: 3
- type of args: f

#### 함수들 참고
Init -> init

Flush() -> 화면에 뿌리기

### ASSIGNMENTS
ppt 소스 복불, 빌드해보세요

그 사각형 종이 제출

> VS에서 하는법 설명 -> ppt 확인

연구실 홍보

지명근? 박서희 찾아오래

학부학생인데 opengl 시켜놨다고.. 대답해줄거라

연구실로 8502로 바꼈어요

### OpenGL 주요 함수
Transformation - viewing transformation

### Visual Studio 에 openGL 설치하기
https://mooneegee.blogspot.kr/2015/02/opengl.html

담당교수가 올린 pdf에 설명이 자세하다

> Sep 20 w3

## Basic Math for Computer Graphics
define basic primitives
- Line segments
- polygons

### Basic Elements
#### Coordinate-free Geometry
- Points were at locations in space p=(x,y,z)
- This approach was nonphysical
  - Most geometric results are independent of the coordinate system

### Scalars
### Linear Vector Spaces
- Operations
  - Scalar-vector multiplication `u=tv`
  - Vector-vector addition: `w = u + v`

Make sense in a vector space

#### Vectors Lack Position
These vectors are identical, same length and magnitude

Vectors spaces insufficient for geometry, need points

### Points
- Location in space
- Operations allowed between points and vectors
  - Point-point subtraction yields a vector
  - Equivalent to point-vector addition. `v=P-Q`, `P=v+Q`
  - Vector-point addition yields a point

### Spaces
- Contains a set of objects
- Define a set of mathematic operations
- **Vector space** is a subset of **Affine space**, **Affine space** is a subset of **Eucildian space**

#### Vector Space
- Contains two types of objects: *scalars* and *vectors*
- Defines mathematic operations on them
  - scalar addition and multiplication => scalar
  - scalar-vector multiplication => vector
  - vector-vector addition => vector
- Must exist a zero vector (0)
- Vector space can describe the direction and magnitude of a quantity, but lacks any geometric concepts, such as location, distance... (Figure: Identical vectors at different positions)
- So, we need additional contraint(s)

#### Vector
- Every vector has an inverse
-  Head-to-Tail Rule
  - To add vector v to vector u Move vector v (keeping its length and orientation the same) until its tail touches the head of u. The sum is the vector from the tail of u to the head of v. 
  - The sum of any two vectors is a vector

#### Affine Space
- Contains three types of objects: *scalars*, *vectors*, and *points*.
- Defines mathematic operations on them
  - point-point subtraction => vector
  - vector-point addition => point

#### Lines
- Consider all pionts of the form
  - P(t)=P0 + tV
  - Set of all points that pass through P0 in the direction of the vector **V**

#### Parametric Form
- This form is known as the parametic form of the line
  - More robust and general than other forms
  - Extends to curves and surfaces
- Two-dimensional forms
  - explicit: y = mx + b
  - implicit: ax + by + c = 0
  - parametric: x(t) = tx0 + (1-t)x1, y(t) = ty0 + (1-t)y1

#### Parametrized line
Let: P0 is a Point, V is a arbitrary vector, and t is a arbitrary scalar.

Then: P(t) = P0 + tV, is a point for any value of t. All there points lie on a line that defined by P(t).

This form is called the parametric form of line.

We can generate points on the line by varying the parameter t e.g.
```
t = 0,   P(t) = P0
t = 1,   P(t) = P0 + V
t = 0.5, P(t) = P0 + 0.5V
```

#### Rays and Line Segments
- Ray: 카메라(눈, 포인트)에서 오브젝트(포인트)를 바라보는 선분 (그니까 벡터 ㅇㅇ)
- 파라메타 조정하면 P와 Q 사이 모든 점을 구할 수 있음

If t >= 0, then P(t) is the *ray* leaving P0 in the direction d. If we use points to define V, then, P(t) = Q + t(R-Q) = Q + tV = tR + (1-t)Q. For 0<=t<=1 we get all the points on the *line segment* joining R and Q.

### Convexity
convex(볼록), concave(오목)

An object is *convex* iff for any two points in the object all points on the line segment between these points are also in the object

### Affine Sums
Consider the "sum" P=t1P1+t2P2+...+tnPn can show by induction that this sum makes sense iff t1+t2..tn=1 in which case we have the *affine sum* of the points P1,P2..Pn. If, in addition, ti>=0, we have the *convex hull* of P1,P2..Pn.

### Convex Hull
- Smallest convex object containing P1,P2..Pn
- Formed by "shrink wrapping" points

### Curves and Surfaces
Curves are on eparameter entities of the form P(t) where the functino is nonlinear

Surfaces are formed from two-parameter functions P(alpha, beta). Linear functions give planes and polygons.

직선, 커브는 매개변수가 하나. 서페이스는 파라메타가 두 개

점 100개 있는 곡선: segment로 쪼개서 (4, 5개 점)

x(t) y(t) z(t) t값이 변하며 t를 .1마다, 혹은.01마다 계산했느냐에 따라서 부드럽기가 다르겠지 쨌든 점들 모아서 곡선 만듦

### Planes
벡터 두 개를 알면 면을 만든다

A plane can be defined by a point and two vectors or by three points

### Normals
면을 이루는 두 벡터를 크로스 프로덕트 하면 노말 벡터를 만든다. 물체가 눈에 보이는가 여부, 보여지는 색상 등 결정하는데 쓴다.

### Dot Product
Let u, v are two vectors then
- u dot v = |u||v| cos theta
- u dot v = v dot u
- (au + bv) dot w = au dot w + bv dot w
- v u > 0 if v is not 0
- 0 dot 0 = 0
- |u|^2 = u dot u
- u dot v = u1v1 + u2v2 + u3v3 where u = (u1,u2,u3) and v = (v1,v2,v3)

### Vector Angle Measurement
Let u, v are two vectors then

cos theta = u.v / |u||v|

measures the angle bertween the vectors

if u.v=0 then theta = 90degree, the vectors are **orthogonal**

### Vector Magnitude Measurement
- vector magnitude |u|^2 = u.u
- vector normalization: Given a vector u, we want to create a **unit vector** that has a magnitude of 1 and has the same direction as u e.g. u_normalized = u / |u|

### Cross Product
Let u, v are two nonparallel vectors, then the *cross product* gives a third vector, w, that is orthogonal to both u, v, e.g. w = u x v

w . u = w . v = 0

|sin theta| = |u x v| / |u|x|v|

Let vectors u = (u1,u2,u3) and v = (v1,v2,v3) then the **cross product** is w = u x v = 

( u2v3-u3v2 )

( u3v1-u1v3 )

( u1v2-u2v1 )

We can also represent the cross product as 

w = u x v = 

( 0 -u3 u2 ) ( v1 ) 

( u3 0 -u1 ) ( v2 )

( -u2 u1 0 ) ( v3 )

전자: skew symmetric matrix

### Right-handed Coordinate
Cross product defines a Right-handed coordinate system

u x v = w, (u,v,w) = (thumb,index,middle)

### Matrix
A matrix is an N x M array of scalars, arranged conceptually as N rows and M columns

-properties
  - A+B = B+A
  - A+(B+C) = (A+B)+C
  - A * (B * C) = (A * B) * C
  - A * B != B * A
  - A * I = I * A = A
- square matrix: N == M
- identity matrix: a square matrix with 1s on the diagonal and 0s elsewhere
- transpose matrix

### Matrix Operations
- addition
- multiplication: 아이덴티티 제외, 교환법칙 성립 안 함. 매트릭스x벡터=벡터.
- transpose: A^T = [a _ij]^T = [a _ji]
  - (alphaA)^T = (alpha)A^T
  - (A+B)^T = A^T+B^T
  - (A^T)^T = A
- inverse: X = A^-1b if Ax = b
  - A^-1A = AA^-1 = I
  - (AB)^-1 = B^-1A^-1
  - These statements are equivalent:
  1. A^-1 does not exist
  1. A is *singular*
  1. There exists a non-zero vector x s.t. Ax = 0
  1. det(A) = 0

### 2D Cartesian Reference System
Two-dimensional Cartesian reference frames
- coordinate origin at the lower-left screen corner
- coordinate origin in the upper-left screen corner

### Polar Coordinates
가장 많이 쓰이는 non-Cartesian system

x = r cos theta, y = r sin theta

r = sqrt $ x^2+y^2, theta = arctan $ y/x

s = r theta

### Why Polar Coordinates?
Circle
- 2D Cartesian: 비균등 분포. dx가 같다면 점들이 균등하게 분포하지 않는다
- polar coordinates: 연속된 점들 사이에 일정 간격 유지

### 3D Cartesian reference frames
Three dimensional points

오른손 좌표계는 대부분의 그래픽스 패키지에서 표준

왼손 좌표계는 관찰자로부터 얼마만큼 떨어져 있는지 나타내기에 편리하고, 비디오 모니터의 좌표계다

### 3D Non-Cartesian System
- Cylindrical coordinates
  - x = rho cos theta
  - y = rho sin theta
  - z = z
- Spherical coordinates
  - x = r cos theta sin phi
  - Y = r sin theta sin phi
  - x = r cos phi

### 이차원 그래픽스
- 점, 선, 다각형, 원, 타원, 곡선의 정의와 어트리뷰트, 주사변환(scan conversion): primitives to raster-picture transition, anti-aliasing
- point
  - (x,y)
  - attributes: size, intensity or color, shape
- line
  -starting point and end point or starting point 와 증가값 (델타엑스, 델타와이)의 상대좌표로 정의한다
  - line type, width, color, line cap, et cetera
- polyline
- scan conversion
  - converting a picture definition or a model, into pixel intensity values
  - what we want?
    - continuous appearnace
    - uniform thickness and brightness
    - pixels near the ideal line are "on"
    - speed

### DDA (Digital differential analyzer) 알고리즘 개요
let line y = mx + c then

0 <= m <= 1: x가 1이증가하면 y는 m이 증가

m > 1: 반대로 y를 1을 증가하면 x가 1/m이 증가

m < 0: x 증가에 따라 y가 증가 대신 감소

- 특징: 부동소수 연산, 정수연산보다느림, 반올림연산, round()는 느림
- 정확도: 부동소수의 뒷 자리는 잘라냄, 연속적인 덧셈은 오류를 누적, 선택한 화소가 실제 선분에서 잠처 멀어져서 표류 (drift)
- 알고리즘
```
void LineDraw(int x1, int y1, int x2, int y2) {
    float m, y; int dx, dy;
    dx = x2 - x1; dy = y2 - y1;
    m = dy / dx;
    y = y1;
    for (int x = x1; x <= x2; x++) {
        DrawPixel(x, round(y));
        y += m;
    }
}
```

### Bresenham 선 그리기 알고리즘
- Only integer add and shift opeeration!
- Standard algorithm used in H/W and S/W rasterizers
- 알고리즘: 선분이 두 화소에 걸쳐있으면, 두 화소의 중심점에 대해 선분과의 거리를 판단, 선분이 화소의 경계선의 중점의 아래에 있으면 아래 화소, 위에 있으면 위 화소

### DDA vs Bresenham
- DDA / Slope intercept algorithm
  - Slope intercept y = mx + b
  - Easy to implement
  - slow  
- Bresenham / midpoint line algorithm
  - no floating point math
  - fast

### 원, 타원 곡선 그리기
### Bresenham 원 그리기 알고리즘
### 기타 곡선 그리기

### 영역 및 다각형 채우기
  - 이웃한 화소: 4방향 또는 8방향 연결방법으로 공간 영역을 칠해준다, 옆 방향의 화소에 화소가 영향을 받음
  - TODO: 더 채워 피피티보고

> Sep 27 w4

### 영역 및 다각형 채우기
- 4방향연결(4-connected), 8방향연결(8-connected)
- 래스터 영역의 경계 픽셀과 내부 픽셀은 열결방법을 다르게
  - 경계 8/4 방향 연결 => 내부는 반드시 4/ 일반적으로 내부는 8방향 연결 채우기

### Raster
- Bresenham 선 그리기 알고리즘은 8방향연결 방식
- 영역채우기 알고리즘은 내부 영역을 4방향연결 방식으로 채우기
- 시드채우기 알고리즘
  - 경계선이 만들어지면 경계선 안쪽에서 씨앗 화소를 선택하고, 커집니다. 4, 8방향 가능. 경계선에 이르면 채워진겁니다. 페인팅 소프트웨어.
- 다각형 주사변환 방식
  - 주사선별로 다각형 내외를 판단하여 채운다. 벡터 그래픽 소트프웨어.
- 시드채우기
  - 경계채움, 홍수채움
  - e.g. 벌레잡기 소프트웨어
- 주사선 채우기 알고리즘
  - 홀수규칙
    - 홀수번째 교차화소부터 짝수번째 교차화서 직전까지 채움 (길이보존)
    - 1 <= x < 2, 3 <= x < 4

### 다각형의 내부판단
- 홀수 규칙
- 접기횟수 규칙
  - 주사선 별로 아래쪽에지와 교차하면 접기 횟수 +1; 위쪽 방향의 에지와 교차하면 1 감소; 접기 횟수가 0보다 큰 구간이 내부
  - 이건 선의 방향이 위냐 아래냐에 따라 원하는 결과와 다르게나옴

### 래스터 폰트
- 글자에 해당하는 픽셀에 1, 아님 0
- 매우 빠름
- Aliasing

### 벡터 폰트
- True type -> 2차 B-spline curve
- PostScript's Type 1 font -> 3차 Bezier font

### Anti aliasing
- Scan conversion of line
  - continuous appearance, uniform thickness and brightness, pixels near the ideal line are "on"

### Pixels are points
- Blob: each pixel is actually a blobon the CRT. This blob has energy that folk off close to a Guassian

### Sampling & Aliasing
- Real world is continuous
- The computer world is dsicrete
- Mapping a continuous function to a discrete one is called sampling
- Mapping a continuous variable to a discrete one is called quantization

### Signed sampling
신호가 들어 왔을 때 샘플링 (간격 나눔)하고 적분하면 그게 화소값이야

### Aliasing
- H/W: Increase resolution
  - increase sampling, super-sampling
- S/W: filtering

> 여기까지 144 페이지라니;

> 자기가 대학생때 착을 다 안읽는게 싫어요. 대학생때 포트란을 배우는데 다 듣고 나니 10챕터 중 3개밖에 안했더라구요. 그래서 수업이 좀 빠른데, 여러분의 지적수준으로 충분히 가능한.   한 책 당 두 개의 참고문헌을 보시라.

### 수퍼 샘플링
- 하나의 픽셀 영역을 여러 개로 분할하는 수퍼 샘플링 과정을 적용하고, 이를 원래의 해상도로 환원할 때 픽셀의 명암 값을 계산
- 픽셀의 영역에 포함되는 고해상도 픽셀의 개수에 비례하여 명암 값을 계산

### 애어리어 샘플링
- 픽셀에서 색상의 면적 비율로 색을 계산
- Bresenham 선그리기 알고리즘
- Convolve line with box filter function (Draw line as thin rectangle) -> Calculate area of square pixel covered by
line

### Line Antialiasing
(선 주변으로 얕은 색이 퍼져나감)

## 색상의 표현
색상, 명도, 채도의 정의

RGB, CMY, HSY 컬러모델

컬러모드

### 그래픽 컬러처리
Electromagnetic wave

### 색상, 명도, 채도
색상(Hue): 우세주파수의 색 = 에너지가 큰 파장의 주파스ㅜ

명도: 빚 에너지의 총량 = 파형 아래의 면적

채도: 색의 선명도(순도), Ed-Ew

### 눈의 구조
홍채는 빛의 양을 조절, 수정체는 초점거리를 조절, 막대세포는 명암인식을 하며 어두운 환경에반응, 원뿔세포는 색상인식을 하며 밝은 환경에 대응

### CIE 컬러 모델
CIE 정규화: (색범위짤)

### 색 범위(Color Gamut)
- RGB 모니터, CMY 프린터

### RGB 컬러모델
- Tri-Stimulus theory, 삼중 자극이론
  - 630nm, 530nm, 450nm. 
  - 모든 생삭을 0 <= x,y,z <= 1 인 정육면체 안에 넣음
- 가산 모델(Additive Model)
  - 빛의 합성
  - RGB의 보색은 CMY

### CMY 컬러모델
감산모델

### CMYK Color Model
K for Chromatic

어떤 색의 최소가 80

### HSV Color Model
- RGB는 안 직관적이다. 
- hue, saturation,. value(=brightness)
- 셰이드 = 어떤 색상에 흑을 석으면 채도, 명도를 낮춤
- 틴트 = 어떤 색상에 백을 섞으면 채도는 낮추고 명도는 높임
- Hexcon(역 육각뿔): x-Saturation, 세타-Hue, 높이-Value, 

### RGB 컬러모드에서
- 프레임 버퍼 내용이 색을, 용량에 따라 색 종류를 결정
- 하이털러, 풀컬러, 트루컬러

### Index Color Mode
- Color Look Up Table
- 프레임 버퍼는 CLUT의 인덱스를 갖는다

### 컬러 인덱스 모드
유사한 톤(색조) 표현에 유리 

PNG, BMP, TGA, TIFF는 파일 내부에 팔레트 정보를 포함

### Half Toning
흑백인데 회색처럼 보이게하는거

### Digital Half Toning
화소 2x2개를, 검은점을 0에서 4개까지, 실질적 해상도를 감소시키며, 4개 화소를 한 단위로, 평균적 밝기를 인식

## More OpenGL
인터페이스를 잘만드는게 중요해요

이벤트모드 - 이벤트 큐

콜백함수

5-3 GL 프로그램의 예제
```
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h> Header Files
void MyDisplay() {
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON); // 백색 사각형 , 윈도우 한 가운데를 (0.0, 0.0, 0.0)
glVertex3f(-0.5, -0.5, 0.0); // 윈도우 상단을 (1.0, 1.0, 0.0) 로 정의
glVertex3f(0.5, -0.5, 0.0);
glVertex3f(0.5, 0.5, 0.0);
glVertex3f(-0.5, 0.5, 0.0);
glEnd();
glFlush(); // 현재 까지 쌓인 명령어를 모두 프로세서에 전달하라.
}
int main() {
glutCreateWindow("OpenGL Drawing Example"); // 새로운 윈도우 생성
glutDisplayFunc(MyDisplay); // MyDisplay라는 함수를 디스플레이 이벤트에 대한 콜백함수로 등록
glutMainLoop(); //이벤트 루프로 진입하라
return 0;
```

> Oct 11 w5

## 그래픽스의 변환
### Geometric Transformation
- Translation
  - P' = T(tx,ty) + P(x,y)
  - 다각형은 각 꼭짓점, 원은 중심점을 이동하여 다시 그린다
  - Rigid-body transformation
    - T(P) + T(Q) = P + Q + 2T
- Scaling (신축)
  - 원점 기준 신축: x' = sx * x, y' = sy * y
  - 임의의 점에 대한 신축
    - 기준점 (xf,yf)
    - P' = T(xf,yf)·S(sx,sy)·T(-xf,-yf)·P
    - 복합변환행렬
- Rotation
```
P = [ x' ] = [ cos -sin ] [ x ] = R(theta)·P  // R(theta) is matrix
    [ y' ]   [ sin  cos ] [ y ]
```  
  - 임의의 점에 대한 회전
    - P' = T(xr,yr)·R(theta)·T(-xr,-yr)·P

### Homogeneous Coordinates
Cartesian coord => homogeneous coordinate

[ x y ]         => [ x' y' h ]

h: real number

x = x'/h, y = y'/h

Possible to represent scaling, rotation, and translation in a matrix form

*Any* sequence of translation, rotation, scale operations can be a collapsed into a single homogeneous matrix

### 동차 좌표계를 이용한 변환
기본변환은 P' = M1·P + M2의 행렬 형태로 표현 가능

순차적인 기하변환을 처리할 때 각 단계별 좌표 값을 구하지 않고 바로 계산 하려면 행렬의 합(M2)을 제거해야 함

동차 좌표계를 이용하면 행렬의 곱으로만 표현 가능. 

Without concatenation: kincreased number of calculations => Apply composite transformation after concatenation of each transformation matrix.

#### Trasformations in Homogeneous Coordinates
```
P' = [ x' ]     P = [ x ]     P' = M·P
     [ y' ]         [ y ]
     [  1 ]         [ 1 ]
(cf) Using a row vector P     P' = P·M^-1

Translation     
[ 1 0 tx ]
[ 0 1 ty ]
[ 0 0  1 ]

Scaling
[ sx 0 0 ]
[ 0 sy 0 ]
[ 0  0 1 ]

Rotation (counter-clockwise)
[ cos -sin 0 ]
[ sin  cos 0 ]
[   0    0 1 ]
```

#### 동차 좌표계의 표현
h = 1 일 때, 동차 좌표계는 (x,y,1)로 나타냄

모든 기하변환이 동일한 형태의 동차 좌표로 표현 가능
```
     [ x' ]   [ 1 0 tx ] [ x ]
P' = [ y' ] = [ 0 1 ty ] [ y ] = T(tx,ty)·P
     [  1 ]   [ 0 0  1 ] [ 1 ]

     [ x' ]   [ sx 0 0 ] [ x ]
P' = [ y' ] = [ 0 sy 0 ] [ y ] = S(sx,sy)·P
     [  1 ]   [ 0  0 1 ] [ 1 ]

     [ x' ]   [ cos -sin 0 ] [ x ]
P' = [ y' ] = [ sin  cos 0 ] [ y ] = R(theta)·P
     [  1 ]   [   0    0 1 ] [ 1 ]
```

#### Composite Transformation
연속적인 이동 (tx1,ty1)과 (tx2,ty2)
```
[ x' ]   [ 1 0 tx2 ] [ 1 0 tx1 ] [ x ]   [ 1 0 tx1+tx2 ] [ x ]
[ y' ] = [ 0 1 ty2 ] [ 0 1 ty1 ] [ y ] = [ 1 0 ty1+ty2 ] [ y ]
[  1 ]   [ 0 0   1 ] [ 0 0   1 ] [ 1 ]   [ 0 0       1 ] [ 1 ]
```

임의의 점에 대한 신축 => 이동 + 신축 + (역)이동
```
아 행렬극혐
```

임의의 점에 대한 회전 => 이동 + 회전 + (역)이동
```
극혐 행렬 코드
```

행렬 곱셈의 성질
- 결합법칙(associativity) 항상 성립, 즉 (A·B)·C = A·(B·C)
- 교환법칙(commutativity) 성립 안됨, 즉 A·B != B·A, 단 동일한 종류의 기하변한에 대해서는 교환법칙이 성립함

Scaling Relative to a Fixed Point

Rotation about a Pivot Point

Concatenation Properties

General Transformation Eq.

### 기타 기하변환
Reflection
- x축, y축, 원점에 대한 반사
```
         [ 1  0 0 ]
Ref(x) = [ 0 -1 0 ]
         [ 0  0 1 ]
```
- y=x에 대한 반사
  1. 45도 시계방향 회전
  1. x축에 대한 반사
  1. 45도 반시계방향 회전

Shearing (밀림)
x 방향으로 sh 비율만큼 밀림변환
```
     [ x' ]   [ 1 sh 0 ] [ x ]
P' = [ y' ] = [ 0  1 0 ] [ y ] = SHx·P
     [  1 ]   [ 0  0 1 ] [ 1 ]
```
- shear along x-axis
  - x' = x + ay, y' = y
```
    [ 1 a 0 ]
M = [ 0 1 0 ]
    [ 0 0 1 ]
```
  - (0,1), (1,1), (0,0), (1,0) => (a,1), (1+a,1), (0,0), (1,0)
- shear in x then in y
  - (0,1), (1,1), (0,0), (1,0) 
    shear in x => (a,1), (1+a,1), (0,0), (1,0)
    shear in y => (a,1-ab), (1+a+ab,1+b), (0,0), (1+ab,b)

### 래스터 방식에서의 변환
- 프레임버퍼 내의 픽셀블록들을 직접 조작하여 변환
- 변환이 효율적임 (수리연산 없이 비트연산 사용)
- Bit block transfer(bit-bit) 또는 RasterOp
- 일반적으로 H/W 또는 firmware 방식으로 처리

#### 래스터 연산의 모드
- 비트연산: AND, OR, XOR, NOR 등
- e.g. 블록이동
  - 해당영역 복사: 1로 OR 연산
  - 해당영역 제거: 0으로 AND 연산
  - 이동: 저장했던 블록 write
- 커서이동
  - 연속적인 XOR 적용으로 커서이동 구현
  - (A XOR B) XOR B = A XOR (B XOR B) = A XOR 0 = A
  - e.g. 글자에 커서 갖다댔을 때 합쳐져서 선 사라지는 사진

### 윈도우와 뷰 포트
#### 2차원 그래픽스의 뷰잉 과정
- 모델좌표계: 개별 객체의 표현
- 월드좌표계: 통합된 그림, 윈도우 설정
- 뷰잉좌표계: 뷰포트 내의 좌표
- 장치좌표계: 출력될 화면, 뷰포트 설정
- Viewing is the process of drawing a view of a model on a 2-dimensional display

모델 좌표계 (모델링변환)=> 월드 좌표계 (윈도우 뷰포트 변환)=> 뷰잉 좌표계 (뷰잉 좌표계 정규화)=> 정규화된 뷰잉좌표계 => (정규화뷰포트를 장치좌표계로 변환)=> 장치 좌표계

#### 윈도우 뷰포트 변환
Zooming, Panning 등 다양한 효과 가능

월드좌표계에서 모니터로...

A **Window** given in real world co-ordinates, defining the portion of model (scene) to be drawn

A **Viewport** given in screen co-ordinates, defining the portion of the screen which will be used to display the contents of the window

#### 윈도우-뷰포트의 좌표변환
(산 그림 자르는 윈도우 사진)

이동 및 신축변환 적용
- (wxmin,wymin), (wx,wy), (wxmax,wymax), (vxmin,vymin), (vx,vy), (vxmax,vymax),

#### Window to viewport mapping
Preservation of horizontal ratios implies that:

(wx - wxmin) / (wxmax-wxmin) = (vx - vxmin) / (vxmax-vxmin)

So, solving for vx:

vx = (wx-wxmin) * (vxmax-vxmin) / (wxmax-wxmin) + vxmin

vy can be solved for similarly.

### 클리핑(clipping) 알고리즘
물체에서 보이지 않는 부분을 잘라내주는 과정

점, 선, 영역, 텍스트 클리핑

Remove portion of line outside viewport or screen boundaries

#### 점 클리핑
다음 식을 만족하는 점 P(x,y)만 그린다.

xwmin <= x <= xwmax, ywmin <= y <= ywmax

#### Line clipping
(잘라내는 사진)

점보단 좀 복잡한데, 다행히, 어떤 사람이 쉬운 방법을 고안해냈어요. 그 사람은 코헨-서더랜드

#### Cohen-Sutherland algorithm
수직경계: y = y1 + m,   x = xwmin 또는 x = xwmax

**중요**

1. 직선의 양끝점의 영역코드를 정함
1. 양끝점의 영역코드가 모두 0000라면 억셉, 양끝점의 영역코드의 logical AND가 0000이 아니라면 리젝
1. 윈도우의 경계와 교차한다면(2.에 해당하지 않으면), 윈도우 경계에서 선분을 분할

영역비트와 영역코드

비트4, 비트3, 비트2, 비트1 = above, below, right, left 
```
1001  1000  1010
0001  0000  0010    // 0000이 윈도우
0101  0100  0110
```
> 교수님: 기본적인 컨셉만 머리에 있으면, 남들보다 빨리 갖다 쓸 수도 있다. 잘하려면 대학생때 훈련 많이 해 놔

P(x1,y1), Q(x2,y2), 선분PQ, 사각형과 선분의 교점 tL과 tT

x = x1 + (x2-x1)t = x1 + dx*t

y = y1 + (y2-y1)t = y1 + dy*t

t = 0->P(x1,y1)

t = 1->Q(x2,y2)

#### 영역 클리핑
속이 빈 다각형(hollow polygon): 선 클리핑 알고리즘 적용

속이 찬 다각형: 몇 개의 닫힌 채워진 폴리곤 생성

#### Sutherland-Hodgman algorithm
참고로 알아두세요 일반적으로 제일 많이 쓰이는게 서더랜드-호그만 알고리즘이에요

#### Text clipping
- 전체 텍스트 클리핑: (null)
- 전체 문자 클리핑:   t 0
- 개별 문자 클리핑:   (잘린 x)t 0

### ASSIGNMENTS
연습문제 5-1 5-3 5-6 5-9 page 190 

## 제6장: GUI와 대화식 입력기법
인터페이스는 중요하다

사용자 인터페이스의 발전사

사용자와 컴퓨터의 의사소통 방법, 객체를 생성하고 조작하는 방법

마스터 제목 스타일 편집 이걸 만들라구? 자바 스윙. 만들 수 있다. 콜백 함수도 만들 수 있다.

CUI

GUI: WIMP. window, icon, menu, pointer(cursor)

인터페이스는 일관성과 예측성, 안정성, 피드백이 있어야

예측성: 윈도우의 메뉴 바는 "파일 편집 보기 ... 도움말"

안정성: 사용자가 실수를 적게 하고, 실수에 대한 대책을 마련

피드백: 입력에 대한 피드백 e.g. 소리, 마우스가 올려진 항목에 따라 변하는 커서

논리적 입력장치와 물리적 입력장치

대화식 입력기법

고무줄 기법: 선이나 사각형, 원 등을 그릴 때 사용. 커서 따라 그림이 계속 변하는 그거

드래깅 기법: 객체를 이동시키면 커서를 따라서 선택된 그림이 따라다님

제한(constraint) 기법: 정해진 방향 또는 정렬에 맞도록 데이터가 제한적으로 입력됨. 수직선, 수평선, 고정 비율 원과 사각형

격자 기법: 입력 데이터가 양 방향 격자선의 교차점에 위치, 일정 간격을 유지함

스케치 기법: 마우스 버튼을 누르고 움직이면 버튼을 놓을 때 까지 계속해서 그려짐

피킹/셀렉션 테크닉, 시각적피드백 기법: ppt에서 물체 선택하면 8개 점으로 표시해주는거

핸들 기법: 객체를 선택한 후 그림의 둘레에 핸들을 표시한다

중력장 기법: 플래시의 꼭짓점 자석

삼차원 사용자 인터페이스

골프장 길찾기

Vision-based HCI

사람 눈이 깜빡이면 반응하고

보충 다음주 (18일) 여섯 시

시험 중간고사는 다다음주 (25일)

> Oct 18 w6

**시험 문제** 윈도우, 뷰포트, 매핑, 설명, 사례. 클리핑. (5장?)

(6장) 인터랙트, 

(그 앞) 세가지 입력 모드 리퀘스트 모드, 큐를쓰는 이벤트 모드, 상황, 원리

오 피피티를 신기하기 해오셨는데 화이트 -> 블루, 노말 블랙 -> 화이트, 제목 블랙 -> 옐로우 다...

### Overview
- 3차원 그래픽스의 처리 과정
- 3D transformation
  - Translate
  - Rotate
  - Scale
- Composition of transformations
- Coordinate transformations

## 3D 그래픽스의 기하변환과 뷰잉
### 3차원 그래픽스의 처리과정
- 모델링(Modeling: 3D Object Representation)
  - 다각형 면 모델링, 곡면 모델링, 솔리드 모델링, 스위핑(2차원 모델들을 축을 이용해서 당기거나) 등
- 투영 (projection): 3차원 객체를 2차원 출력장치에 매핑하는 작업
  - 투영에 사용되는 공간을 일반적으로 **뷰잉 공간**이라고 함
  - 투영의 종류
    - 평행(parallel) 투영: 조감도, 평면도, 측면도, 정면도
    - 원근(perspective) 투영: 원근감
- 렌더링 (rendering)
  - 은면제거 (안 보이는 면 안보이게), 텍스처 매핑, 셰이딩, etc

### 기타 3D 디스플레이 기법
깊이 표시법 (Depth Queing)

분해도와 단면도법 (exploded view and cutaway view): 엔진과 망원경 단면도

### 베이직 3차원 기하변환
#### Recall 2D Transformation
#### Extend to 3D
```
m00 m01 m02      m00 m01 m02 m03
m10 m11 m12  =>  m10 m11 m12 m13
0   0   1        m20 m21 m22 m23
                 0   0   0   1
```

#### Translation
```
x`   1 0 0 tx  x
y` = 0 1 0 ty  y = T(tx,ty,tz) dot P
z`   0 0 1 tz  z
1    0 0 0 1   1
```

```
2d
    1 0 tx
T = 0 1 ty
    0 0 1
```

#### Scaling
```
sx 0 0 0
0 sy 0 0
0 0 sz 0
0 0  0 1
```

#### 임의의 점(xf, yf, zf)을 기준으로 스케일링
P` = T(xf,yf,zf) dot S(sx,sy,sz) dot T(-xf,-yf,-zf) dot P

이거 연산량이 너무 많으니까 T S T 세개 행렬을 concatnation 시켜서 연산 대상 점들에게 적용

**동차 좌표계**

#### Rotation
A operation that repositions points along a given circular path (the rotation direction) from one coordinate location to another.

##### Right-handed coordinate:
x, y, z : Thumb, Index, Middle (of right hand)

theta와 phi로 된 삼각함수 식은 전개하면 간단하게 줄어든다

#### 3D Rotation
To specify a 3D rotation, we requires an rotation angle and a vector (rotation axis)

2D rotation is just a 3D rotation about the z axis

> (다시 말하지만) 행렬을 외울 필욘 없어요, 여러분에게 다 주어집니다

#### 3D rotation about z axis
```
2D:
           cos -sin 0
R(theta) = sin cos  0
           0   0    1
```

```
3D about z axis:
            cos -sin 0 0
Rz(theta) = sin cos  0 0
            0   0    1 0
            0   0    0 1
```
#### 3D rotation about x axis
#### 3D rotation about y axis

#### 임의의 회전축에 대한 회전
1. 회전축이 원점을 지나도록 이동
1. 회전축이 좌표축 중 하나와 일치하도록 회전
1. 일치된 죄표축을 중심으로 회전 변환을 수행
1. 2에서 실행한 회전이동의 역이동
1. 1에서 실행한 평행이동의 역이동

#### 3D rotation about origin

### 기타 3차원 변환
- reflection: 어떤 면에 대하여 리플렉션
  - e.g. xy평면에 대한 반사
```
x`   1 0 0  0  x
y` = 0 1 0  0  y
z`   0 0 -1 0  z
1    0 0 0  1  1
```
- 밀림변환(shearing)을 수행하면 물체ㅇ의 모양이 바뀌나, 부피는 변하지 않는다
- coordinate transformation: we can think about, alternatively, a transformation is as a change of coordinate systems.
  - 반대 방향으로 (이동 또는 회전) 시킨 효과
  - 뷰잉 과정에서 사용되며, 애니메이션 효과
- 자동차를 모델링한 예
  - 앞바퀴, 차체 좌표계를 따로 둠
  - 자동차를 표현하기 위해 통합 좌표계도 둠
  - 통합과 앞바퀴, 차체 사이엔 좌표변환이 필요함



p31 복합변환
코드를 저렇게 썼을때, C처럼 vertex를 먼저 정의하는게 아니라, 변환을 먼저하고 저러는이유는, (앞페이지에있다)

p34 함수호철순서
-----> 좌표계변환, 지엘 함수호출 순서
P` = I dot R dot T dot P
물체 변환 <-----

시험범위는 p19까지. 시험범위는 7-3까지.
```
16 midterm exam 중간고사
RGB 컬러 모델과 CMY 컬러 모델 구성요소 주요특성 적용분야

벡터 연산에 관한 다음 문제를 해결하시오.
벡터 dot vector
point apply vector
vector and vector -> normal vector

경계선이 있는데, 코헨-서더랜드 알고리즘을 이용하여 판별해 보십시오.

주어진 삼각형을 y=x에 대하여 반사변환해서, ABC를 구하는 과정을, 동차 좌표계의 행렬의 변환을 통하여 설명하시오. (반시계 방향으로 세타만큼 회전 변환행렬은 아래와 같다.)

컴퓨터 그래픽스에서 3차원 좌표계 대신 동차 좌표계를 사용하는 주된 이유를 설명하시오ㅈ

물체의 연속변ㅗ한을 복합변환행렬로 표현할 때 유의할 사항을 설명하시오.

안티앨리어싱에 쓰이는 슈퍼 샘플링 방법을 자세히 기술하시오.
평행투영과 원근투영의 주요 원리와 특성을 비교 설명하시오.

절단좌표계(월드좌표ㄱ)의 점점 p를 뷰포트의 정점 P`로 사상시키는 다음 그림으로부터 P`=(x`,x`,1)를 유도하는 과정을 기술하시오.

**반드시** 벡터와 스칼라 기본문제 나옴
변환관계
코헨-서드랜드
얘네 항상나온듯

책의 연습문제도 보세여
```

> Nov 1 w8

중간고사 성적을 공지했음

## 7장 투영변환과 뷰포트변환
### 투영(투상)
투영(Projection) = 가시변환(Viewing Transformation)
- 투영면(View Plane, Projection Plane)
- 관찰자 위치(View Point, Eye point) = 카메라 위치(Camera Position) = **투영중심(COP: Centre of Projection) = 시점좌표계 원점(Origin of VCS)
- 투영선(Projectors): 물체 곳곳을 향함
- 시선(Line of Sight): WCS원점 또는 초점을 향함
- 투영면(Projection Plane, View Plane)

### Taxonomy of Planar Geometric Projections
```
planar geometric projections
├─parallel
│  ├─multiview orthographic
│  ├─axonometric
│  │  ├─isometric
│  │  ├─dimetric
│  │  └─trimetric
│  └─oblique
└─parallel
   ├─1 point
   ├─2 point
   └─3 point
```

### 평행투영(Parallel Projection)
무한거리 시점,   투영면,   투영선

- 시점이 물체로부터 무한대의 거리에 있다고 간주한다
  - 투영선이 평행
  - 원래 물체의 평행선은 투영 후에도 평행
  - 시점과의 거리에 무관하게 같은 길이의 물체는 같은 길이로 투상
- 정사투영, 축측투영, 경사투영 등으로 분류

(Figure)

### 정사(직각)투영(Orthographic Projection)
- 평면도(Top/Botoom), 입면도(Front/Rear), 측면도(Left/Right)
  - 주 평면(Principal Plane): MCS 주축인 x,y,z에 의해 형성되는 x-y, y-z, z-x
  - 투상면은 주 평면 중 하나와 평행
- 투영선은 투영면과 직교
  - 원래 물체의 길이를 정확히 보존. 공학도면에 사용
  - 투영선이 반드시 투영면과 직교 -> 시점위치가 제한됨.

### 직교투영
(Figure)

### Multiview Orthographic Projection
- Projection plane paralle to principal face
- Usually form front, top, side views

isometric (not multiview orthographic view) (front, top, side)

in CAD and architecture, we often display three multiviews plus isometric

#### Advantages and Disadvantages
Preserves both distances and angles
- Shapes preserved
- Can be used fo measurements
  - Building plains
  - Manuals

Cannot see what object really looks like because many surfaces hidden from view
- Often we add the isometric

### 축측투영(Axonometric Projection)
한꺼번에 여러 면을 보여줌
- 투영선은 투영면과 직교. 투영면이 주 평면들과 평행하지 않음

축 방향으로 서로 다른 축소율(cf. 정사투상)
- 삼각(삼중형, Trimetric)
  - 투영면이 임의의 위치
- 양각(이중형, Dimetric)
  - 투영면이 2개의 주 평면에 대해서 대칭적
  - 2개의 축 방향에 대해 동일 축소율
- 등각(동형, Isometric)
  - 투영면이 3개의 주 평면이 만나는 모서리에서 모든 평면에 대해 대칭적으로 놓일 때. 3개의 축 방향에 대해 동일 축소율

(figure) Ex. 등각, 양각

Allow projection plane to move relative to object

classify by hwo many angles of a corner of a projected cube are the same

- none: trimetric
- two: dimetric
- three: isometric

#### Advantages and Disadvantages
- Lines are scaled (foreshortened) but can find scaling factors
- Lines preserved but angles are not
  - Projection of a circle in a plane not parallel to the projection plane is an ellipse
- Can see three principal faces of a box-like object
- Some optical illusions possible
  - Parallel lines appear to diverge
- Does not look real because far objects are scaled the same as near objects
- Used in CAD applications

### 경사투영(Oblique Projection)
투영선끼리는 평행

투영면은 시슨에 수직이지만 투영선과 직교하지는 않음

고개는 돌리지 않고 눈동자만 돌려서 보는 것과도 흡사

Arbitrary relationship between projectors and projection plane

#### Advantages and Disadvantages
Can pick the angles to emphasize a particular face
- Architecture: plan oblique, elevation oblique

Angles in faces parallel to projectinon plane are preserved while we can still see "around" side

In physical world, cannot create with simple camera; possible with bellow camera or special lens (archietctural)

### 원근투영(Perspective Projection)
시점이 물체로부터 유한한 거리에 있다고 간주

투영선이 시점에서 출발하여 방사선 모양으로 퍼져감.

카메라나 사람의 눈이 물체를 포착하는 방법

원근감(Depth Feeling)
- 동일한 크기의 물체라도 시점으로부터 멀리 있는 것은 작게 보이고 가까운 것은 크게 보임

원근변환(Perspective Transformation)
- 직선->직선, 평면->평면
- 물체 정점간의 거리에 대한 축소율이 달라짐. (cf. 어파인 변환)

#### 소실점(Vanishing Points)
- 원근투상 결과 평행선이 만나는 점(시점 높이)
- 소실점의 수
  - 일점투영(One-point Projection), 이점투영(Two-point Projection), 삼점투영(Three-point Projection)

Paralle lines (not paralle to the projection plan) on the object converge at a single  point in the projection (the vanishing point)

Drawing simple perspectives by hand uses these vanishing point(s)

#### Three-Point Perspective
No principal face parallel to projection plane

Three vanishing points for cube

#### Two-Point Perspective
One principal direction parallel to projection plane

Two vanishing points for cube

#### One-Point Perspective
One principal face parallel to projection plane

One vanishing points for cube

#### Advantages and Disadvantages
- Objects further from viewer are projected smaller than the same sized objects closer to the viewer (diminution)
  - Looks realistic
- Equal distances along a line are not projected into equal distances (nonuniform foreshortening)
- Angles preserved only in planes parallel to the projection plane
- More difficult to construct by hand than parallel projections (but not more difficult by computer)

### Synthetic Camera Model
뷰잉 볼륨 (앞에 뒤에 자르는거) 그림인듯
### Viewing a 3D world
View position (eyepoint), Model, View direction

### Viewing Position
x,y,z ->(Rotation, Translation)-> x,y,z 각 축 돌아가는 그림, 원점에 카메라

### Positioning of Camera
View-reference point (VRP): Origin

View direction: -n (+x)

View-plane normal (VPN): n (-x)

View-up vector (VUP): v (y)

Viwe right: u (z)

#### Where I am Looking at
(Figure)

Origin: View position (eyepoint), Center of projection (COP)

View direction: +x

View up: y

View right: z

View normal: -x

(Figure)

yepoint (eyex, eyey, eyez) 카메라 좌표계

Look at (atx, aty, atz) Model 좌표계

View-up vector (upx, upy, upz) 카메라 좌표계

### If we use OpenGL
Look-At Function

```
gluLookAt(eyex, eyey, eyez, atx, aty, atz, upx, upy, upz)

Define a viewing matrix and multiplies it to the right of the current matrix.
```

### Parallel Viewing
(Figure)

View position (eyepoint)

평면, 평면, 평면, Model (Viwe direction 방향으로)

### 지엘의 평행투영
투영: `void glMatrixMode(GL PROJECTION);`

```
P` = M parallel · P

| x' |     | 1 0 0  0 | | x |     |  x |
| y' |     | 0 1 0  0 | | y |     |  y |
| z' |     | 0 0 0 -d | | z |     | -d |
|  1 |  =  | 0 0 0  1 | | 1 |  =  |  1 |
```

기본 평행투영
- 모델 좌표, 전역 좌표, 시점 좌표 순서로 변환된 상태
- P, P'은 시점 좌표계 기준의 좌표. 거리 d에 무관하게 동일한 모습
- 특이변환 (Singular Transformation): 역변환이 없는 변환
  - (x,y,z,1)에서 (x,y)만 읽어내면 그것이 투영된 2차원 좌표
  - 깊이 정보를 활용하기 위해서 지엘은 이러한 편환을 가하지 않음
  - 투영결과 여전히 3차원 좌표가 유지.

### 가시부피에 의한 평행투영
장면의 범위를 지정할 필요성: 가시부피(View Volume)
- 전방 절단면(Near Clipping Plane, Near Plane, Front Plane, Hither)
- 후방 절단면(Far Clipping Plane, Far Plane, Back Plane, Yon)

(Figure) 무한거리 시점, 뷰 윈도우와 투영면, 전방절단면, 가시 부피, 후방절단면

`void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near, GLdouble far);`

### Orthographic Viewing Volume
Near-plane, Viewing volume, Far-plane, top, right, left, bottom

### 정규화 가시부피
CVV: Canonical View Volume
- 가로, 세로, 높이가 2인 정육면체로 투영
- 정규화 변환(Normalization Transformation)
이유
- 평행투영, 원근투영을 동일한 모습의 정규화 가시부피로 변형
  - 동일 파이프라인 사용
- 정육면체를 기준으로 하면 연산이 간단함
- 다양한 해상도의 화면 좌표계로 편한하기 간단함

```
    | 1 0  0 0 |
    | 0 1  0 0 |
    | 0 0 -1 0 |
R = | 0 0  0 1 |

    | 2/(r-l) 0 0 0 |
    | 0 2/(t-b) 0 0 |
    | 0 0 2/(f-n) 0 |
S = | 0 0 0       1 |

    | 1 0 0 -(r+l)/2 |
    | 0 1 0 -(t+b)/2 |
    | 0 0 1  (f+n)/2 |
T = | 0 0 0        1 |

N = R · S · T
```

물체에 대한 이동, 크기조절, 반사변환으로 간주

Reflection: 정규화 가시부피는 왼손좌표계

결과적인 좌표계 = 절단 좌표계(CSS: Clip Coordinate System)

### Perspective Viewing Volume
(Figure) shearing이 들어가요

aspect ratio = w/h

foxy = Near-plane의 밑 변에서, 오리진으로 선을 그엇을 때, 두 선이 이루는 각

Near-plane: zNear

Viewing volume

Far-plane: zFar

### 지엘의 원근투영
줄어요. 삼각형의 원리를 이용하여 비율을 줄여요

```
      |  x' |   | x/(z/d) |   | x   |   | 1 0  0  0 || x |
      |  y' |   | y/(z/d) |   | y   |   | 0 1  0  0 || y |
      | -d  |   | -d      |   | -d  |   | 0 0 -1  0 || z |
 P' = |  1  | = |  1      | = | z/d | = | 0 0 1/d 0 || 1 |
```

### 원근변환
원근분할(Perspective Division, homogenization)
- 동차좌표의 마지막 요소로 이전 요소를 나누는 작업
- 절단이 동차좌표에서 이루어지기 때문에 절단 이후로 미루어 짐.
```
|  x' |   | x/(z/d) |
|  y' |   | y/(z/d) |
| -z  |   | -d      |
| z/d | = |  1      |
```

원근변환
- 어파인 변환이 아님: 마지막 행이 0,0,0,1이 아님
- 3차원 좌표관점: x' = x/(z/d): 비선형 변환
- 4차원 동차좌표 관점: 선형변환
```
| 1 0 0   0 || x |                  | x |
| 0 1 0   0 || y |                  | y |
| 0 0 1   0 || z |                  | z |
| 0 0 1/d 0 || 1 | = Mperspective · | 1 |
```

#### Perspective Projection
From the two similar triangles, we have

x/z = xp/d

xp = x / (z/d)

(Top view)

From the two similar triangles, we have

yp = y / (z/d)

(Side view)

#### Perspective Projection Equation
xp = x / (z/d)

yp = y / (z/d)

zp = d

They are nonlinear.

The farther of the object from the center of projection (COP), the smaller of the image

- Perspective transformation is lines preserving
- Perspective transformation is not affine
- Perspective Transformation is irreversible

### 정규화 가시부피에 의한 원근투영
절단 사각뿔(Frustum) = 절두체

(Figure) 가시 부피

(Figure) 원근투영과 평행투영

(Figure) 가시부피 설정에 의한 절단: 가시부피에 오브젝트를 걸쳐 놓으면, 오브젝트가 잘려 보일 수 있다.

### 원근투영의 정규화 가시부피
일반적 형태의 가시부피
```
void glFrustum(GLdouble left, GLdouble right, Gldouble bottom, GLdouble top, 
    GLdouble near, Gldouble far);
```

전방 절단면에 비해 후방 절단면이 줄어듦.
- 멀리 있는 것이 작게 보여야 함.
- T 행렬
  - Z 값에 영향을 미침: 원래의 물체 정점의 깊이 z와 정규화 변환 후의 물체 정점의 깊이 z'의 관계

```
     | x' |   | 1 0  0            0         || x |
     | y' |   | 0 1  0            0         || y |
     | z' |   | 0 0 -(f+n)/(f-n) -2fn/(f-n) || z |
P' = | 1  | = | 0 0 -1            0         || 1 |
```

### 지엘 파이프라인
```
MCS     모델 좌표
            ↓     모델 행렬 glScalef(), glRotatef(), glTranslatef()
WCS     전역 좌표       |  P' = S·R·T·P
            ↓     뷰 행렬 gluLookAt()
VCS     시점 좌표          P' = V·S·R·T·P
            ↓     투영 행렬 glOrtho(), glFrustum(), gluPerspective()
CCS     절단 좌표          P' = N·V·S·R·T·P = (x,y,z,w)
            ↓     원근 분할
NDCS    정규화 장치좌표     P' = (x/w,y/w,y/w,1)
            ↓     뷰포트 변환 glViewport()
        화면 좌표          P' = ((x/w)',(y/w)', (z/w)', 1)
            ↓     래스터 변환
        디스플레이
```

### 뷰포트 변환
정규화 장치좌표계(DNCS: Normalized Device Coordinate System)
- 절단 이후 원근분할에 의해 물체 정점을 3차원 좌표로 변환한 것
- (x',y',z',1) = (x/w, y/w, z/w, 1)

뷰포트 변환(Viewport Transformation)
- 정규화 장치좌표계에서 화면 좌표계로 가는 작업
- 화면 좌표계(SCS: Screen Coordinate Syste,). 뷰포트 좌표계(Viewport Coordinate System), 윈도우 좌표계(Window Coordinate System)

### 뷰포트 설정
```
void glViewport(GLint left, GLint bottom, GLsizei width, GLsizei height);
```

(Figure (a)) 좌표는, 바텀 레프트가 (-1,-1)이고 탑 라이트가 (1,1)

(Figure (b)) left, bottom, width, height

```
x' = (x-(-1.0)) / (1.0-(-1.0)) * width + left

y' = (y-(-1.0)) / (1.0-(-1.0)) * height + bottom

     | x' |   | width/2 0  0    left+width/2 || x |
     | y' |   | 0 height/2 0 bottom+height/2 || y |
     | z' |   | 0       0  0               1 || z |
P' = | 1  | = | 0       0  0               1 || 1 |
```

### z 값의 재 정규화
정규화 가시부피에서의 z값의 범위인 [-1,+1] 사이를 [0,1] 사이로 ㅏ쌍
- 정점 사이의 상대적인 깊이는 유지
- 정규화 가시부피를 원점을 중심으로 해서 z축 방향으로 1/2만큼 크기조절 변환을 가한 후, z 방향으로 1/2만큼 이동.

## 9장 가시성판단 
Chapter 9 Hidden Surface Elimination/Visibility Test

8장은 커브와 서페이스인데 여러분이 어려울까봐 9장을 하고나서 할겁니다

중요해요 보이는 부분만 뷰 볼륨에 가져가서 프로젝션하자는 컨셉입니다

학습목표
- 후면제거의 정의와 처리방법을 이해한다
- 절단작업의 정의와 처리방법을 이해한다
- 지엘의 절단 방법을 이해한다
- 은면제거의 정의를 이해한다
- 지-버퍼 알고리즘을 구체적으로 이해한다

### Introduction
은면제거란 시점에서 보이지 않는 면을 제거하는 것이다

목적: 실감있는 이미지를 표현하고, 렌더링 처리시간을 단축하여 처리속도의 증대

### Vector Review
Normalized Vector: magnitude of the vector (abs)

정규화 법선벡터 = 정규화 외적벡터

### 평면 표현
두 점 P와 Q로 평면 만들기

```
(P-Q) · N = 0
P·N = Q·N

(P = (x,y,z), N= (A,B,C))
(x,y,z)·(A,B,C) = Q·N
Ax + By + Cz = Q·N

Ax + By + Cz + D = 0
```

### 지엘의 법선벡터
법선벡터의 방향을 이용해서, 내가 보이는 면인지 아닌지 판별해요

```
s = (Qx-Px, Qy-Py, Qz-Pz)
t = (Rx-Px, Ry-Py, Rz-Pz)
N = s × t
```

법선 벡터 방향: 오른속을 명시된 정점 순으로 감싸 쥐었을 때 엄지 방향

### 후면
전면(Front-Facing Polygon)

후면(Back-Facing Polygon)

후면제거(Backface Culling, Backface Removal)
- 시점과 면의 오리엔테이션만으로 판단
- 보이지 않는 면의ㅢ 거의 절반을 제거

Backface = N . V < 0    ( V벡터는 물체로부터 관측자까지의 벡터 )

연산량이 거의 반으로 줄어요

### 지엘의 후면제거
- 정규화 가시부피
  - 법선벡터의 z 값만으로 판단가능
- `glEnable(GL_CULL_FACE); // 후면 제거모드 활성화`
- `glCullFace(GL_FRONT); // 실제 후면 제거 작업`

### 표면과 이면
하나의 면 = 표면 + 이면

표면
- 시계방향으로 정의된 면 glFrontFace(GL_CW)
- 반시계방향으로 정의된 면 glFrontFace(GL_CCW)

후면의 이면
- 시점이 결정되면 다각형의 표면과 이면 중 하나의 면만 보임.
- 지엘은 표면과 이면 중 하나만을 선택하여 그 면으로 해당 다각형을 대신함

후면이면 = 표면

### 절단 (Clipping)
2차원 절단
- Window, Viewport, Scissor Box

3차원 절단
- Viwe Volume
 
절단 다각형
- Clip Rectangle

### 코헨-서더랜드 알고리즘
4비트 outcode

```
1010  1000  1001
0010  0000  0001
0110  0100  0101
```

Cohen–Sutherland algorithm

The algorithm

The algorithm includes, excludes or partially includes the line based on whether:
- Both endpoints are in the viewport region (bitwise OR of endpoints = 00): **trivial accept.**
- Both endpoints share at least one non-visible region, which implies that the line does not cross the visible region. (bitwise AND of endpoints ≠ 0): **trivial reject.**
- Both endpoints are in different regions: in case of this nontrivial situation the algorithm finds one of the two points that is outside the viewport region (there will be at least one point outside). The intersection of the outpoint and extended viewport border is then calculated (i.e. with the parametric equation for the line), and this new point replaces the outpoint. The algorithm repeats until a trivial accept or reject occurs.

The numbers in the figure below are called outcodes. An outcode is computed for each of the two points in the line. The outcode will have 4 bits for two-dimensional clipping, or 6 bits in the three-dimensional case. The first bit is set to 1 if the point is above the viewport. The bits in the 2D outcode represent: top, bottom, right, left. For example, the outcode 1010 represents a point that is top-right of the viewport.

. | left | central | right
--- | --- | --- | ---
top | 1001 | 1000 | 1010
central | 0001 | 0000 | 0010
bottom | 0101 | 0100 | 0110

Note that the outcodes for endpoints must be recalculated on each iteration after the clipping occurs.

The Cohen–Sutherland algorithm can be used only on a rectangular clip window. For other convex polygon clipping windows, use the Cyrus–Beck algorithm.

### 리앙-바스키 알고리즘
교차점에서의 파라미터 값의 순서를 기준으로 여러 가지 경우를 판단

for right-upper line, t1,t2,t3,t4 = bottom, left, top, right

0 < t1 < t2 < t3 < t4: penetrate clip rectangle
0 < t1 < t3 < t2 < t4: out clip rectangle

### 서더런드 핫지먼 알고리즘
#### Description
The algorithm begins with an input list of all vertices in the subject polygon. Next, one side of the clip polygon is extended infinitely in both directions, and the path of the subject polygon is traversed. Vertices from the input list are inserted into an output list if they lie on the visible side of the extended clip polygon line, and new vertices are added to the output list where the subject polygon path crosses the extended clip polygon line.

This process is repeated iteratively for each clip polygon side, using the output list from one stage as the input list for the next. Once all sides of the clip polygon have been processed, the final generated list of vertices defines a new single polygon that is entirely visible. Note that if the subject polygon was concave at vertices outside the clipping polygon, the new polygon may have coincident (i.e., overlapping) edges – this is acceptable for rendering, but not for other applications such as computing shadows.
All steps for clipping concave polygon 'W' with a 5-sided convex polygon

(Figure) All steps for clipping concave polygon 'W' with a 5-sided convex polygon

The Weiler–Atherton algorithm overcomes this by returning a set of divided polygons, but is more complex and computationally more expensive, so Sutherland–Hodgman is used for many rendering applications. Sutherland–Hodgman can also be extended into 3D space by clipping the polygon paths based on the boundaries of planes defined by the viewing space.

#### Psuedo code
Given a list of edges in a clip polygon, and a list of vertices in a subject polygon, the following procedure clips the subject polygon against the clip polygon.

```
List outputList = subjectPolygon;   
for (Edge clipEdge in clipPolygon) do
    List inputList = outputList;
    outputList.clear();
    Point S = inputList.last;
    for (Point E in inputList) do
      if (E inside clipEdge) then
          if (S not inside clipEdge) then
            outputList.add(ComputeIntersection(S,E,clipEdge));
          end if
          outputList.add(E);
      else if (S inside clipEdge) then
          outputList.add(ComputeIntersection(S,E,clipEdge));
      end if
      S = E;
    done
done
```

The vertices of the clipped polygon are to be found in outputList when the algorithm terminates. Note that a point is defined as being inside an edge if it lies on the same side of the edge as the remainder of the polygon. If the vertices of the clip polygon are consistently listed in a counter-clockwise direction, then this is equivalent to testing whether the point lies to the left of the line (left means inside, while right means outside), and can be implemented simply by using a cross product.

ComputeIntersection is a function, omitted here for clarity, which returns the intersection of a line segment and an infinite edge. Note that it is only called if such an intersection is known to exist, and hence can simply treat both lines as being infinitely long.

3차원 절단
- 상하좌우전후의 6면을 기준으로 절단
- 면을 기준으로 내외부 판정

Silicon Graphics의 Geometry Engine에 사용

### 볼록, 오목
서더랜드-핫지먼
- 볼록 다각형에만 적용
- 하나의 다각형으로 취급
- 오목 다각형 처리결과: 오류

해법 1: 다각형 분할(Tessellation)
- 오목 -> 볼록

해법 2: 웨일러-애서톤 알고리즘

### 웨일러-애서톤 알고리즘
내부에서 외부로 가는 교차점이 추가되면 즉시 그 교차점으로부터 절단 사각형을 따라서 반 시계 방향으로 간다. 즉, 가장 최근에 외부에서 내부로 들어온 교차점을 만날 때까지 간다.

1-C-D-2로 구성되는 하나의 다각형이 완성 (Figure)

분리된 여러 개의 다각형을 생성함

### 정점의 내외부 판정
N은 노말 벡터(내부에서 외부로 향함), Q는 노말 벡터와 경계가 만나는 점, P는 정점.
- (P-Q)·N > 0 iff P is Outside the Clip Plane
- (P-Q)·N = 0 iff P is on the Clip Plane
- (P-Q)·N < 0 iff P is Inside the Clip Plane

### 동차좌표 사용
점과 평면간의 거리
- 법선벡터 방향이 면의 외부로 정의됨
- 점 P=(x,y,z,1), 면 H=(A,B,C,D), normal N
- d = H·P = (A,B,C,D)·(x,y,z,1) = Ax + By + Cz + D
- Ax + By + Cz + D > 0 iff P is Outside the Clip Plane
- Ax + By + Cz + D = 0 iff P is on the Clip Plane
- Ax + By + Cz + D < 0 iff P is Inside the Clip Plane

### 교차점 계산
- 외부 정점 R과 내부 정점 S을 잇는 직선 = p(t)의 궤적
- (p(t)-Q)·N > 0 iff P is Outside the Clip Plane
- (p(t)-Q)·N = 0 iff P is on the Clip Plane
- (p(t)-Q)·N < 0 iff P is Inside the Clip Plane

- p(t)·N = Q·N
- (R+t(S-R))·N = Q·N
- t = (Q-R)·N/(S-R)·N

### Goal of Visible Surface Determination
To draw only the surfaces (triangles) that are visible, given a view point and a view direction

### Hidden Surface Algorithm
- Hidden Surface Algorithm
  - Image Space Method
    - Z-Buffer Algorithm
    - Ray Casting Algorithm
    - Area Subdivision Algorithm
    - Scan-Line Algorithm
  - Object Space Method
    - Back-Face Removal
    - Depth Sort Algorithm
    - Hidden Line Algorithm
  - Hybrid Method
    - List Priority Algorithm
- Object Space Method
  - 은면제거 알고리즘
  - 깊이정렬 알고리즘
- Image Space Method
  - z-buffer Algorithm
  - 레이캐스팅 기법

- Image Space Method
  - 투영된 픽셀평면에서 객체가 보이는지 여부를 검사
  - 투영면의 해상도에 따라 처리 속도가 좌우
  - 투영면의 각 픽셀에 투영되는 객체에 대한 정보를 필요로 하므로 많은 메모리가 요구
- Object Space Method
  - 공간상 객체의 위치관계를 이용하여 은면 결정
  - 객체가 적거나 분산되어 있을 때 효율적
  - 객체가 많아지면 계산이 복잡해짐
- Hybrid Method
  - Object space에서 보여지는 순서를 미리 결정한 다음 image space에서 각 픽셀에 투영되는 값을 표시

#### 은면제거 알고리즘의 처리 개념
객체가 가진 성질을 이용하여 알고리즘 효율을 증진

- 객체의 각 표면을 거리에 따라 소팅
  - 투영면에 가장 가까운 면을 선택해 그린다 e.g.  깊이정렬법
- 객체의 일관성(응집성)(coherence) 이용
  - 공간적 응집성 이용하여 효율 증대 (Spatial Coherence)
  - 애니메이션에서는 시간적 응집성 이용 (Temporal Coherence) 1/30 초간격
- 포함영역(Extent)를 이용하여 비교횟수 축소
  - 우선, 간단한 모양의 포함영역 간의 겹침을 비교

### Z-Buffer Algorithm
Z-Buffer와 Frame Buffer를 사용하여 투영면상의 같은 픽셀에 나타나는 공간상의 객체 가운데 시점에 가장 가까운 객체를 투영면에 표시. Z-Buffer(깊이값), 프레임버퍼(색상값)

모든 픽셀(x,y)에 대하여 Z-Buffer와 Frame Buffer를 초기화(Z-Buffer = 1, Frame Buffer = 배경색)

투영면상의 픽셀(x,y)에 대응되는 면의 모든 점에 대해 Z-Buffer에 저장된 값과 비교하여 가시성 판정: 면의 각(x,y) 위치에 대한 z값을 계산하여 나온 값이 Z-Buffer에 저장된 값보다 작으면 새로운 z값으로 저장되고 동일한 위치의 색상값을 Frame Buffer에 저장

Ax+By+Cz+D=0  =>  z= (-Ax-By-D)/C

위치(x,y)에서의 깊이가 z일 때, 다음 위치(x+1,y)의 깊이 z''의 값

z' = (-A(x+1)-By-D)/C  =>  z'=z-A/C

위치(x,y)에서의 깊이가 z일 때, 다음 위치(x,y-1)의 깊이 z''의 값

zㅌ' = (-Ax-B(y-1)-D)/C  =>  z''=z+B/C

장점은 구현하기가 쉬우며 객체의 면을 정렬할 필요가 없다

단점은 해상도가 높아질수록 Z-Buffer의 크기가 커진다

일정한 구역으로 나누어서 작은 크기의 Buffer를 이용하여 구한 후 다음 구역에서 Buffer를 재사용

책에 슈도코드가 나와있습니다

### Ray Casting Algorithm
**시험 문제?** Z-Buffer와 Ray Casting을 설명하십시오

시점과 투영면상의 픽셀을 연결하는 광선이 공간상의 객체 가운데 처음으로 만나는 객체를 찾아냄

레이캐스팅 기법의 개요
- 시점에서 투영면의 각 픽셀을 통해 빛(Ray)을 투사
- 이 빛과 처음으로 만나는 객체를 선택하여 해당 픽셀을 그린다.
- 임의의 곡면과 같은 표면에서 효과적인 은면제거 방법

z-버퍼 방법은 면의 깊이를 비교하여 처리하나, 레이캐스팅은 처음 만나는 면만을 선택하여 픽셀 단위로 처리

- 우선, 광선의 벡터를 구한다
  - 광선 P가 임의의 점 P0를 지나고 u가 광선의 단위벡터이면
  - P=P0 + s u (s는 실수)
- 다음, 광선과 객체와의 교점을 구하면 s 값이 결정된다
  - 가장 가까운 면만 그린다
- 임의의 모양을 가진 면은 교점 구하기가 어렵다.
  - 객체를 포함하는 확장영역을 이용하여 속도 향상

레이캐스팅은
- Z-Buffer Algorithm의 변형 형태
- CSG, Constructive Solid Geometry 기법으로 모델링한 객체의 은면제거 시 효과적
- Ray Tracing Algorithm과 함께 사용하면 은면제거와 렌더링이 동시에 수행 가능
  - Ray Tracing은 뒤에 설명드리겠는데, 셰이딩을 알아야 효과적으로 설명하는데, Ray가 물체를 만나면, 그 밝기값을 따다가 뷰에 뿌리죠. 근데 밝기값을 알아야 하는데, 밝이값이 계속 변해요. 예를들어 10에서 20으로 변해요. 그 상황들을 정확히 알고있으면 쉽겠죠. Ray Tracing은, 이 빛이 어디서 들어오는지 추적하는거에요. 
- 다양한 형태의 객체와의 교점은 일반적인 교점계산법이 존재하지 않으므로 매번 적절한 계산방법을 사용
- 다양한 형태의 객체에 대해선 객체를 포함하는 확장 영역을 설정하고 광선이 확장 영역과 교차하는 경우에 한해 ray casting algorithm을 적용하여 처리속도 향상 가능

### Scan-Line Algorithm
- 주사선이 가로지르는 모서리들을 x값 증가순으로 정렬하여 모서리들의 현재 목록 생성
- 주사선 내의 각 면들의 위치들에 대해 면의 안쪽인지 바깥쪽인지 가리키는 플래그 정의

주사선 단위로 물체를 캐스트한다고 생각하시면 될거같아요

### Area-Subdivision Algorithm
영역 내에서 한 면의 가시성 여부 판단
- 한 면과 지정된 경계와의 관계를 파악

```
감싸는 면: 영역을 완전히 포함
겹치는 면: 일부는 영역 내부에 있고 일부는 외부에 있음
내부면: 완전히 영역 내부에 있음
외부면: 완전히 영역 외부에 있음
```

영역 분할의 반복 진행의 판단
- 외부면, 내부면, 감싸는 면(영역의 경계선 내에서 다른 모든 면을 가리는지 여부)

영역 분할의 장점
- 반복적인 분할 과정을 통하여 내부면과 겹치는 면들이 없어지면서 영역 분석이 용이
  - 하나의 픽셀 크기의 분할의 발생할 경우 해당 픽셀에 관련된 면들의 깊이 계산을 통하여 가장 가까운 면의 픽셀값을 저장
  - 감싸는 면, 외부면일 경우 해당 영역의 모든 분할 영역에 대해서도 감싸는 면, 외부면임

다음 주 수요일 11/8 은 개교기념일이지만, 보강을 합니다. 그때안하면 야간에 하든 해야하는데, 야간에 하면 안 와요 ㅋㅋㅋ

> Nov 8 w9

### Back-Face Removal
객체의 뒷면을 구별하는 방법
- 오른손 좌표계
- N=(A,B,C), V=(0,0,Vz)
- 투영면: xy평면
- 눈: z축
- V·N=Vz·C(Vz<0)
- C<0: 뒷면
- C>0: 앞면

빠르고 간단한 방법으로 뒷면을 찾을 수 있고, 계산량이 적어 은면제거의 첫 단계에서 이용

객체가 오목하여 객체의 한 면의 일부가 다른 면에 의해 가려질 경우 은면제거를 위한 별도의 검사가 필요

Back-Face Removal으로 약 50% 정도 은면제거 가능

### We Need to Know Surface Normal
Surface Normal-vector perpendicular to the surface

Threenon-colinear points (that make up a triangle), also describes a plane. The normal is the vector perpendicular to this plane. 

### What is Normal?
### How do we Compute a Normal?
Given a Triangle, how do we compute a normal?

Normal = V0 V1 X V0 V2

But... we know V0 V1 X V0 V2 != V0 V2 x V0 V1

### What does the Normal Tell us?
How can we use normals to tell us which "fadce" of a triangle we see?

### Exampine Front Surface
Front if V . N < 0 (V is View vector, eye to object)

### Backface Removal
Before scan converting a triangle, determine if it is facing you

Compute the dot product between the view vector (V) and triangle normal (N)

Simplify this to examining only the *z* component of the normal

If Nz<0, then it is a front facing triangle, and you shoiuld scan convert it

### Depth Sorting Algorithm
공간상의 객체들으 깊이, 깊이는 객체의 z값인데, z값으로 정렬해서 가장 먼 곳에 있는 객체부터 투영면에 표시

두 면의 영역이 겹치치 않는 경우,
- 멀리 있는 다각형부터 투영
- 각각 투영

면 S와 S'의 위치 관계에 따라, 
- S 부터 투영
- S' 부터 투영

### Full Graphics Pipeline
```
Modeling Transformations
↓
Illumination (Shading)
↓
Viewing Transfomation
↓
Clipping
↓
Projection
↓
Scan Conversion
↓
Visibility/Display
```

Modeling Transfoformations
- 3D Model은 각각의 좌표공간에서 정의
- 각각의 Model들을 공통된 좌표공간에 변환하여 적용
- Object Space to World Space

Illumination (Shading)
- 물질, 표연의 특성, 광원 및 주변광 모델에 따라 각 정점에서의 밝기 표션
- Flat Shading
  - 3차원 객체의 한 면을 일정한 밝기를 갖도록 처리
  - 장점: 연산 속도가 빠름
  - 단점: 점진적인 색상, 명암 표현의 어려움
- Gouraud Shading
  - 선형 보간법을 적용하여 표면ㅇ 밝기와 색상을 계산
  - 장점: Flat Shading에서의 곡면이 각져 보이는 현상 제거
  - 단점: 마하 밴드(Mach Band) 발생
- Phong Shading
  - 다각형 내의 한 점에서의 법선 벡터를 이웃하는 꼭짓점에서의 법선 텍버들로부터 선형 보간법을 적용하여 계산
  - 장점: 마하밴드현상이 거의 제거도티고 부드러운 렌더링이 가능하다
  - 단점: 계산 시간이 오래 걸린다

Viewing Transfomration
- Mapping World Space to Eye Space

Clipping
- Viewing Transfomration 시 투영면에 보여지는 객체들을 제외한 나머지 부분들을 제거

Projection
- 객체를 이차원 이미지 공간으로 투영
- 평행투영: 투영각과 투영면이 직각
- 원근투영: 거리에 따른 객체의 크기가 다르게 보임

Scan Conversion
- 객체를 Pixel로 Rasterize
- 보간법 사용 (Color, Depth, etc)

## Curve and Surface
Chapter 8 Curve and Surface

### 객체 모델링의 개요
- 다각형면과 2차 곡면을 이용해 3차원 객체 표현
- 다각형 Mesh 사용
- 임의의 모양을 가진 3차원 객체를 표현
- 곡선 또는 곡면 함수를 이용해 부드러운 물체 표현
- Bezier, Spline, NURBS 곡선 및 곡면
- Sweeping 기법 이용
- CSG(Constructive Solid Geometry) 기법 이용
- 프랙탈 기하학 또는 입자 시스템 이용

### Polygon Surface Modeling
Triangular, Trapezoidal meshes

Triangular Mesh: 1차 방정식으로 표현되며, 렌더링이 간단

Quadrilateral Mesh: 보통 2개의 삼각형으로 분할하여 처리, 또는 평면 방정식을 근사적으로 계산

다면체의 기하적인 정보 표현
- 꼭짓점 표, 모서리 표, 다각형 표
- 일관성과 완전성이 유지되어야 함

평면 방정식 Ax+By+Cz+D=0
- 세 점이 주어지면 하나의 평면이 결정
- D=1로 놓으면 계수 A,B,C를 구한다 (Cramer 법칙)
- 평면의 방향
  - Normal=(A,B,C)
- 평면의 안쪽은 Ax+By+Cz+D<0, 바깥쪽은 Ax+By+Cz+D>0
- 은면제거 중 다면체 뒷면 제거 기법에서 이용

#### How do We Render This?
#### We Need Curve
- Model complex objects
- Good modeling tool
- Speed
- Accuracy
- Appearance

#### Representation of Curves and Surfaces
커브의 식은 보통 3차식 또는 2차식

커브가 복잡한 식은 차수가 매우 높다(많은 점들을 연결한 커브). 그럴 땐 점들을 한번에 연결하지 않고 구간을 나눠 전부 삼차식으로 커브그린다.

Three major types of representations, Explicit, Implicit and P arametric representation.

#### Parametric Representation
In Computer graphics, we usually use the parametric forms to represent curves/surfaces (why?)
- Parametric curves are very flexible
- They are not required to be functions
- Curves can be multi-valued with respect to any coordinate system

In this form, the x,y, and z values of a point on the curves/surfaces are represente independently in term of parameters u and v: x=x(u,v), y=y(u,v), z=z(u,v)

E.g. for unit sphere, the parametric form is
```
x(u,v)=Cos(u)Sin(v), y(u,v)=Cos(u)Cos(v), z(u,v)=Sin(u) 
```

### 2차 곡선과 곡면 모델링
Quadrics and Quadric Surface
- 2차곡선, 원뿔곡선(Conic Section)
- 2차 방정식으로 표현
- 원뿔을 여러 각도에서 절단하여 구할 수 있다

Circle and Sphere
```
x^2+y^2=r^2    x^2+y^2+z^2=r^2    
```

### 파라미터 표현
- y=x+1 (0≤x≤4)
  - (t,t+1) or (t^2,t^2+1) or (3t,3t+1)
- 정규화 파라미터
  - (4t,4t+1) (0≤t≤1)
- 파라미터 표현의 장점
  - 균등 길이
    - y=sqrt(1-x^2) (0≤x≤1)
    - p(θ)=(cosθ,sinθ) (0≤θ≤2π)
  - 차원의 확장이 용이: (t,t+1,t+3,2t,…) cf. 현시전 표현

타원과 타원체(Ellipse and ellipsoid)

(x/rx)^2 + (y/ry)^2 + (z/rz)^2 = 1

포물선과 포물편(Parabola and paraboid)

(x/a) = (y/b)^2    (x/a) + (y/b)^2 = (z/c)

토러스(Torus)

{r-sqrt((x/rx)^2 + (y/ry)^2)}^2 + (z/rz)^2 = 1

수퍼 2차곡면(Superquadrics)
- 2차 곡선의 차수를 매개변수 S를 이ㅛㅇㅇ하여 조전
- 수퍼타원(Superellipse)
- (x/rx)^2/s + (y/ry)^2/s = 1
- (figure) s=0.5 에서 s=3.0까지, 둥근 네모에서 "의지" 별모양까지

수퍼타원체(Superellipsoid)
- ((x/rx)^2/s2 + (y/ry)^2/s2)^(s1/s2) + (z/rz)^2/s1 = 1
- (figure)

### Spline 곡선
부드러운 곡선의 모양을 다항식으로 표현: Bezier, B-spline, NURBS, cubic spline 등

Spline: 목수들이 부드러운 곡선을 긋기 위해 사용하던 얇은 금속 띠
- 추(Ducks)의 무게에 의해 부드러운 곡선
- 수학의 발전에 의해 다항식으로 표현. 다항식 곡선=스플라인
- 용도는: 곡선/곡면설계, 영상 윤곽의 디지타이제이션, 애니메이션의 동작경로

### Spline curve
Spline curve - curve drawn using a set of *control points*. Control points are a set of point used to define a spline curve

Using curves, how would we do surfaces?

- Control Points - a set of points that influence the curve's shape
- Knots - control points that lie on the curve
- Interpolating sline - curve passes through the control points
- Approximating spline - control points merely influence shape

근사 스플라인은 부드러움을 위해 제어점을 통과하지 않는다. 경우에 따라서 첫점과 마지막 점은 통과할수도

CP: Control Points은 곡선의 모양을 제어하는 특징적인 점이다. 제어점의 추가, 삭제, 위치변경. 구간(Segment)은 한 쌍의 제어점 사이를 말한다.

> Global control 보단 local control이 가능한걸 그래픽스에선 선호.

### Piecewise Curve Segments
Often we will want to represent a curve as a series of curves pieced together

But we will want these curves to fit together reasonably (how?)

### Design Criteria
We may follow the following criteria to design parametric curves
- Local control of shape
- Smoothness and continuity
- Ability to evaluate drviates
- Stability
- Ease of rendering

### Transforming Control Points
- Original
- Scaling (2,1)
- Rotation and translations still apply

### 스플라인의 지역성
Locality
- 제어점을 움직일 때 여타 구간에 미치는 영향력
- 이미 설계완료 된 부분에 영향을 미치지 않도록 작을수록 좋음.
- 3개 구간 vs. 9개 구간
- 구간별로 서로 다른 계수의 다항식: 지역성 향상을 위함

곡선의 국부제어
- 제어점 하나가 바뀔 때 영향을 미치는 부분
- (figure) 국부제어가 되는 경우 (figure) 국부제어가 되지 않는 경우

볼록다각형(Convex Hull) 내포성
- 곡선은 항상 Convex Hull 내에 포함된다
- 곡선의 개괄적인 모양을 파악, 곡선 클리핑에도 이용
- (figure) 볼록다각형 (figure) 볼록다각형

### 스플라인의 연속성(Continuity) **시험 문제 (기말)**
곡선의 부드러움(Smoothness)
- 제어저 부근에서의 곡선의 기울기(Slope)와 곡률(Curvature)
- 불연속, C0, C1, G1, C2

- C0 continuity - (zero order) the curves meet
- C1 continuity - (1st order) 1st derivative equal on both sides of a control point
- G1 연속
  - 기하학적 또는 시각적 연속성 (Geometric or visual continuity)
  - 나가는 기울기가 들어오는 기울기의 상수배, 방향만 같음
- C2 continuity - (2nd order) 1st and 2nd derivatives equal on both sides of a control point

### Cardinal Splines
혼합함수(Blending Function) **시험 문제 (기말)**
- 점을 섞어 선분의 식을 표시
- 기반함수, 가중치함수(Basis function, weighting function)
- 이 경우 혼합함수는 (1-t), (t)이므로 선형 혼합 함수

선분의 선형조합

(중략)

곡선의 선형조합 (후략)

### Cubic Spline
n+1개의 컨트롤포인트와 이들을 보간하는 n개의 커브로 구성된다

C1, C2 연속성 만족

Parametric Cubic Polynomial Curves
- To have 2nd order continuity, our functions must be of at least degree 3
- Here's what a parametric cubic spline functions looks like
```
x(u)= cx3u^3+cx2u^2+cx1u+cx0
y(u)= cy3u^3+cy2u^2+cy1u+cy0
z(u)= cz3u^3+cz2u^2+cz1u+cz0
```

(후략)

### Cubic Hermite Spline
depends on the control points and associated tangent vectors (gradients)

```
           |  2 -2  1  1 |
           | -3  3 -2 -1 |
           |  0  0  1  0 |
MHermite = |  1  0  0  0 |

                                  | pi    |
                                  | pi+1  |
                                  | p'i   |
P(u) = [u^3 u^2 u 1] · Mhermite · | p'i+1 |
```

Cubic Hermite Spline Interpolation
- Piecewise issues
  - C0 easy
  - C1 reasonable
  - C2 tricky

### Bezier Curve
(생략)

### Bezier Splines
(생략)

### Bezier Surface
(생략)

### B-Spline
(생략)

> Nov 15 w10

## Lighting and Shading
Chapter 10 Lighting and Shading


Illumination: the transport of light from a source to a point via direct and indirect paths

Lighting: computing the luminous intensity for a specified 3D point, given a viewpoint

Shading: assigning colors to pixels

Lighting (Shading) Model: How we calculate the intensity at a piont on the surface.

Surface Rendering Mothod: How we calculate the intensity at each pixel

### 렌더링 과정
와이어프레임모델 -> 은면제거 -> 쉐이딩 -> 투명도 -> 텍스처매핑 -> 그림자생성

렌더링
- 조명(Lighting, Illumination)
  - 오브젝트 정점의 색상 부여
  - Object space
- 음영(Shading, Surface rendering)
  - 조명결과를 이용하여 물체 면의 색상 부여
  - Image Space
```
시점좌표
↓        조명
↓        투영 변환
절단좌표
↓        
정규화 장치 좌표
↓        뷰 포트 변환
뷰 포트 좌표
↓        래스터 변환   은면제거    음영
화면 좌표
```

### 빛
빛의 진행: Light source (-> objects) -> Eyepoint

빛은 물체 표면에서 흡수, 반사, 투과 또는 굴절(absorption, reflection transmission refraction) 된다.

물체의 색은 광원과 물체, 관찰자의 위치, 광원 및 물체의 특성이 결정한다

### 조명모델(Illumination Model)
전역 조명모델(Global illumination model): 다른 물체면에서 반사되어 입사하는 빛까지 고려하는 조명 모델

지역 조명모델(Local illumination model): 광원으로부터 직접 물체면으로 입사되는 빛만을 고려하는 조명 모델

### 광원(Light Source)
면적광원(Area light source), 점광원(point light source)

면적광원을 분산 점광원으로 근사(Distributed point light source)

- 위치성 광원(Positional light source)
  - Omni light, 빛이 모든 방향으로 방사형으로 진행(radial direction)
  - 광원의 위치가 중요하다. 근거리 광원이다
- 방향성 광원(Directional light source)
  - 빛이 일정한 방향으로 진행한다
  - 빛의 방향이 중요하다. 원거리 광원이다. 
- Spot light
  - 빛이 방사형으로 진행한다
  - 광원이 유한 거리에 존재한다
  - 방향성 광원과 유사하다. 하나의 방향을 향해서만 진행한다. 하지만 일정한 각 범위 내로만 진행한다.

### 조명 관련 벡터
(전략)

Specular surface, diffuse surface, translucent surface

### 주변반사(Ambient Reflection)
광원에 직접 노출되지 않는 면에 밝기를 부여한다.

모든 빛의 경로를 추적하기 어렵다. 면마다 상수 크기의 밝기를 추가한다. 그러면 전역 조명모델 효과를 근사적으로 부여할 수 있다.

### 거리에 따른 빛의 약화와 주변광 계수 변화
거리 제곱에 반비례. Ambient reflection = Ka Ia / D^2. Ia는 광원의 주변광 세기, Ka는 주변광 계수

(figure) 주변광만 부여: 원의 색깔이 균일함

(figure) 여타 반사광 + 주변광: 원의 색깔이 그라데이션

### 난반사(Diffusive Reflection)
확산반사라고도 한다.

완벽 확산체와 방향성 확산체(Perfect diffuser and directional diffuser)가 존재한다. 지역조명 모델의 그래픽 처리를 단순화하기 위해서 완벽 확산체를 가정할 수 있다. 

### Lambert's Law(람버트의 법칙)
Difuse reflection applies Lambert's Law.

Reflected energy from a small surface area in a particular direction is proportional to the cosine of the angle between that direction and the surface normal. 

To  determine how much of a diffuse contribution a light supplies to the surface, we need the surface normal and the direction of the incoming ray. 

Id = kd Ld cosθ = kd Ld (L·N) where 0≤kd≤1 is the surface diffuse reflectivity

### 확산광
확산광의 세기는 물체면이 서 있는 방향에 따라 다르며, 람버트의 법칙을 따른다.

확산광은, 면이 서 있는 방향에 따라 차등적 밝기 효과를 주고 입체감을 부여한다. cf. 주변광

(figure) 우상단, 우측 중앙, 정중앙에서 빛을 비출 때 당구공의 그림

### 경면반사(Specular Reflection)
반질반질한 표면에서 반사되는 빛을 말한다.
- 정반사
- 물체의 색이 아니라 광원이 색
- cf. 주변광, 확산광: 광원의 색이 물체의 색과 상호작용한다.

(figure) 우측 상단에서의, 확산광에 의한 그리고 확상광과 경면광을 받는 당구공 그림

기본적으로 입사각과 반사각이 동일하다

Think about the amount of light reflected at different angles.

The amount of light that the viewer sees depends on the angle Φ between R and V(the direction of a perfect reflector, the direction of the viewer).

An approximation is sets the intensity of specular reflection proportional to (cosΦ)^shininess

Is = ks Ls (cosΦ)^ns = ks Ls (R·V)^ns where 0≤ks≤1 surface specular reflectivity, ns is the shininess coefficient.

### 경면광 분포와 퐁 반사모델
실제론 Lobe의 모양이다

퐁 반사모델(Phong Illumination Model)

광택계수(Shineness coefficient)

(figure) 광택계수에 따른 당구공 그림

### 약화함수(attenuation Function)
지엘에서는 거리에 따른 약화를 수식으로 표현한다.

f attenuation = 1 / (a + bD + cD^2)

(figure) (a,b,c)=(0,0,1), (.25,.25,.5), (0,1,0)일때 거리에 따른 약화되는 빛을 받는 당구공 그림

### 확산계수, 경면계수, 광택계수
확산계수가 높으면 당구공이 밝아진다

경면계수가 높으면 당구공 하이라이트가 커진다

광택계수가 높으면 당구공 하이라이트가 하나로 뭉친다

### 지역반사 모델
주변광: 그냥 당구공 전체 밝은거

확산광: 빛의 방향쪽에서 당구공이 밝아지는거

경면광: 하이라이트

I = Ambient Reflection + Diffuse Reflection + Specular Reflection

= (Ka Ia + Kd Id (N · L) + Ks Is (R · V)^n) / (a + bD + cD^2)

### Lighting Equation
```
I_light = k_a L_a + k_d L_d (L×N) + k_s L_s (R×V)^ns

I_light = k_a L_a + Σ(l) k_d L_ld (L×N) + k_s L_s (R×V)^ns

l = number of light sources (l=0,...,lights-1)
k_a = surface material ambient reflectivity
k_d = surface material diffuse reflectivity
k_s = surface material specular reflectivity
ns = specular reflection parameter (1->dull, 100+->very shiny)
```

### 지엘 조명모델
1. 광원이 여러 개인 경우는 각각을 합산
1. R G B 색에 대해 별도로 적용하고 합산
1. 광원특성은 반사광 종류별로 Ia, Id, Is
1. 뭬ㅊ특성은 반사광 종류별로 Ka, Kd, Ks

```
| K_aR K_aG K_aB || I_aR I_dR I_sR |
| K_dR K_dG K_dB || I_aG I_dG I_sG |
| K_sR K_sG K_sB || I_aB I_dB I_sB |
```

지역 조명모델 알고리즘
```
for each object of the scene
  for each polygon mesh of the object
    calculate N, L, V, R, D # 벡터 및 거리계산
    for each light source
      for ambient reflection
        calculate R, G, B reflectino separately
      for diffuse reflection
        calculate R, G, B reflectino separately
      for specular reflectioncalculate R, G, B reflectino separately
        calculate R, G, B reflectino separately
      add R, G, B colors separately
    add R, G, B colors seperately
```

> Nov 22 w11

### 음영 (Shading)
Shading or Surface Rendering: 물체면에 색을부여한다

### 플랫 셰이딩(Flat Shading)
한 다각형 전체를 같은색으로 칠한다

Constant Shading, Facet Shading(깎은 면 셰이딩)

다각형 정점을 위치를 평균해서 중심점을 구한다(Centroid). 중심점에서의 노말, 광원벡터, 시점벡터를 기준으로 조명모델을 적용하고, 그 색으로 면 내부를 모두 채운다.

마하 밴드 효과(Mach Band Effect): 깁스 현상 비슷한거

광원까지의 거리와 관측자까지의 거리가 무한대로 발산할 때, constant N·L, constant V·R. 

### 구로드 셰이딩(Gouraud Shading)
다각형 내부를 서로 다른 색으로 채운다. 정점의 색을 보간한다. 정점의 법선벡터가 필요하다. 인접면의 법선벡터를 평균해서 구한다. 정점의 색으로부터내부면의 색을 선형 보간한다.

경면광을 감안하지않는다. 실제적인 정점의 법선벡터와 근사적으로 계산된 법선벡터가 완전히 치하지 않기 때문이다.

플랫 셰이딩보단 부드럽지만 마하 밴드 효과는 그대로 남아있다.

(figure) 경우에 따라서 오류

`N_p = Σ N_face / # of faces`

### 퐁 셰이딩(Phone Shading)
**시험 문제 (기말)**  **(뇌피셜)**

정점의 색 대신 정점의 법선벡터를 보간한다. 곡면의 기울기가 복원되어서 경면광을 부여할 수 있다.

(figure) 플랫, 구로, 퐁 음영 결과 비교하는 당구공 그림

(figure) 구로, 퐁 음영 결과 비교하는 당구공 그림

거울반사(Highlight)가 실감나게 보인다 (March band 효과를 크게 줄였ㅏㄷ)

계산 시간이 오래걸린다 (각 점에서 노말의 근사치를 이용하여 명암/밝기를 계산한다)

### 미세면 모델(Microfacet Model)
표면의 거칠기를 모델링한다(Roughness). 평균면의 방향을 기준으로; 표면의 거칠기라는 매개변수를 사용해 미세면의 굴곡이나 모향을 조절한다.

(figure) 거칠기가 증가하면, 입사광의 경면광이 줄어들고 확산광으로 변한다

(figure) 플랫, 퐁, 블린, 쿡/토렌스

블린 셰이딩: 퐁 셰이딩과 유사하다. 경면광 성분이 더욱 부드럽게 퍼진다. 광원이 거의 물체면과 나란히 예각으로 입사한것과 유사하다.

쿡/토렌스 셰이딩(메탈 셰이딩): 금속표면의 은은한 경면광을 처리하기에 유리하다. cf. 퐁 모델은 플라스틱 재질 처리에 유리하다.

### 광선 추적법
광선추적법은 매우 우수하고 현실감 있는 결과를 얻지만, 계산시간을 크게 요구한다.

(figure) 시점에서  나온 광선이 반사와 투과를 통해 추적되는 모습이다. (광선, 반사하는 물체, 투영면의 픽셀 위치, 관측자의 시점)

물체 표면의 점 P의 밝기 I는 5가지 빛의 합산

```
I = I [amb + diff + spec + refl + refr]
```

Ray Tracing Tree는 광선추적 과정의 예이다. (figure) 레이 트레이싱 트리 그림

광선추적 과정의 종료 조건
1. 광선이 어떤 물체와도 만나지 않는 경우
1. 광선이 광원과 만나는 경우
1. 반사와 굴전의 회수가 지정회수보다 많아질 경우
1. 반사나 굴절에 의하 빛의 세기가 임계값 이하가될경우

광선추적 과정에서 광선이 만나는 표면의 한 지점이 그림자 내에 위치하는 경우, 난반사와 경면반사는 존재하지 않는다.

### 텍스처 매핑
텍스처는 재질, 혹은 질감을 의미한다. 3차원 모델 위에 재질을 입히는 작업이다. 재질은 일반적으로 2D 이미지.

텍스처 매핑은, 보다 사실적인 재질의 장면을 연출, 적은 수의 다각형만으로 비교적 사실적으로 묘사, 값은 모양을 오브젝터라도 다른 텍스처를 사용하면 전혀 다른 오브젝트가 되는 효과가 있다.

2차원 텍서처와 3차원 곡면의 대응 관계 e.g. 베지어 곡면

(figure) 단위면적의 텍스처 패턴에서 베지어 곡면 함수 S(u,v)로 생성된 곡면으로 매핑되는 그림

곡면에서의 텍스처 매핑 알고리즘
- 텍스처 패턴
- 주사선 y = ys를 위에서 아래로 이동
- 좌표 x를 범위 내애서 변화
- 곡면 상의 점 P(x,ys)에 대응하는파라미터 좌표 (u,v)를 구한다
- 좌표 (u,v)에 대응하는 단위크기의 텍스처 패턴의 좌표 (s,t)를 구한다
- (s,t) 위치에 해당하는 픽셀값 Q를 구한다
- 점 P(x,y)에 Q를 할당한다

범프 매핑(Bump mapping): 표면이 울퉁불퉁한 경우, 잡음(Perturbed normal)을 넣는다.

절차적 텍스처링 방법(Procedural texturing method): 텍스처를 프로시저에 의해 생성한다. 절차를 수리함수나 알고리즘으로 표현한다. 솔리드 텍스처라고도 한다(Solid texture) e.g. 목재의 표면, 대리석이나 벽돌의 표면

환경 매핑(Enviroment mapping): 물체를 둘러싸고 있는 주위환경이 이 물체에 반사된다. 3차원 공간이 매우 큰 가상적 구나 원통, 육면체로 둘러싸였다고 가정한다.

(figure) 구 모양의 환경 맵과 3차원 내의 객체들

(figure) 환경 맵에 투영된 영역과 3차원 공간내 물체의 표면, 투영면의 픽셀, 측자의 시점

## Texture Mapping
11장은 시험범위 아님 ㅠ

### Texture Mapping
Important topic: nearly all objects textured
- Wood grain, faces, bricks and so on
- Adds visual detail to scenes

Meant as a fun and practically useful lecture
- But not tested specifically on it

### Adding Visual Detail
Basic idea: use images instead of more polygons to represent fine scale color variation

(공룡 짤)

### Photo Textures
For each triangle in the model establish a corresponding region in the phototexture

During rasterization interpolate the coordinate indices into the texture map

(호랑이 가죽 짤)

### Texture Mapping Results
Jeremy Birn

### 텍스처 맵
원래의 정의
- 물체면에 인위적으로 미세한 굴곡을 부여함으로써 주름 면을 형성
- 법선벡터 조정 = Bump Mapping
- 확산광 계수 변화, 표면 거칠기를 함수화하여 경면광에 반영
- 다각형 분할
  - 서로 다른 색, 표면 기울기를 부여
  - 너무 많은 시간이 소요됨
- 대신 2차원 영상을 직접 평면 표면에 입힘
  - Texture, Texture Image, Texture Map

### 텍스처 매핑 예
일반적 텍스처 매핑 (사과 짤)

라이트 매핑
- 물체면의 밝기를 계산하는 대신 텍스처와 조명 결과를 혼합하여 결과적인 영상을 직접 물체면에 입힘.

Environmental Mapping
- 물체 외부 환경이 해당 물체면에 반사
- 반짝이는 물체면을 표현

### 지엘의 텍스처 매핑
매핑 시기
```
뷰포트 좌표
↓ 래스터 변환, 은면제거, 음영, 텍스처 매핑
화면 좌표
```

기하 파이프라인과 영상 파이프라인
- 래스터 변환에서 만남
```
정점        -> 기하 파이프라인 -> 래스터 변환 -> 화면 디스플레이
                             ->
텍스처 영성 -> 화소 연산     ->  
```

### Texel
Texel(Texture Element)
- 텍스처 영상의 기본단위
- 화소와 마찬가지로 (R, G, B, A) 저장
- e.g. 6x5 크기의 2차원 배열로 저장. 텍스처 좌표는 정규화 형태로 표현.
- 텍스처 매핑: (s,t) 좌표로 표현된 2차원 텍스처 영상을 (x,y,z) 좌표로 표현된 3차원 물체면으로 사상

### 평면다각형으로의 텍스처 매핑
수작업 좌표명시

(좌표 사진)

### 매핑 방향
다각형에서 텍스처로
- 화소별로 해당 텍스처를 구함
```
V  = αP  + βQ  + γR
V' = αP' + βQ' + γR'
```

에일리어싱 발생가능

투영 이후에 텍스처를 가하는데 따른 오류

### 곡면의 텍스처 매핑
평면으로 곡면을 둘러사는데 따르는 어려움
- 역으로 곡면으로 평면을 만드는데 따르는 어려움

(곡면 텍스처)

### 파라미터 곡면
예: 원구(표면상의 점을 경도, 위도로 표현가능)
```
z = r cos v
y = r sin v cos u
x = r sin v sin u
```
(좌표 매핑 짤)

```
u = 2πs, v = 2πt

z = rcos2πt
y = rsin2πt cos2πs
x = rsin2πt sin2πs
```

### 다각형 곡면
2단계 매핑(2-Stage Mapping)
- 곡면을 매개변수로 표시할 수 없을 때
- S 매핑에서는 텍스처를 원기둥, 육면체, 원구 등 중개면(Intermediate Surface)에 입힘.
- S 매핑의 예: 원기둥 중개면

(원기둥 중개면 짤)

매핑
- 물체를 중개면 내부에 넣고 물체면에 텍스처를 입힘.
- 원기둥, 육면체, 원구 중개면

(원기둥, 육면체의 주전자 매핑 짤)

매핑의 종류
- 물체면 법선벡터, 물체 중심, 중개면 법선벡터, 시점 반사벡터

(각자 짤들, 글자 그대로임)

### Environmental Mapping
경면 반사(Specular Reflection)를 위주로 표현할 수 있는 물체, 반사 매핑(Reflective Mapping). e.g. Terminator II

2단계 매핑 사용
- 매핑에서 시점 반사벡터를 사용
- 시점 위치에 따라 서로 다른 모습

(방 안의 풍경이 주전자에 비치는 짤)

원구 중개면의 예
- 물체주변 모습을 광각으로 반영
- 180도 어안렌즈로 촬영된 텍스처

### 애일리어싱
텍스처 매핑
- 비선형 매평(Non-Linear Mapping): 평면 사각형이 곡선 사변형(Curvilinear Quadrilateral)으로

(평면 사각형이 곡선 사변형으로 매핑되는 짤)

점 샘플링(Point Sampling)에 의한 애일리어싱: 언더샘플링

### 확장관계와 축소관계
축소관계(Magnification): 여러 텍셀이 한 픽셀로

확장관계(Minification): 텍셀 크기 이하가 한 픽셀로

두 경우 모두 애일리어싱 발생가능

(텍셀에서 픽셀로, 축소관계와 확장관계 짤)

### 안티애일리어싱: 양방향 선형보간
확장관계에 주로 사용: 화소 중앙점이 텍셀의 점 p로 사상되었을 경우

대부분 그래픽 카드에서 표준으로 채택

텍스처 경계선이 흐려짐

이거 잘 이해가 안감...

### 안티애일리어싱: 밉뱁(MipMap)
축소관계에 주로 적용: 한 화소가 여러 텍셀이 걸쳐ㅇ짐

Mip Mapping: Multum in Parvo, Many Things in a Small Place
- 해상도 별로 평균치를 계산하여 텍스처 맵에 저장(R,G,B 별)
- 사전 필터링(Pre-Filtering): 텍셀이 4x4 크기고 화소가 2x2 크기일 때, 텍셀의 2x2만 가져와서 픽셀에 매핑
- 다해상도 텍스처(Multi-Resolution Texture): 텍셀의 4x4 크기고 화소가 2x2 크기일 때, 음... 그냥 중간 색으로 매핑하는듯

### 밉맵 예시
해상도에 따라 밉맵을 선택
- 1 화소가 1 텍셀로 매핑: Map #1
- 1 화소가 4 텍셀로 매핑: Map #2 (: 4 텍셀을 한 화소로 줄일 때 색깔 평균 음)
```
0 0 0 0
0 3 0 0
0 3 3 0     0 3
3 0 0 0  →  3 0

↓

1 0
2 1              TODO: 더 하기
```

평균 낸 텍스처 값을 사용함으로써 안티-애일리어싱을 기함.

11장 필기하다가 그만둠

> Nov 29 w12

**기말** 11장은 시험범위가 아님. 12장 (Animation) 시험 범위가 맞음

책: 호모데우스를 읽어 보라.

## Shadow and Radiosity
Advanced Rendering Technique

Contents
- Shadow 생성 방법 이해
- Raytracing Review
- Radiosity 방법 이해
- Raytracing vs Radiosity

### Shadow
Shade: 음영

Shadow: 그럼지
- Shadow 표현: 상대적으로 단순한 연산으로 매우 사실적인 효과
- 조명과 별도로 취급
- 그림자가 없는 경우: 공중에 떠있는 느낌
- 광원 특성에 따른 구분: 방향성 그림자, 위치성 그림자

### 반영과 본영
본영, 본 그림자, Umbra, Hard Shadow

반영, 반 그림자, Penumbra, Soft Shadow

그림자
- 주변광에 의해 보임
- 산란으로 인해 본영과 반영의 경계선이 흐려져 보임

### Why are Shadows Important?
- Depth cue
- Scene Lighting
- Realism
- Contact points

### Shadow as Depth Cue
Image adapted from: Palmer, Stephen E. Vision Science: Photons to Phenomenology. MIT Press. May 1999. ISBN: 0-262-16183-4.

### For Intuition about Scene Lighting
- Position of the light e.g. sundial
- Hard shadows vs soft shadows
- Colored lights
- Directional light vs point light

### Shadows
One shadow ray per intersection per point light source (본영만 반영)

### Soft Shadow
Caused by extended light sources

Umbra: source completely occluded

Penumbra: source partially occluded

Fully lit

Multiple shadow rays to sample area light source (본영과 반영 반영)

면적광원: 부피를 지닌 광원

### Shadow in Ray Tracing
Shoot ray frmo visible point to light source

If blocked, discard light contribution

Optimization?
- Stop after first intersection (don't worry about tmin)
- coherence: remember the previous occluder, and test that object f...

### Traditional Ray Tracing
### Ray Tracing + Soft Shadow
### Soft Shadow 기법
면적 광원의 근사화
- 교집합: 본영 (intersection)
- 합집합-교집합: 반영 (union of point 1,2,3 - intersectino of 1,2,3) (1,2,3 are points on area light source)

### 지면 그림자 (Ground/Planner Shadow)
Ground Plane Shadows
- Projection Shadows
- 바닥에 투영된 그림자만을 고려하며, 물체면 간의 그림자는 고려치 않음
- Object Space Method.

Cast Shadows on Planar Surfaces
- Draw the object primitives a second time, projected to th ground plane

Limitations of Planar Shadows
- Does not produce self-shadows, shadows cast on other objects, shadows on curved surfaces, etc.

### Shadow Map
화소 단위의 영상공간 알고리즘
- 광원기준 가장 가까운 물체면과의 거리(A)를 섀도우 z-buffer에 저장
- 은면제거를 위해 시점기준 가장 가까운 물체면 화소를 구함
- 해당 화소 물체면으로부터 광원까지의 거리(B)를 구함
- B>A면 해당 화소는 그림자 영역 내부에 존재함

### Ray Tracing Review
Ray Tracing은, Radiosity와의 차이를 알려드리려고 넣었어요

그림자광선, 반사광선, 굴절광선

I1 = Ambient + C (Diffusive Reflection + Specular Reflection) 

C=0 그림자 광선과 다른 물체가 만나면

반사 광선: 입사각과 반사각이 동일한 경면 반사만을 추적

굴절 광선: 물체면이 투명한 경우에 추적

Snell's Law: 굴절광선의 진행방향    αsinA = βsinB     **시험 문제 (기말)**

레이 트레이싱 그림 **시험 문제 (기말)**

#### 경면계수와 굴절계수
I = I1 + Kr×I2 + Kt×I3

Kr: 경면계수    Kt: 굴절계수

#### 재귀적 광선추적과 레이트리
#### 레이 트레이싱
다각형 사이의 상호작용
- 이면 제거 (Backface Culling)를 허용하지 않음.
- 은면 제거(Hidden Surface removal)를 허용하지 않음.
- 그림자 연산이 자동으로 이루어짐.

2개의 광원에 의한 하이라이트, 하드 섀도우 생성

레이 트레이싱
- 모든 화소에 대해 광선을 추적
- 각각의 광선과 마주치는 모든 면을 발견
- 이 모든 면에 대해 반사광과 굴전광의 세기를 계산

연산의 가속
- 빛의 세기가 일정 한도에 다다르면 추적을 끌냄: 임계치 설정
- 다각형과의 교차점 계산에 BV 활용: BV TEST (경계부피 말하는 듯?)

#### 교차점 계산
평면과의 교차점: Ax + By + Cz = D로 표현되는 평면

#### 레이 트레이싱 결과

### Radiosity
- 전역 조명모델: 물체면 상호간의 빛의 움직임을 조명모델에 반영
- 확산광만을 추적
- 시점의 위치에 무관

물체면 사이에 교환되는 빛 에너지의 양을 추적: 빛은 일종의 에너지이며 Enercy Conservation law 성립

#### Various Reflections
Ideal diffuse (Lambertian)

Ideal specular

Directional diffuse

#### Radiosity Concept
radiosity of each surface depends on radisoity of all other surfaces.
- Treat global illumination as a ilnear system
- Need constant BRDF (diffuse)
- Solve rendering equation as a matrix problem

#### Ray Tracing vs Radiosity
Ray tracing is an image-space algorithm. If the camera is moved, we have to start over

Radiosity is computed in object-space. Viwe-independent (just don't move the light); can pre-compute complex lighting to allow interactive walkthroughs

#### Radiosity
Outgoing Power of i

= (power Emitted by i) + (Power Reflected by i)

= (Power Emitted by i) + (Reflectance of i) × Σ j (Fraction of Power Leaving j Entering i)

빛의 총량 AiBi = AiEi + ρi Σ j=1 to n Fji Aj Bj
- Bi: i번 다각형에서 나오는 빛의 밀도
- Ai = i번 다각형의 면적
- Ei = 스스로 발하는 빛의 밀도
- ρi = i번 다각형의 반사계수
- Fji = j번 다각형에서 출발한 빛이 i번 다각형에 도달하는 비율 (형상인수)

#### Form Factor
**시험 문제 (기말)** **(뇌피셜)**

형상인수 Fij
- j번 다각형에서 출발한 빛의 몇%가 i번 다각형에 도달하는가?
- 면들 사이의 기하학적 관계에 따라 결정
- 마주 볼수록, 거리가 가까울수록 높음.

#### 형상인수 연산
Fji = 1/Aj ∫Aj ∫Ai Vji cosΦjcosΦi/πr^2 dAi dAj

dAi, dAj로 분할: 분할면마다 서로 바라보는 각도가 달라짐

Vji: 가시성변수 Visibbility Variable: j에서 i를 바라보았을 때 중간에 가리는 물체가 없으면 1, 있으면 0

#### 역 정리(Reciprocity Law)
j에서 i를 향한 형상인수에 j의 면적을 곱한 것은 i에서 j를 향한 형상인수에 i의 면적을 곱한 것과 같다. 두 개의 면 사이에 교환되는 빛의 양이 동일하다.

#### 빛 에너지의 교환: Solve for Bi!

### 조명 비교
지역조명모델과 radiosity

Radiosity: 간접반사로 인해 전반적으로 밝은 모습

#### 레이트레이싱과 radiosity
. | 레이트레이싱 | radisoity
--- | --- | ---
표면종류 | 반짝이는 면, 투명한 면 | 거친 면(완벽 환산체 가정)
반사광 추적 | 경면광, 굴절광 | 확산광
모델링 대상 | 폐쇄 공간 또는 개방 공간 | 폐쇄 공간
시점의 위치 시점에 따라 결과 변화 | 시점에 무관
광원 | 점광원으로 취급 | 면적광원으로 취급
시각적 효과 | 선명한 반사, 선명한 그림자 | 은은한 반사, 은은한 그림자
알고리즘 | 영상공간 알고리즘 | 객체공간 알고리즘
연산속도 | 느림 | 느림

> Dec 6 w13

## Computer Animation
Chapter 12 Computer Animation

Main goal of computer animation

What is Animated?

Animation의 종류

### Frame-Based Animation

### Cast-Based Animation

### Cel Animation

### Principles of Computer Animation

### Keyframe Animation

### Story Boarding

### Morphing

### Rotoscoping

### 2D Animation Technique
Onino-skinning

### Anticipation

### Slow In and Out

### Other Media for Animation

### 3D Animation Technieque

### Mass-Spring Model

### Vector Muscle

### Layered Spring Mesh Muscles

### Free Form Deformation

### 기타









기말 | 고사
--- | ---
일시 | 12월 13(수) 2:00 PM
장소 | 강의실
시험범위 | 7.4투영(Projection), 8장, 9장, 10장, 12장
