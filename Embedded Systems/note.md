# Embedded System

DD751

Processor: Byung-Dai Lee

### Class Overview & Goals
- 강의내용
  - Basic H/W
  - not specific embedded
  - Emedded OS - linux
- Prerequisites
  - C programming skills
  - 컴퓨터 구조 관련 기본 지식 (recommendedm not required)

### Administrivia

#### Textbook
- 주교재 -> ppt로대체
- 보조 교재
  - 임베디드 리눅스 기초와 응용 by 우종정, 사공준
  - Embedded Linux Primer by C. Halinan (Optional)
- Class website
  - htts://rtos.kyonggi.ac.kr

#### Class Schedule
- 화요일 (6-8교시)

#### Instructor
- 이병대 (blee@kgu.ac.kr, 031-249-9676, 010-3243-5724)

#### Class Schedule (tentative)
중간고사

HW, Interrupts, Embedded Linux, Bootloader/Kernal Image/File System, System call/Module programming

기말고사

HBE-SMIII-SV201,   안드로이드 APP 개발, JNI, Buzzer, LED Device, 7-segment device

#### Assignment
- Programming Assignment
- Term project
  - 2인 1조 (또는 1인 1조)

#### Assignment Requirements
- Programming assignments
  - 소스 코드 및 설계 문서 제출
  - 설계 문서 템플릿은 추후 공지
  - 반드시 정상 동작하는 코드 제출할 것
  - Originality/Readability/Exception Handling이 탁월한 코드의 경우 추가 점수 제공, 반대의 경우 감점 처리
  - 자신의 코드 내용 중 appeal하고자 하는 부분이 있을 경우 설계 문서에 추가할 것
- **DO NOT COPY OTHERS' SOLUTIONS**
  - 인터넷에서 확보한 코드를 재사용할 경우 반드시 출처를 밝힐 것

#### Grading
- Don't copy (Android는 출처 명시하고 copy 가능)
- 출석 4결석시 F

#### Term Project
- Android
  - 별로안함
  - Java
- Linux
  - C
  - D/D program
  - Version: 옛날 Ubuntu, 근데 메커니즘은 같애
- Emedded
- (H/W) (Android machine)
- Android app 에서 명령어 타고 내려가기

> 현업에가면 타겟H/W의 특성에맞게 코딩을해야

## - JNI (Java Native)
> 코딩할때 짜증남  중간간고사만 보고 기말은 프로젝트로 대체예정
>
> Sep 5

### HW Fundamentals
- Processor
- Memory
- I/O
- System bus

### Embedded systems
- 내장
- 특정 기능
- 특정 요구사항
- 컴퓨팅 시스템

### Why do we have to learn H/W?
- H/W 직접 제어
- Register access
- H/W spec 확인

### H/W Structure
- Processor
- I/O
- memory

### Functional diagram

### Processor
- Registers
  - Register to CU
  - Flip-flop and Latch
  - 종류
  - 범용
  - 제어용
    - Program Counter
  - 상태
    - 프로세스의 상태를 나타냄
- ALU (Arithmetic & Logic Unit)
  - 수학적 연산 
  - 연산 결과를 상태 혹은 flag 레지스터에 기록
  - Carry, Overflow occur
- CU (Control Unit)
  - PC -> Address -> Memory -> Inst. s -> CU
  - CU: IR -> Inst. Decoder <- ... -> 제어 신호 발생기
  - 내부 제어 신호
  - 외부 제어 신호
- Bus
  - Internal bus
  - 공유
  - ALU - Register -> Register
  - External bus
  - Memory - Processor
  - Data Bus
    - 데이터를 외부 장치에 전달하거나 외부 장치로부터 읽어오는 경로
  - Address Bus
    - 프로세서에서 기억 장치나 I/O 장치의 주소 정보 전송 경로
  - Control Bus
    - 프로세서에서 기억 장치나 I/O 장치에 입/출력 동작을 지시하는 제어 신호를 전송하는 경로
- Soc (System on Chip)
  - 프로세서를 메모리, I/O 장치 등 시스템 기능을 칩 하나에 구성한다
  - MCU, MPU
  - Micro Controller Unit, Micro Processor Unit
  - 프로세서, 메모리, 일부 I/O 장치를 내장한 SoC
  - 소형
- DSP (Digital Signal Processor) 
  - 행렬연산
- 프로세서의 종류
  - i386
  - ARM
  - PowerPC
  - MIPS
  - M68K
  - Instruction set에 따른 프로세서 구조
  - CISC (Complex Instruction Set Computer)
  - 복잡명령어
  - 성능낮다
  - clear 0x1000    load r1, #5
  - 메모리 참조 연산
  - 전력 많이 먹냐
  - RISC
  - 단순명령어
  - 성능높다
  - xor r1, r1    store r1, 0x1000    addr1, #5
  - Load/Store 구조
  - 메모리 많이먹음

### Memory
Save program and data

- 종류
  - Primary storage
  - DRAM을 주로 사용
  - Auxiliary memory
  - HDD
  - Cache
  - 프로세서 주변에 소용량의 메모리를 배치한다
  - SRAM을 주로 사용
- 휘발성: DRAM, SRAM
- 비휘발성: ROM, FLASH (NOR, NAND)

#### Flash memory
- New data can be written into flash memory only a certain number of times before it wears out (10K-1M)
  - Wear-leveling
- Operates based on block of data, not a byte (or bytes)
- Erase must precede update -> update is very slow
  - Out-place update
- The MCU can't fetch instructions from the falsh memory while it writes new data into the flash
  - The flash programming program must be stored somewhere else when it is actuallyl running
- **Traditional file system cannot be used for flash memory**
  - FTL (Flash Translation Layer), JFFS, JFFS2, YAFFS
- NOR, NAND Flash
- 병렬, 직렬 연결
- Expensive , Cheap
- Capaticy: Low , High
- Erase unit: Block , Block
- High speed and stable read , Low cost and high capacity
- Usage: Code , Data

#### Memory System
- MMU (Memory Management Unit)
  - Address translation: Virtual -> pyhysical
  - Memory protection
- Memory Controller
  - Address decoding
  - 제어신호: Processor -> Memory controller -> DRAM , FLASH
  - 메모리 제어 신호 구동
  - Figure:
  - ADDR    0111addr1110
  - nCS    001111111100
  - nWR    000111111000
  - DATA    0000data0000

#### Cache
- May Occur Data Inconsistency (데이터 무결성 깨짐)
  - 캐시에 데이터 배껴쓰고 캐시를 변경하면 메모리와 캐시가다름
  - write-through, write-back으로해결
- Cache write operations
  - Write-Through
  - CPU가, 어떤 주소에 데이터를 Write할 경우, 해당 데이터가 Cache에 존재할 경우, Cache와 외부 메모리에 동시에 Write 동작 수행
  - Write-Back
  - CPU가 어떤 주소에 데이터를 Write하는 경우, 해당 데이터가 Cache에 존재하는 경우, Cache메모리에만 Write 동작 수행. 해당 Cache가 replace될 때 외부 메모리에 Write 동작 수행

> 이수업의 핵심은 리눅스 모듈? 모듈 프로그래밍을 해서 D.D를 만들ㅅ있다 -> 성공

#### Address
- Address bus
  - 1KB 메모리를 구분하기 위해선 10개의 address 신호선 필요
  - 1MB 메모리를 구분하기 위해선 20개의 address 신호선 필요
  - 신호선은 A_0, A-1.. 등으로 표기

e.g.

16개 신호선 (64k) 일때

rom, ram이 32k, 32k면

rom low, high address -> 0x0000, 0x7fff

ram low, high address -> 0x8000, 0xffff

32k -> 15-bit representation

A_15 go to ROM, RAM

CE of ROM, RAM, accept bit 0, 1.

- A_15 is highest bit of 16-bits
  - Higests bit choose ROM or RAM
- 0x9123 -> 0x1123 in RAM

#### I/O Device
- I/O  장치를 제어하기 위해서는 Address Mapping이 필요하고, 데이터를 교환하기 위해 데이터 버스 및 제어 신호 사용

- Address Mapping
  - I/O-mapped
  - I/O: 0, 1, 2, .., Memory: 0, 1, 2..
  - write R1, 0x0011 (memory or I/O? Don't know, need distinguish instruction)
  - write*M R1, 0x0011*
  - ​
  - *write*IO R1, 0x0011
  - 메모리 주소와 I/O 주소를 구분하는 신호가 별도로 존재
  - x86
  - Memory-mapped
  - 0x 0000, ...., 0x1111 for memory, higher->I/O
  - Write R1, 0x0011 (0x0011 is memory)
  - Address decoding 회로에서 메모리 혹은 I/O 장치 선택
  - ARM pc

#### I/O resource control
- Polling
  - 장치의 상태를 지속적으로 검사
  - I/O 장차 연결 여부
  - 데이터 전송 요청, 데이터전송 종료 검사
  - 우선순위가 높은놈이 낮은놈의 많은 처리량때문에 일을못할수도
- Interrupt
  - Multitasking 
  - 장치에서 Interrupt
- DMA (Direct Memory Access) (DMA)
  - CPU의 개입 없이 I/O 장치와 기억 장치 사이에 데이터를 전송하는 방식

#### Interrupt controler
- 다수의 I/O 장치로부터 구동되는 인터럽트를 효과적으로 처리하기 위한 장치
- MASK register, Pending register를 가지고 있음
- 일부 프로세서의 경우 인터럽트의 응답을 위한 신호를 사용하는 경우도 있음
- Figure
- Processor
- to Processor: irq, to Controller: irqakc (IRQ: Interrupt Request)
- Interrupt Controller
- to Controller: Interrupt request
- UART, KEY, .., ETHERNET
> RESET button: Highest priority

#### Control flow fo process when interrupt occured
- Function-call like
- Figure
- MAIN, ..., INT occured, ISR, return to main, ..., INT occured, ...
  - ISR (interrupt service routine)
  - Codes proceeding interrupts

#### Interrupt Request & Handling
- 외부 장치에서 I/O 동작에 대한 처리를 프로세스에 요청

#### Interrupt Vector Table
- Memory address of ISR
- Fixed Interrupt
  - Fixed ISR address 
- Vectored Interrupt
  - Address Pointers
  - OS booted, initialize ISR vector table.

> Sep 12

#### DMA (Direct Memory Access)
1. Block 10k, 1M
2. CPU 개입 x I/O 장치와 메모리 사이에 데이터를 주고받는다

- DMA 제어기

> 질문

> dma가 메모리에 데이터를 쓰고있어요 그 중에 CPU가 PC의 주소의 메모리의 명령어를 읽어들임

> DMA를 쓰게되면 가장 큰 문제가 머냐면 DMA와 메모리가 시스템 버스를 쓰고 있을 댄 CPU가 시스템 버스를 쓰지 못합니다

> CPU와 메모리가 쓰고있어도 DMA가 못 씀

- 프로세서와의 Bus Contention 해결 필요

#### DMA Approach (1)
- DMAREQ -> BUSREQ -> BUSACK -> WRITE/ -> Addr. and Control (READ/WRITE)

#### DMA Approach (2)
- I/O -> DMAC -> RAM

> (1)은 DMAC에 데이터를 안보내기 때문에 (2)보다 빠를 수 있다

#### UART 
- 시리얼 포트

모든 장치가 있으면 장치 컨트롤러가 있고, 컨트롤러엔 레지스터, 레지스터엔 메모리 주소

#### GPIO (Genrel Purpose IO)
범용

- GPIO registers in ARM9 (x = A..H)
  - GPxCON - GPIO 사용 방법 결정 (입력 또는 출력)

### System Bus
Von-Neuman Architecture

Harvard Architecture

- 속도가 빠르지만 복잡

Bus HandShaking

- CPU
- data, address, control bus
- RAM

메모리 특정 위치에 있는 데이터를 읽어들이고싶다, 주소정보가 address bus 타고가야하고, control bus 로 read가 가야하고, 일정 시간이 지나면 databus 타고 데이터가 오겠지

CPU와 RAM이 속도가 맞으면 괜찮은데 RAM은 느려요

CPU는 한 사이클 뒤에 보낼 걸 예상하는데 RAM은 두 사이클 뒤에 보냄

Wait Signals
메모리가 기다려라, 라고 얘기할수도있고 CPU가 한사이클 더 기다릴수도.

칩디자인, 완전 로우레벨

나중에 타이밍 다이어그램을 봐야 할 수도 있으요


#### Embedding S/W Programming

## Interrupts
### Interrupt
- ​A way for I/O devices to communicate with microprocessor 
- ​When an interrupt happends, the microprocessor stop doing what it is doing and excute ISR. When ISR is completed, the microprocessor resumes from the point where it stopped
- Interrupt starts with a signal from H/W
  - ​An I/O device has a pin that it asserts when it requires service from a mocriprocessor, which, in turn, is attached to an input pin on the microprocessor, called an IRQ (interrupt request)

#### Interrupt Hardward
- Interrupt Controller
  - 문제점: CPU는 Interrupt Controller가 INT를 발생시켰기 때문에 구체적으로 어떤 디바이스인지 모르기 대문에 그걸 말하는 코드가 있다

#### Interrupt Number
- Individual interrupt is associated a unique number
- ​Datasheet of the microprocessor/target board

#### 인터럽트 종류 
- Maskable Interrupt
  - S/W에 의해 enable/disable 이 가능하다
- Nonmaskable Interrupt
  - e.g. Reset
  - S/W에 의해 enable/disable 이 가능하다
#### Iterrupt Nesting
- ​비동기 이벤트이기 때문에 여러 개의 인터럽트가 동시에 발생할 수 있다
- 모든 인터럽트에 대해 우선 순위를 정의해도구 높은 순위의 인터럽트를 낮은 보다 우선 처리한다 -> interrupt nesting 

#### ISR (Interrupt Service Routine)
- 발생한 ​인터럽트를 실제로 처리하는 S/W
- ISR 작성 시 주의점
  - ISR은 block되면 안됨
    - 나: 블락되면 하던작업을 잃어버려서?
    - 무한루프되면 메인 프로그램이 기다리느라 먹통이 됨
    - 빨리 메인 프로그램으로 되돌아가야한다
  - ISR은 엄청나게 빨리 처리가 되어야 한다
    - Top-half 은 빠르게 처리하고
    - Bottom-half 은 백그라운드에서 느긋하게 처리한다
  - Context save & restore
    - 스택, 레지스터, pc
    - Compiler support available: 모든 ISR에 반드시 있어야하기 때문에 컴파일러가 context save and restore 코드를 자동으로 넣음

#### IVT (Interrupt Vectore Table)
- IVT는 H/W의 특정 주소에 위치한다
  - e.g. JUMP<ADDR> JUMP<ADDR> JUMP<ADDR> (indirect) ISR1 (indirect) ISR2 
  - e.g. ARM 프로서의 경우 IVT는 0x00에서부터 한 word씩 해당
- 인터럽트 - ISR 매핑
- IVT의 각 엔트리에 저장되는 값은
  - ISR의 주소
  - ISR로 점프하기위한 명령어

#### e.g. ARM Processor
듀얼 모드 오프레이션
유저모드에선 시스템에 크리티컬하지않는것만 실행하게하고
커널모드에선 시세틈에 크리티컬한것도실행함

- 동작 모드
 - 7개의 동작모드 정의
- User/FIQ/IRQ/SVC/Abort/Undefined/System
  - FIQ: 고속의 인터럽트를 처리해야 할 경우 사용
  - IRQ: 일반적인 인터럽트를 처리하는 모드

PSR: Program Status Register

- 레지스터
  - CPSR
  - SPSR
  - SP (Stack Pointer)
  - LR (Link Register)

- PSR Register

###### H/W 예외 처리 순서
1. INT 발생
2. CPSR을 SPSR에 복사
3. CPSR의 비트를 수정
4. 되돌아갈 주소를 LR에 저장
5. PC를 IVT의 해당 벡터 주소로 설정

> 모든 종류의 인터럽트에 이 과정이 반드시 실행이기때문에 H/W로 만들어놨다

###### S/W 예외 처리 순서
1. 범용 레지스터를 스택에 저장
2. ​예외 처리 코드 실행
3. ​범용 레지스터 복원
4. ​PC값을 LR_<mode>로부터 복원
5. CPSR값을 SPSR_<mode>로부터 복원

##### Interrupt Latency
- Interrupt Latency refers to the amount of time it takes a system to respond to an interrupt
  - Shorter is good

###### e.g. Can we respond within 625 us?
- IPC: 0
- time: 300
- temp: 550

###### e.g. Can we respond within 625 us if we add a network hardward for which ISR takes 100 us?
- 나: 675 되나? (network 우선순위 가장낮을때)
- Network가 우선순위 가장높으면? 300?
  - IPC를 하고
  - 남은것중 가장 n/w이 높으니까 n/w실행됨 -> 300

## Embedded System 개발
- 교차 개발 환경
  - Host System
    - PC
  - Target System
    - Kit
  - Backend
    - Serial cable
  - Native compiler: PC에서 동작하는 프로그램을 PC에서 컴파일한다. 즉 컴파일러가 돌아가는 환경이 컴파일 결과물의 돌아가는 환경과 같다.
  - Cross Compiler: Host system에서 개발한 프로그램을 target system의 기계어로 변환하는 컴파일러. 즉 다르다.

- Toolchain: 교차 컴파일을 위해 필요한 cross compiler 및 라이브러리들

> 
> Sep 19
> 

Windows: Host OS

Linux: Guest OS

> 오 vmware workstation 편한데 내컴에서도 이거 써볼까	

> player는 공짜고 워크스테이션은 유료

> 차이: 풀스크린

## Linux Overview
- 안정된 운영체제
- 멀티태스킹
- 강력한 네트워크 기능
- 확장성
- 다양한 파일 시스템과 실행 파일 포맷 지원
- 소스 공개

### Monolithic 커널 구조
- os의 모든 기능을 통합한 구조로, 커널 모드에서 모든 기능 수행
- 리눅스는 이걸 쓰지만 micro-kernel의 장점을 모듈 개념으로 도입

### Micro-kernel 구조
- 커널의 기능을 최소화

모듈을 만들어 보는 거에요

### 리눅스 커널 구조

### 리눅스 부팅 과정
1. rom bios가 시스템 이상을 점검하고 H/W를 초기화한다
1. Bootloader를 램에 로드
1. 부트로더가 커널을 램에 로드
1. 실행된 커널이 최초 프로세스인 /sbin/init을 실행
1. init 프로세스는 운영체제를 초기화한다

### 디렉토리 구조
리눅스 디렉토리 구조는 리눅스 커널의 소스 구조와는 다름

> 최신 리눅스는 많이 바뀌었어요

- / (root)
  - 루트 디렉토리
  - 다른 파티션의 연결점
- /bin
  - 기본 명령어 e.g. cp, mv
- /boot 
  - 부팅에 필요한 커널과 관련 파일들
  - 부트로더가 커널의 위치를 참조함
- /dev
  - 장치 파일
- /etc
  - 애플리케이션 프로그램과 서버프로그램이 환경 설정에 필요한 설정 파일들
- /home
  - 일반 유저의 홈 디렉토리가 생기는 곳
  - ftp, mysql, tomcat 등 공간을 요구하는 서비스 디렉토리를 여기에 만들자
- /lib
  - 시스템과 프로그램이 쓰는 공유 라이브러리들
  - 커널 모듈
- /mnt
  - 외부 장치의 기본 마운트 포인트를 제공
- /proc
  - 가상 파일 시스템
  - 문자 디렉토리 파일: 시스템과 커널 정보
  - 숫자 디렉토리: 프로세스 정보
  - 이 파일들은 hdd가 아니라 램에 있다
- /sbin
- /tmp
- /usr
- /lost+found
- /var

### 명령어
#### ls - list directory contents
- SYNOPSIS
  - ls [OPTION]... [FILE]...

- DESCRIPTION
  * -a, --all: do not ignore entries starting with .
  * -l: 자세하게

- rwxrwxrwx
  - owner group others
  - read write execute

#### cd [DIR]
- cd ~, cd $HOME: 홈 디렉토리

#### cp [OPTIONS] s d
* r: recursive
* R: 디렉토리 포함 

#### mv [OPTIONS] file, mv [OPTIONS] s d
- f: force
- i: interactive
- r: recursive

#### rmdir

#### pwd [OPTIONS]
- 프린트 디렉토리명

#### cat

#### more

#### touch [OPTIONS] file

#### mkdir [OPTIONS] name

#### tar [OPTIONS] file [DIR]
- tar cvf tarname.tar dir: dir의 모든 파일을 tarname.tar로 묶는다
- tar cvf src.tar *.c: 현재 디렉토리의 모든 *.c 파일을 src.tar로 묶는다
- tar xvf a.tar: 푼다
- tar tf a.tar: a.tar의 내용물을 프린트 (안 풂)
- z: gzip도 

#### ps [OPTIONS]
* -e, -A: all process on system


#### top [OPTIONS]
* 프로세스의 시스템 리소스 사용 현황을 표시

#### kill [OPTIONS] pid
- kill proces
* -9: force

#### su -[loginID] [OPTIONS]
su -: login root account 

#### sudo command, sudo minus u username command

#### shutdown [OPTIONS] time message, shutdown now

#### reboot

#### apt-get install/remove/update/upgrade package_name
e.g. sudo apt-get install tree

#### history

#### make utility
```
embedded@ubuntu:~$ cat Makefile 

hello : hello.o hello_main.o
        gcc -o hello hello.o hello_main.o

hello.o : hello.c
        gcc -c hello.c

hello_main.o : hello_main.c
        gcc -c hello_main.c

embedded@ubuntu:~$ nano hello.c
embedded@ubuntu:~$ nano hello_main.c
embedded@ubuntu:~$ man rename
embedded@ubuntu:~$ ls
cat      Documents  examples.desktop  Makefile  Pictures  Templates  top.txt
Desktop  Downloads  hello.c           Music     Public    testdir    Videos
embedded@ubuntu:~$ rename hello.c hello_main.c
Bareword "hello" not allowed while "strict subs" in use at (eval 1) line 1.
Bareword "c" not allowed while "strict subs" in use at (eval 1) line 1.
embedded@ubuntu:~$ cp hello.c hello_main.c
embedded@ubuntu:~$ cat hello_main.c 
#include <stdio.h>

extern print_hello();

int main() {
  print_hello();
  return 0;
}
embedded@ubuntu:~$ nano hello.c
embedded@ubuntu:~$ cat hello.c
#include <stdio.h>

void print_hello()
{
  printf("%s\n", "Hell world!");
}
embedded@ubuntu:~$ cat hello_main.c 
#include <stdio.h>

extern print_hello();

int main() {
  print_hello();
  return 0;
}
embedded@ubuntu:~$ make
Makefile:3: *** missing separator (did you mean TAB instead of 8 spaces?).  Stop.
embedded@ubuntu:~$ cat Makefile

hello : hello.o hello_main.o
        gcc -o hello hello.o hello_main.o

hello.o : hello.c
        gcc -c hello.c

hello_main.o : hello_main.c
        gcc -c hello_main.c

embedded@ubuntu:~$ nano Makefile 
embedded@ubuntu:~$ make
gcc -c hello.c
gcc -c hello_main.c
gcc -o hello hello.o hello_main.o
embedded@ubuntu:~$ hello
The program 'hello' can be found in the following packages:
  * hello
  * hello-debhelper
Try: sudo apt-get install <selected package>
embedded@ubuntu:~$ ./hello
Hell world!
embedded@ubuntu:~$
```

### makefile 
```
filename : [file1, file2, ...] (dependency)
[tab]	command
[tab]	command
...


$ make 치면 makefile의 가장 상단(target1)을 실행하게 되요
$ make target2(makefile의) 치면 t2를 실행하게 되요
```

### 매크로
- 매크로를 정의한 후 $MACRO로 실제 사용
- 파일 이름 바꾸면 makefile에서 다 찾아서 바꿔야하는데 귀찮잖아요
```
TARGET = hello
OBJECTS = hello.o hello_main.o
CC = /usr/bin/gcc

$(TARGET) : $(OBJECTS)
        $(CC) -o $(TARGET) $(OBJECTS)

hello.o : hello.c
        $(CC) -c hello.c

hello_main.o : hello main.c
        $(CC) -c hello_main.c

clean : 
        rm $(TARGET) $(OBJECTS)
```
> Sep 26 4주차

**보강은 마지막 주에 할거니까 그렇게 알고 계세요**
## Linux File System
### 가상 파일 시스템 (VFS: Virtual File System)
내부적으로 어떤 파일 시스템이 오던지 상관이 없어요. 다양한 파일 시스템을 붙이기 좋은 시스템이다.**추상화**

1. application program
1. system call interface
1. vfs
1. iso9660 / ext2
1. cd-rom / disk

### NFS: Network File System
네떡에 있는 파일들을 마치 로컬에 있는 파일처럼 만들어주는거에요.

### JFFS (Journaling Flash File System)
- 플래시 메모리를 위한 파일 시스템
  - wear-leveling & out-place update(데이터를 지우고 작성해야하는 플래시의 특징을 고려한 시스템)
- 플래시 메모리를 시스템에 연결할 때 플래시 메모리 전체를 스캔하여 모든 inode를 읽어서 메뫼에 저장
- write 연산들을 일정한 단위로 한꺼번에 모아 로그에 기록

### Block 단위 파일 시스템
#### 디스크 블락 할당 방법
- 연속 할당
  - e.g. 블락크기가 1M고 파일이 10.7M 면 공간 중 연속된 빈 11M 공간을 찾아서 파일에 할당한다
  - e.g. a:0, b:5,6, c:8,9, d:13,14,15
  - first-fit, best-fit, worst-fit
  - 파일의 크기가 가변적으로 변화하는 경우 연속 할당을 사용할 경우 성능 저하가 발생한다
- 불연속 할당: 불연속적으로 흩어진 디스크 블락에 나누어 저장한다
  - linked allocation
    - 흩어진 블록들을 연결 리스트로 관리
    - 순차 접근하는 경우 효과적이지만 직접 접근 시에는 매우 비효율적
    - FAT
  - indexed allocation
    - 디스크 블록에 대한 위치 정보를 가지고 있는 인덱스 블록 사용
      - 블록이 할당될 때마다 해당 정보를 인덱스 블록에 기록한다
      - 직접 접근 문제 해결, 인덱스 블록 유지 비용 발생
    - 파일이 커지면 하나의 인덱스 블록만으로 관리가 불가능해진다
      - 여러 개의 인덱스 블록이 필요하면 이를 연결 리스트로 관리
    - 리눅스는 inode 기법을 이용한다
      - 모든 파일은 파일의 inode를 가지고 있다, 메타정보임
      - 디스크 주소 또는 인덱스 블록, * 인덱스 블록을 가질 수 있다
      - inode 하나로 대략 64GiB 파일을 해결할 수 있다

### Linux File System
- 리눅스에서는 디스크가 설치되면 장치 파일을 이용하여 해당 디스크에 접근한다
  - 장치 파일은 /dev에 위치한다
    - IDE 타입의 하드 디스크는 hda, hdb 등의 이름으로, SCSI 타입의 하드 디스크는 sda, sdb, sdc...
  - partition
    - logical division of a physical device
    - __파일 시스템은 파티션마다 하나씩 만들어진다__
    - /dev/sda1 => SCSI 타입의 첫 번째 디스크의 첫 번째 파티션
    - /dev/sda3 => SCSI 타입의 두 번째 디스크의 세 번째 파티션

#### 계층적인 파일 시스템 구조
```
리눅스가 부팅을 하면 모든 리눅스는 루트 파일 시스템이 존재해요
루트 파일 시스템을 마운트해요
매핑을 시킨단건 물리적으로 서로 다르지만 /test/mytest/ 를 물리적으로 다른 x 란 다른 파일 시스템으로 매핑시켜 준다는 거
매핑하는건 mount 라는 명령어
df 라는 명령어를 치시면 현재 마운트가 어떻게 되어 있는지 확인할 수 있어요
Filesystem     1K-blocks    Used Available Use% Mounted on
/dev/sda1       19478204 3827392  14638332  21% /
는 /dev/sda1 라는 파일시스템이 / (루트) 로 마운트되어있다는거에요
e.g. USB의 루트 디렉토리를 My Computer의 M:\ 로 붙여놓은거에요
그럼 USB는 따로 떨어져있지만, 논리적으로는 하나의 파일 시스템 안에 들어있는거에요
```

> 질문: 루트는 두개일 수 없나요?

> 대답: 없어요 하나임

#### EXT2 파일 시스템
- EXT (extended file system) -> ext2 -> ext3
- 여러분이 루트 디스크로 선택을 하면 부트 블록이 만들어져요
- boot block, block group 0, ..., block group n
- in block group n-1: Super block, group descriptors, block bitmap, inode bitmap, inode table, data blocks
- 파일 시스템 전체는 여러 개의 block group으로 구성된다

##### block group
- super block은 블록의 모든 정보를 담고 있는데 복사본을 여러곳에 뒤요
- group descriptor는, 각 블록 그룹을 관리하는 정보를 저장한다
- 블록 비트맵은, 블록이 사용되는지 안 사용되는지를 나타내요
- inode
  - inode가 깨지면 파일이 깨지는 거에요
- inode bitmap
- inode table
  - 각 inode들의 정보를 담은 inode descriptor 들로 구성된다
  - inode descriptor
    - mode, owner info, size, timestamp, ...
    - indirect block -> index block -> data block 가리킴
    - 파일 크기가 작으면 direct block 하나를 가지고 데이터를 가리킬 수 있음
    - blocks pointers array
      - 파일의 실제 데이터가 저장된 위치 e.g. 블록 번호

#### Proc 파일 시스템
- 물리적으론 메모리에 올라와 있음 논리적으론 /proc 에 위치한다
- 프로세스 정보를 담는다

> 리눅스에 대한 교양 차원이에요. 큰 줄기는 같지만, 명령어라든가 실행 순서는 리눅스 버전 종류별로 다를 수 있어요

### Linux Booting Sequence
1. 롬-바이오스 실행, 하드웨어를 인식하며 물리적인 손상 체크, 부트로더를 메모리에 로드, MBR (Master Boot Recod)를 메모리에 로드한 후 제어권을 넘김, MBR은 보통 부팅 매체의 0번 섹터를 지칭한다
2. 커널 실행, 복잡

### Linux Kernel Source
```
root@ubuntu:/# uname -r
3.19.0-25-generic
```
리눅스 커널 소스 (3.16으로 다운그레이드 시켜서 쓸 거에요)

윈도우에서 vm으로 드래그앤드롭으로 파일 옮기면 tar.gz 파일이 자꾸 자꾸 깨지더라 

### 시스템ㅡ콜!
```
main () {
    fork()
}
```
은 실행한다
```
fork() {
    EAX <- 2
    INT
}
```
유저 모드에서, 커널 모드에서 수행되어야 하는 서비스를 제공받기 위해 사용되는 프로그래밍 인터페이스 라이브러리 함수 이용

모든 시스템 콜에는 번호가 할당되어 있어요

시스템 콜 테이블이 존재합니다 그래서 커널이 무슨 콜인지 앎

OS 가 주는 시스템 콜은 한정적이고, 콜 마다 번호가 붙어 있어요

system call number defined in /usr/include/i386-linux-gnu/asm/unistd_32.h (or unistd_64.h)

#### 처리과정
1. 시스템 부팅 시 커널은 시스템 콜 테이블 초기화
1. 사용자 프로세스에서 시스템 콜 호출, 사용자 프로세스에서 시스템 콜을 발생하면, C/C++ 라이브러리에서는 발생된 시스템 콜에 해당하는 번호를 EAX 레지스터에 저장한 후 S/W 인터럽트 (0x80) 발생
1. 호출된 시스템 콜에 해당하는 번호를 확인하고 관련된 서비스 루틴 호출
1. 서비스 루틴 수행
1. 사용자 프로세스로 복귀

see system call (6) page

see system call (7) page

system call table - arch/x86/syscalls/syscall_32.tbl
```
0       i386    restart_syscall         sys_restart_syscall
1       i386    exit                    sys_exit
2       i386    fork                    sys_fork
3       i386    read                    sys_read
4       i386    write                   sys_write
5       i386    open                    sys_open
```

### 시스템 콜 구현
여러분이 기존에는 없었던 새로운 시스템 콜을 하나 만드려고 해요 간단하게 두 개의 정수를 더해서 결과를 반환하는 시스템 콜이에요 구현할 때의 절차들이 있어요 그대로 따라가셔서 만드시면 되요

1 번호와 이름 할당
  - 이름 addcall
  - 번호 354 (당연히 기존에 354가 없어야해요 유 니 크)
  - 파라미터: int, int, int*
  - /usr/src/linux-3.16/include/linux/syscalls.h 수정 (문서 끝부분에 추가)
```
root@ubuntu:/usr/src/linux-3.16/include/linux# vi syscalls.h
asmlinkage long sys_finit_module(int fd, const char __user *uargs, int flags);
asmlinakge long sys_addcall(int x, int y, int *result);
#endif
```
2 시스템 콜 테이블에 등록
```
root@ubuntu:/usr/src/linux-3.16/arch/x86/syscalls# emacs syscall_32.tbl
353	i386	renameat2		sys_renameat2
354	i386	addcall			sys_addcall
```
3 처리 함수 구현
```
root@ubuntu:/usr/src/linux-3.16/arch/x86/kernel# emacs addcall.c
#include <linux/unistd.h>
#include <linux/errno.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <asm/uaccess.h>

asmlinkage long sys_addcall(int x, int y, int *result)
{
  int sum;
  sum = x + y;
  put_user(sum, result);
  return 0;
}
```
왜 put_user를 쓰냐면 유저 모드와 커널 모드의 메모리 영역이 달라서 (커널 어드레스 스페이스 -> 유저 어드레스 스페이스) 데이터를 주고받으려면 이렇게 별도의 함수를 사용하셔야 해요

- kernel 수준의 데이터 전달
  - 데이터 교환 함수
  - copy_to_user(to, from, n) 커널 영역 (form)을 사용자 영역 (to)로 n 크기 만큼 복사
  - put_user(x,ptr) 커널 영역의 변수 x의 값을 사용자 영역의 ptr 메모리 값에 대입
  - copy_from_user(to,from,n) 유저 영역 from을 커널 영역 to로 n크기만큼 복사
  - get_user(x,ptr) 사용자 영역의 ptr 메모리값을 사용자 영역의 변수 x에 대입
```
root@ubuntu:/usr/src/linux-3.16/arch/x86/kernel# emacs Makefile
obj-$(CONFIG_X86_64)	+= mcount_64.o
obj-y			+= syscall_$(BITS).o vsyscall_gtod.o addcall.o
obj-$(CONFIG_X86_64)	+= vsyscall_64.o
```
4 커널 컴파일

### 커널 컴파일
- 과정
  1. 관련 패키지 인스톨
  1. 커널 다운로드와 모디피케이션
  1. 콘피규레이션
  1. 커널 이미지 빌드
  1. 부트로더 설정 변경 및 리부트

- package install: libncurses5, libncurses5-dev
  - sudo apt-get
- kernal download and modification: done
- kernel configuration
    root@ubuntu:/usr/src/linux-3.16# make menuconfig
- kernal compile & build
    root@ubuntu:/usr/src/linux-3.16# make clean
    root@ubuntu:/usr/src/linux-3.16# make dep
    root@ubuntu:/usr/src/linux-3.16# make bzImage

숙제

AI + IOT = 서비스 시나리오를 조사해서 

Font 10 자간1.5줄 20페이지

print-out

사례도 되고 이런서비스도가능해요도 되고

10월 10일까지

서베이 레포트

> Oct 10 w5

### 마저 하는 커널 컴파일
```
# make clean
# make dep
# make bzImage
# make install
# make modules modules_install
```

```
root@ubuntu:/lib/modules# ls
3.16.0  3.19.0-25-generic
root@ubuntu:/lib/modules# update-initramfs -c -k 3.16.0
update-initramfs: Generating /boot/initrd.img-3.16.0
root@ubuntu:/lib/modules# ls /boot
abi-3.19.0-25-generic         memtest86+.elf
config-3.16.0                 memtest86+_multiboot.bin
config-3.19.0-25-generic      System.map-3.16.0
grub                          System.map-3.19.0-25-generic
initrd.img-3.16.0             vmlinuz-3.16.0
initrd.img-3.19.0-25-generic  vmlinuz-3.19.0-25-generic
memtest86+.bin
root@ubuntu:/lib/modules# update-grub
Generating grub configuration file ...
Warning: Setting GRUB_TIMEOUT to a non-zero value when GRUB_HIDDEN_TIMEOUT is set is no longer supported.
Found linux image: /boot/vmlinuz-3.19.0-25-generic
Found initrd image: /boot/initrd.img-3.19.0-25-generic
Found linux image: /boot/vmlinuz-3.16.0
Found initrd image: /boot/initrd.img-3.16.0
Found memtest86+ image: /boot/memtest86+.elf
Found memtest86+ image: /boot/memtest86+.bin
done
root@ubuntu:/lib/modules# grep "menuentry" /boot/grub/grub.cfg
if [ x"${feature_menuentry_id}" = xy ]; then
  menuentry_id_option="--id"
  menuentry_id_option=""
export menuentry_id_option
menuentry 'Ubuntu' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-simple-7c4b3369-caaf-42f4-8119-31442ba3d260' {
submenu 'Advanced options for Ubuntu' $menuentry_id_option 'gnulinux-advanced-7c4b3369-caaf-42f4-8119-31442ba3d260' {
	menuentry 'Ubuntu, with Linux 3.19.0-25-generic' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.19.0-25-generic-advanced-7c4b3369-caaf-42f4-8119-31442ba3d260' {
	menuentry 'Ubuntu, with Linux 3.19.0-25-generic (recovery mode)' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.19.0-25-generic-recovery-7c4b3369-caaf-42f4-8119-31442ba3d260' {
	menuentry 'Ubuntu, with Linux 3.16.0' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.16.0-advanced-7c4b3369-caaf-42f4-8119-31442ba3d260' {
	menuentry 'Ubuntu, with Linux 3.16.0 (recovery mode)' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.16.0-recovery-7c4b3369-caaf-42f4-8119-31442ba3d260' {menuentry 'Memory test (memtest86+)' {menuentry 'Memory test (memtest86+, serial console 115200)' {
```

root@ubuntu:/boot# emacs /etc/default/grub
```
GRUB_DEFAULT=0
#GRUB_HIDDEN_TIMEOUT=0	// comment out this line
```

```
root@ubuntu:/boot# update-grub
Generating grub configuration file ...
Found linux image: /boot/vmlinuz-3.19.0-25-generic
Found initrd image: /boot/initrd.img-3.19.0-25-generic
Found linux image: /boot/vmlinuz-3.16.0
Found initrd image: /boot/initrd.img-3.16.0
Found memtest86+ image: /boot/memtest86+.elf
Found memtest86+ image: /boot/memtest86+.bin
done
```

```
ubuntu:/boot# reboot
```
커널 선택에서 3.16.0

## Module Programming
- 초기 리눅스는 monolithic 구조였고, 커널을 변경하면 전체를 다시 컴파일해야했다.
- 모듈은, 커널 코드의 일부인데, 동적으로 로드와 언로드가 가능하다.
- 커널 코드의 일부 e.g. 디바이스 드라이버
- 자주 사용하지 않는 모듈은 메모리에 상주시키지 않아도 된다.
- 커널 크기의 최소화 및 확장성과 유연성 제공
- 여러 모듈 사이에 표준화된 메시지 -> 리눅스가 모듈에 요구하는 인터페이스
- 테스트 하기에 좋음

### 모듈 프로그래밍 절차
1. 소스 작성
1. 소스 컴파일
1. 모듈을 (리눅스가 사용하는 메모리 공간(커널 공간)으로) 로드
1. 모듈 동작 확인
1. 결과 확인

### 특징
- 이벤트-드리븐 방식으로 작성
  - __내부에 main()이 없음__
  - 커널에 로드와 언로드하기 위한 규칙과 유틸리티가 필요하다
- 오브젝트 파일을 로드한다 (*.ko 파일)
- 커널 스페이스에서 동작하기 때문에 신중하게 작성해야한다.
- 모듈 프로그래밍에서 사용하는 커널 심볼 테이블로 외부로 공개할 전역 변수를 공개한다

### 로드 및 제거 과정
초기화나 클린업 함수를 인터페이스로써 제공해야 함

**중요**
- 로드: $ insmod
  1. 모듈이 로드되면 오브젝트 파일의 내용이 커널 스페이스로 복사
  1. 모듈 이니셜라이제이션 함수를 호출하여 로드한 모듈을 초기화
  1. 모듈이 등록되었다
- 제거: $ rmmod
  1. 모듈이 제거되면 모듈 클린-업 함수 호출
  1. 모듈 이니셜라이제이션 함수에서 할당받은 자원을 반환한다
  1. 모듈 등록이 해제되었다
  1. 모듈의 오브젝트 코드를 위해 할당된 메모리를 반환한다

### 모듈 프로그램 기본 구조
```
MODULE_LICENSE("GPL"); // 라이센스
int module_start() {} // 
void module_end() {}  //
module_init(module_start);  // 매크로로 초기화 함수 이름을 적어준다
module_exit(module_end) // 매크로로 제거 함수 이름을 적어준다
```

### 모듈 관련 유틸리티
- insmod: 커널의 심볼 테이블을 통해 모듈로 작성한 오브젝트를 커널로 링크시키는 명령
- rmmod: 커널에서 모듈을 제거하는 명령
- lsmod: 커널에 적재된 모듈 리스트 표시
- depmod: 모듈간 의존성 정보 생성
- modprobe: 모듈을 적재하거나 제거, insmod와 유사하나 의존성을 검사하여 필요한 모들 모듈을 적재한다
- modinfo: 상세 내용 표시

### 실습
printf 대신 printk(); -> 로그로 찍음
```
/* hellomodule.c */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

int	module_start(void)
{
	printk("Module init\n");
	printk("Hello, linux module ... \n");

	return 0;
}

void 	module_end(void)
{
	printk("Module Clean Up\n");
}

module_init(module_start);
module_exit(module_end);
```
이름이 뭔지 상관은 없지만 프로토타입의 인수와 반환은 일치해야 한다

그리고 gcc에서 컴파일 하지 않고 별도의 makefile을 만들어야 한다
```
obj-m += hellomodule.o

KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all : 
	make -C $(KDIR) M=$(PWD) modules
clean : 
	rm -rf hellomodule.o hellomodule.mod.* hellomodule.ko
```

제대로 컴파일 되었다면 modulename.ko 파일이 반드시 만들어져 있어야 한다
```
root@ubuntu:/home/embedded/module/hellomodule# make
make -C /lib/modules/3.19.0-25-generic/build M=/home/embedded/module/hellomodule modules
make[1]: Entering directory `/usr/src/linux-headers-3.19.0-25-generic'
  CC [M]  /home/embedded/module/hellomodule/hellomodule.o
  Building modules, stage 2.
  MODPOST 1 modules
  CC      /home/embedded/module/hellomodule/hellomodule.mod.o
  LD [M]  /home/embedded/module/hellomodule/hellomodule.ko
make[1]: Leaving directory `/usr/src/linux-headers-3.19.0-25-generic'
root@ubuntu:/home/embedded/module/hellomodule# ls
hellomodule.c   hellomodule.mod.c  hellomodule.o  modules.order
hellomodule.ko  hellomodule.mod.o  Makefile       Module.symvers
```

```
root@ubuntu:/home/embedded/module/hellomodule# insmod hellomodule.ko
root@ubuntu:/home/embedded/module/hellomodule# lsmod | head -n 5
Module                  Size  Used by
hellomodule            16384  0 
btrfs                 921600  0 
xor                    28672  1 btrfs
raid6_pq               98304  1 btrfs
root@ubuntu:/home/embedded/module/hellomodule# dmesg | tail -n 5
[ 1475.760434]    avx       : 29209.000 MB/sec
[ 1475.925759] Btrfs loaded
[ 4130.284291] hellomodule: module verification failed: signature and/or  required key missing - tainting kernel
[ 4130.347451] Module init
[ 4130.347453] Hello, linux module ... 
root@ubuntu:/home/embedded/module/hellomodule# rmmod hellomodule
root@ubuntu:/home/embedded/module/hellomodule# dmesg | tail -n 5
[ 1475.925759] Btrfs loaded
[ 4130.284291] hellomodule: module verification failed: signature and/or  required key missing - tainting kernel
[ 4130.347451] Module init
[ 4130.347453] Hello, linux module ... 
[ 4196.808167] Module Clean Up
```

### 모듈에서 인자 처리
인자는 두 가지: 프리미티브 타입이 있고 배열 타입이 있습니다

- $ insmod module_argument.ko argint=100 argstring="test"
  - argin와 argstring라는 변수 이름은 코드에서 같아야 합니다
- 매크로 MODULE_PARAM()
  - 변수선언 `MODULE_PARAM(varname, vartype, varpermission);` 
    - 퍼미션은 보통 0을 주면 돼요
  - 배열형 변수 매크로는 `MODULE_PARAM_ARRAY(varname, vartype, count, 0);`
- 매크로 `MODULE_PARAM_DESC(varname, vardescription);`

```
/* module_argument.c */

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>

// int 변수 선언
static int      argint = 1;
static char	*argstring = "This is a string";

// array of int 변수 선언
static int	argarray[2] = { 0, };
static int	size_argarray = 2;

// 
module_param(argint, int, 0);
MODULE_PARM_DESC(argint, "A short integer");

// 
module_param(argstring, charp, 0000);
MODULE_PARM_DESC(argstring, "A character string");

// 
module_param_array(argarray, int, &size_argarray, 0000);
MODULE_PARM_DESC(argarray, "An array of integers");

static int	module_start(void)
{
  int	i;

  printk("argint : %d ", argint);
  printk("argstring : %s ", argstring);
  for (i = 0; i < (sizeof(argarray) / sizeof(int)); i++)
  {
    printk("argarray [%d] : %d ", i, argarray[i]);
  }

  printk("argarray size : %d ", size_argarray);

  return 0;
}

static void	module_end(void)
{
  printk("Goodbye, world ");
}

MODULE_LICENSE("GPL");

module_init(module_start);
module_exit(module_end);
```

```
root@ubuntu:/home/embedded/Examples# insmod module_argument.ko argint=1234 argstring="test" argarray=100,200
root@ubuntu:/home/embedded/Examples# !dm
dmesg | tail -n 5
```

시험 24일 예정 오픈북 정규수업시간 범위는 17일까지

### 주의사항
- 커널 모드에서 동작하기 때문에, 메모리 접근에 대한 보호가 없다.
- 스택의 크기가 제한되어 있다. 인터럽트 핸들러도 동일한 스택을 사용한다. 스택을 많이 쓰는 재귀 호출 사용을 자제하자.

> Oct 17 w6

오늘할거: 모듈 프로그래밍으로 디바이스 드라이버 만들기

**중요**한거 이론에서 네 개 있음 **시험 문제**

## Device Driver
```
응용프로그램 <-저수준_파일_입출력->
디바이스_파일 <-파일_처리_시스템_호출->
디바이스_드라이버 <-하드웨어_제어-> 
하드웨어

사용자 공간: 응용프로그램, 디바이스 파일
커널 공간: 디바이스 파일, 디바이스 드라이버
하드웨어 공간: 디바이스 드라이버, 하드웨어
```
**이 그림 중요함** **시험 문제**

```
App call open()

table in /dev/printer:
    open()	init()
    write()	print()
...

OS call init() on D/D
```

리눅스 시스템은 디바이스를 /dev 디렉토리에 있는 일종의 파일로 취급. 즉, 디바이스를 파일로 추상화

- 디바이스 종류
  - 문자 디바이스
    - 데이터를 문자 단위 또는 바이트 스트림으로 전달하고 읽음
  - 블록 디바이스
    - 버퍼가 있고 비동기로 입출력이라 좀 더 복잡한 디바이스 드라이버
    - 데이터를 블록 단위로 입/출력
  - 네트워크 디바이스
- 디바이스 구분
  - 메이저 넘버와 마이너 넘버를 이용하여 구분
- 디바이스 파일
  - 디바이스 파일은 유저에게 보이는 D/D의 인터페이스 부분
  - 애플리케이션 프로그램은 디바이스에 접근하기 위해서 open/read/write/close 등의 파일 연산 사용
  - 디바이스 파일은 파일 시스템에서 ㄱ유한 번호와 이름을 할당 받음
  - 디바이스 파일은 파일 시스템의 데이터 영역을 차지하지 않고 단지 D/D에 접근할 관문 역할
- 디바이스 파일 생성
  - `mknod <디바이스 파일명> <디바이스 파일 형식> <메이저번호> <마이너번호>`
  - 파일을 /dev 에서 관리한다
  - 디바이스 파일 형식: 문자형 c, 블록형 b
  - e.g. `# mknod /dev/hello c 250 0`
- 디바이스 드라이버
  - 디바이스와 시스템 사이에 데이터를 주고받기 위한 인터페이스
  - 표준적으로 동일한 서비스 제공을 목적
  - 커널의 일부불으로 내장
  - 서브루틴과 데이터의 집합체
  - 디바이스의 고유한 특성을 내포
- D/D 구현 및 테스트
  1. 디바이스 드라이버 작성 & 디바이스 파일 생성
  1. 디바이스 드라이버를 커널에 로드한다
  1. 애플리케이션으로 디바이스 접근을 테스트한다

### File Operations
파일 연산을 이해하는게 필요하다

- 파일 입출력 함수 구분
  - 저수준 파일 입출력 함수
    - open(), close(), read(), write(), ioctl()
    - 이걸 써야 함
  - 스트림 파일 입출력 함수
    - 직접 액세스가 안되고 먼저 버퍼에 보관된 뒤에 조건이 만족되면 파일에 기록된다
    - fopen(), fread(), fwrite(), fclose()

#### 저수준 파일 입출력 함수
여섯 개 **중요** **시험 문제**

`int open(const char* pathname, int flags)`

`int close(int fd)`

`ssize_t read(int fd, void *buf, size_t count)`

`ssize_t write(int fd, const void *buf, size_t count)`

`off_t lseek(int fd, off_t offset, int whence)` 파일 포인터 이동

`int ioctl(int fd, unsigned long request, ...)` **이거중요함** **시험 문제**

중요한 이유
```
/dev/print	print
/dev/GPS	calibrate
/dev/dmb	tune
```
은 파일 대상 오퍼레이션으로 설명할 수 없는 동작들이다. 얘네들을 호출하려면?

cmd -> operation 매핑

커널 2.6.36 이후는 unlocked_ioctl을 사용해야 한다. 얘는 동기화에 보호를 안 해줌

#### 파일 구조체
/usr/src/(uname -r)/include/linux/fs.h

커널은 등록된 디바이스 드라이버의 파일 연산 구조체를 참고해서 응용 프로그램의 요청에 대응하는 함수를 호출한다.디바이스에 필요한 데이터 구조 정의

**중요**
파일 오퍼레이션    함수 포인트    매핑 테이블

#### 파일 연산 구조체
/usr/src/(uname -r)/include/linux/fs.h

커널은 등록된 디바이스 드라이버의 파일 연산 구조체를 참고하여 응용 프로그램의 요청에 대응하는 함수를 호출한다. 파일 연산 구조체 변수를 커널에 등록하는 것은 디바이스 드라이버를 등록하는 것이다.
```
struct file_operations {
    struct module *owner;
    loff_t (*llseek) (struct file *, loff_t, int);
    ssize_t (*read) (struct file *, char __user *, size_t, loff_t *);
    ssize_t (*write) (struct file *, const char __user *, size_t, loff_t *);
    ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
    ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
    int (*iterate) (struct file *, struct dir_context *);
    unsigned int (*poll) (struct file *, struct poll_table_struct *);
    long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
    long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
```

파일 연산 구조체의 사용되지 않는 필드는 NULL로 초기화된다. 디바이스 드라이버 구현 시 필요한 필드만 선언하면된다.

문자 디바이스 드라이버에서 선언된 전형적인 파일 연산 구조체 내용
> (이 매크로만 써주면 되요)
```
struct file_operations xxx_fops = {
    .owner   = THIS_MODULE,
    .open    = xxx_open,
    .release = xxx_release,
    .read    = xxx_read,
    .write   = xxx_write,
    .unlocked_ioctl = xxx_ioctl,
};
```

### 디바이스 드라이버
D/D는 로드할 때 자신을 등록해야 한다. 메이저 넘버와 디바이스 이름은, /dev에 있는 디바이스 파일과 D/D를 연결하기 위해 필요하다. 함수 포인터는, 커널과 통신하기 위해 필요하다. 커널은 함수 포인터르 써서 D/D의 함수들을 호출한다.

```
int register_chrdev (unsigned int major, const char *name, struct file_operations *fops)
int unregister_chrdev (unsigned int major, const char *name)
int register_blkdev(unsigned int major, const char *name)
int unregister_blkdev(unsigned int major, const char *name)
int register_netdev(struct net_device *dev)
int unregister_netdev(struct net_device *dev)
```

#### 문자 디바이스 드라이버 등록 과정
1. 디바이스 적재 `insmod foo.ko`
1. 디바이스 드라이버 `module_init() {... register_chrdev(...) ...}`
1. 커널 `register_chrdev(major, "foo, &foo_fops)
1. charevs[] `0 1 ... 240(name foo    fops foo_fops) ... 255`
1. file_operations:foo_fops `.open=  ,\n.release=  ,\n.read=  ,\n.write=   

...`

```
문자 디바이스 드라이버(2) 코드
```

주의: 함수의 프로토타입은 파일 연산 구조체의 프로토타입과 똑같아야 한다

e.g. `int (*open) (struct inode *, struct file *);` 니까 test_open도 똑같이 만들어야함

#### 실습
```
/* chardev.c */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/fs.h>

#define CHR_DEV_NAME	"chardev"
#define CHR_DEV_MAJOR	250

int chr_open(struct inode *inode, struct file *filep)
{
  // process open operation
  int number = MINOR(inode->i_rdev);
  printk("Virtual Character Device Open : Minor Number is %d\n", number);
  return 0;
}

ssize_t chr_write(struct file *filep, const char *buf, size_t count, loff_t 

*f_pos)
{
  printk("write data: %s\n", buf);
  return count;
}

ssize_t chr_read(struct file *filep, char *buf, size_t count, loff_t *f_pos)
{
  printk("read data: %s\n", buf);
  return count;
}

int chr_ioctl(struct inode *inode, struct file *filep, unsigned int cmd, 

unsigned long arg)
{
  switch(cmd) {
  case 0 : printk("cmd value is %d\n", cmd); break;
  case 1 : printk("cmd value is %d\n", cmd); break;
  case 2 : printk("cmd value is %d\n", cmd); break;
  case 3 : printk("cmd value is %d\n", cmd); break;
  case 4 : printk("cmd value is %d\n", cmd); break;
  }
  return 0;
}

int chr_release(struct inode *inode, struct file *filep)
{
  // process close operation
  printk("Virtual Character Device Release\n");
  return 0;
}

struct file_operations chr_fops = 
  {
    .owner            = THIS_MODULE,
    .unlocked_ioctl   = chr_ioctl,
    .write            = chr_write,
    .read             = chr_read,
    .open             = chr_open,
    .release          = chr_release,
  };

int sample_init(void)
{
  int registration;
  printk("Registration Character Device to Kernel\n");
  registration = register_chrdev(CHR_DEV_MAJOR, CHR_DEV_NAME, &chr_fops);
  if (registration < 0)
    return registration;
  printk("Major Number : %d\n", registration);
  return 0;
}

void sample_cleanup(void)
{
  printk("Unregistration Character Device to Kernel\n");
  unregister_chrdev(CHR_DEV_MAJOR, CHR_DEV_NAME);
}

MODULE_LICENSE("GPL");

module_init(sample_init);
module_exit(sample_cleanup);
```

```
/* chardev_test.c */
/* Application Program */

#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define DEVICE_FILE_NAME "/dev/chardev"             // 개방할 디바이스 파일

int main(int argc, char *argv[])                    // argv값을받아 디바이스 파일의
{                                                   // ioctl의 층 값으로 사용
    int device;
    char wbuf[128] = "Write buffer data";             // write()함수에서 쓰일 buffer 값
    char rbuf[128] = "Read buffer data";              // read() 함수에서 쓰일 buffer 값
    int n = atoi(argv[1]);

    device = open(DEVICE_FILE_NAME, O_RDWR|O_NDELAY);
    if (device >= 0)
    {
        printf("Device file Open\n");
        ioctl(device, n);                               // argv 값을 디바이스 파일에 cmd 값으로 전달
        write(device, wbuf, 10);                        // wbuf 값을 디바이스 파일에 전달
        printf("Write value is %s\n", wbuf);
        read(device, rbuf, 10);                         // rbuf 값을 디바이스 파일에 전달
        printf("Read value is %s\n", rbuf);
    }
    else
       perror("Device file open fail");                // 디바이스 파일 개방 실패시 출력
    close(device);

    return 0;
}
```

```
FNAME := chardev

obj-m += $(FNAME).o

KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all : 
	make -C $(KDIR) M=$(PWD) modules
clean : 
	rm -rf $(FNAME).o $(FNAME).mod.* $(FNAME).ko 
```

```
root@ubuntu:/home/embedded/driver# mknod /dev/chardev c 250 0
root@ubuntu:/home/embedded/driver# ls -al /dev/chardev*
crw-r--r-- 1 root root 250, 0 Oct 16 23:37 /dev/chardev
root@ubuntu:/home/embedded/driver# insmod chardev.ko
root@ubuntu:/home/embedded/driver# lsmod | head -n 5
Module                  Size  Used by
chardev                16384  0 
rfcomm                 61440  0 
bnep                   20480  2 
bluetooth             430080  10 bnep,rfcomm
root@ubuntu:/home/embedded/driver# 
```

```
root@ubuntu:/home/embedded/driver# gcc -o chardev_test chardev_test.c
root@ubuntu:/home/embedded/driver# ./chardev_test 1
Device file Open
Write value is Write buffer data
Read value is Read buffer data
root@ubuntu:/home/embedded/driver# 
root@ubuntu:/home/embedded/driver# 
root@ubuntu:/home/embedded/driver# dmesg | tail -n 5
[ 5340.532205] Major Number : 0
[ 5501.800285] Virtual Character Device Open : Minor Number is 0
[ 5501.800337] write data: Write buffer data
[ 5501.800365] read data: Read buffer data
[ 5501.800373] Virtual Character Device Release
root@ubuntu:/home/embedded/driver#
```
> 오늘 실습에 쓰인 예제 코드를 완벽하게 이해하시면 ㅇㅇ

### 블록 디바이스 드라이버
#### 블록 디바이스
- **버퍼 캐시를 통해 임의 접근이 가능**한 장치
- **블록 단위로 입출력**
- 문자 디바이스 드라이버와 별개로 관리되므로 주번호가 중첩되더라도 상관없음
- 버퍼 캐시를 통한 읽기/쓰기 동작을 효율적으로 수행하기 위해 request queue 사용
  - 추가적인 구조체 `request_queue`, `gendisk`, `spin_lock_t` 등 필요
  - 인터럽트 처리를 기반으로 하는 블록 디바이스의 경우 request()함수 구현이 필수
- 블록 디바이스 관리를 위해 블록 크기, 섹터 크기, 전체 크기 등과 같은 별도의 전역 변수 필요

#### 블록 디바이스 드라이버 작성
1. 블록 디바이스 특성, 주번호와 부번호 및 디바이스 이름 정의
1. register_blkdev() 함수를 사용한 블록 디바이스 드라이버의 등록
1. 블록 디바이스 연산 구조체 처리
1. 요구 큐 관련된 처리 및 함수를 선언
1. 블록 디바이스 추가를 위한 gendisk 구조체 생성 및 등록
1. 블록 디바이스의 크기 설정 및 기타 속성을 처리

### 네트워크 디바이스 드라이버
네트워크 디바이스 드라이버는, 네트워크 네떡 하드에어 사이에 위치하며, 데이터 송수신을 담당한다.

(그림)

네트워크 디바이스 드라이브 작성법

1. 모듈 적재 혹은 커널 부팅에 의한 초기화 처리
1. 모듈 제거를 위한 마무리 처리
1. 네트워크 디바이스 검출
1. 네트워크 디바이스 초기화 및 등록
1. 네트워크 디바이스 열기 및 닫기
1. 네트워크 데이터 전송 및 수신
1. 인터럽트 처리
1. 네트워크 디바이스 제어를 위한 ioctl() 함수를 구현
1. 멀티 캐스트 처리
1. 설정 정보의 재설정 처리

### 숙제 ASSIGNMENTS
가상 Device Driver 작성
- 과제 제출 관련
  - Due Date: 10/31(화), 오후 2:00
  - Project Report – 프린트 출력 후 제출
  - 소스 코드 전체 – 메일로 제출 (blee@kgu.ac.kr)
  - 교수님이 올리신 문서 참조

`cat > 어쩌구...` -> stdin을 파일에다가 쓰라는

여기까지 (10/17) 시험범위

> Nov 07 w9

## NDK
```
Android App. (Java)  ㅡ
|
JNI <- NDK library (C)
|
D/D (Native Program) (C/C++)
```

1. NDK-JNI
2. library -> Android project

### NDK
Java 언어에서는 C/C++로 작성된 라이브러리를 JNI를 이용하여 사용 가능
- 성능 향상은 가능하나 Portability가 떨어짐

NDK
- Android용 JNI를 개발할 수 있도록 제공되는 도구
- 가장 기본적인 C/C++ 헤더 및 라이브러리만 제공
  - libc, libm, JNI interface header, libz, ...

### NDK 설치
root 계정으로 로그인

NDK 파일 복사
- CD Label: `HBE-SM III-SV210 V1.3.3 DVD#1`
Tools\sdk, ndk\linux\android-ndk-r5b-linux-x86.tar.bz2

윈도우 탐색기에서 drag%drop으로 파일 복사

/Adroid에 압축 해제
```
root@hanback:~# cd /Android/
root@hanback:/Android# mv /root/android-ndk-r5b-linux-x86.tar.bz2 .
root@hanback:/Android# tar jxf android-ndk-r5b-linux-x86.tar.bz2 
root@hanback:/Android# ls
android-ndk-r5b  android-ndk-r5b-linux-x86.tar.bz2
root@hanback:/Android# cd android-ndk-r5b
root@hanback:/Android/android-ndk-r5b# ls
GNUmakefile  build               ndk-build  samples  toolchains
README.TXT   docs                ndk-gdb    sources
RELEASE.TXT  documentation.html  platforms  tests
```

Build Test
```
root@hanback:/Android/android-ndk-r5b# cd samples/
root@hanback:/Android/android-ndk-r5b/samples# ls
bitmap-plasma  hello-neon       native-audio   test-libstdc++
hello-gl2      module-exports   native-plasma  two-libs
hello-jni      native-activity  san-angeles
root@hanback:/Android/android-ndk-r5b/samples# cd hello-jni
root@hanback:/Android/android-ndk-r5b/samples/hello-jni# ../../ndk-build
Gdbserver      : [arm-linux-androideabi-4.4.3] libs/armeabi/gdbserver
Gdbsetup       : libs/armeabi/gdb.setup
Compile thumb  : hello-jni <= hello-jni.c
SharedLibrary  : libhello-jni.so
Install        : libhello-jni.so => libs/armeabi/libhello-jni.so
root@hanback:/Android/android-ndk-r5b/samples/hello-jni# ls libs/armeabi/
gdb.setup  gdbserver  libhello-jni.so
```

### JNI 함수
```
Android
  HelloJni.java
    helloJni()
    under arrow   upper arrow return "Hello from JNI" :: String
    java_com+example_.... {}  (C Library)
                              
```

> so (shared object) 포맷 안에 이 함수를 집어넣는것

JNI 라이브러리 함수 이름 규칙
```
jstring Java_com_example_hellojni_HelloJni_stringFromJNI(
    JNIEnv* env, jobject this)
```
- 리턴 타입: Java의 String
- Package 이름: 이 함수를 사용하는 안드로이드 프로그램은 com.example.hellojni라는 package 이름을 가진
- Activity 이름: 이 라이브러리를 사용하는 안드로이드 프로그램의 Activity 이름은 반드시 HelloJni이어야 한다
- 함수 이름: 안드로이드 App에서 사용하는 함수 이름

### Android Studio에서 NDK 사용하기
> 이름같은거 틀리면 안되요

Android Application Source
- HelloJni.java
- Package: com.example.hellojni
- Native method: public native String stringFromJNI()

Android Project 생성
```
Project name: HelloJni
Contents
  Create new project in workspace
  Use default location
Build Targe
  Android 2.2
Properties
  Application name: HelloJni
  Package name: com.example.hellojni
  Create Activity: HelloJni
  Min SDK Version: 8

Then
HelloJni/src/com.example.hellojni/HelloJni.java
```

NDK로 작성한 라이브러리를 Android Project에 포함
- libs 디렉토리를 Eclipse에서 생성한 Project 폴더 아래에 복사
  - /Android/android-ndk-r5b/samples/hello-jni/libs 를
  - Project 디렉토리에
  - Drag&drop을 이용하여 libs 디렉토리를 바탕화면으로 복사 후 다시 Eclipse로 복사

안드로이드 프로그램에서 함수 사용
```
package com.example.hellojni;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class HelloJni extends Activity {
    /** Called when the activity is first created. */
	static { System.loadLibrary("hello-jni"); }
	public native String stringFromJNI();
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
//        setContentView(R.layout.main);
        TextView tv = new TextView(this);
        tv.setText(stringFromJNI());
        setContentView(tv);
    }
}
```
- Package 이름 - NDK에서 선언한 이름과 동일
- NDK로 빌드한 JNI 라이브러리 추가 과정
  - 실제 라이브러리 이름은 libhello-jni.so 이지만 lib와 so는 생략하여 사용
- JNI 라이브러리에 선언된 함수 선언- native 키워드 사용
- JNI 함수 호출

예제 프로그램 실생
- [Run]-[Run Configurations] 실행
```
Android Application - New_configuration

Android    Project    HelloJni
Target    Manual
```

## JNI 상세 슬라이드
## Device Driver Revisited
### 드라이버 함수 연결
device major number

device name

mapping table (저수준 API -> D/D의 함수)
```
led_fop =
{
  open     : led_open, 
  read     : led_read,
  write    : led_write,
  release  : led_release,
  ioctl    : led_loctl
};
```

### 디바이스 드라이버 I/O 제어
### 모드간 데이터 전송
### I/O 영역 경쟁 처리
(3)페이지 ioremap()

## Buzzer Device Driver 개발 실습
### Buzzer Device
Buzzer Control Register의 데이터 비트 구조
### Buzzer Device Driver
D/D를 Close할 때

write 함수로 D/D에 값을 쓸 경

Makefile

### Install Buzzer Device Driver
### Buzzer JNI Library
### Android App

> Nov 14 w10

## Buzzer D/D 개발 실습
소스 코드 위치
- CD Label: HBE-SM III_SV210 V1.3.3 DVD#1
- 디바이스 드라이버 코드
  - source/app_source/drivers/248.buzzer_driver
- JNI 코드
  - source/app_source/jni/buzzer
- 안드로이드 앱 코드
  - source/app_source/app/Buzzer

커널 소스 설치
- 커널 소스 복사 -> /Android
  - CD Label: HBE-SM III_SV210 V1.3.3 DVD#1
  - source/kernel\linux-2.6.32-hanback.tar.bz2

압축 해제, 커널 빌드 환경 설정, 커널 빌드
```
root@hanback:/Android# tar xvjf linux-2.6.32-hanback.tar.bz2
```

```
root@hanback:/Android/linux-2.6.32-hanback# make sm3sv210_android_defconfig
```

```
root@hanback:/Android/linux-2.6.32-hanback# make zImage
…
…
…
  OBJCOPY arch/arm/boot/zImage
  Kernel: arch/arm/boot/zImage is ready
```

### Overview
각각의 디바이스를 안드로이드에서 제어하기 위해서는 세 가지로 구분되는 프로그램 필요
- Linux D/D
  - 기존의 리눅스 장치와 차이점이 없음
- JNI Library
  - 안드로이드 응용 프로그램과 리눅스 디바이스 드라이버를 연결시켜주는 라이브러리
  - NDK를 사용하여 작성된 라이브러리 오브젝트 파일을 제공하며, 이 오브젝트 파일을 사용
- 안드로이드 응용 프로그램
  - 안드로이드용 응용 프로그램은 NDK로 작성된 라이브러리를 통해서 리눅스 디바이스에 접근
  
### Buzzer Device
HBE-SM III-SV210 M3 Module

- Buzzer는 장치의 특성상 On/Off 기능으로 동작
- Buzzer Controller
  - Buzzer는 16-bit로 구성
  - Buzzer_Ctrl_Reg (Buzzer Control Register)에 의해 제어
    - Buzzer_Ctrl_Reg의 0 bit에 0 또는 1을 써 넣음으로서 Buzzer를 On/Off시킬 수 있음

Buzzer Control Register의 데이터 비트 구조
```
15 14 ... 1 0
Reserved    Buzzer_EN (Buzzer Enable Bit (Active High))
```
#### Buzzer D/D
Make 2 files: buzzer.c and Makefile.

```
/*
 * Buzzer Device Driver
 *  Hanback Electronics Co.,ltd
 * File : buzzer.c
 * Date : April,2009
 */

// 모듈의 헤더파일 선언
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/ioport.h>
#include <linux/fs.h>
#include <asm/io.h>
#include <asm/uaccess.h>

#define DRIVER_AUTHOR           "hanback"               // 모듈의 저작자
#define DRIVER_DESC             "buzzer test program"   // 모듈에 대한 설명

#define BUZZER_MAJOR            248                     // 디바이스 주번호
#define BUZZER_NAME             "BUZZER IO PORT"        // 디바이스 이름
#define BUZZER_MODULE_VERSION   "BUZZER IO PORT V0.1"   // 디바이스 버전
#define BUZZER_ADDRESS          0x88000050              // buzzer의 물리 주소
#define BUZZER_ADDRESS_RANGE    0x1000                  // I/O 영역의 크기

//Global variable
static int buzzer_usage = 0;            // 드라이버 사용여부를 확인하는 값
static unsigned long *buzzer_ioremap;   // IO 주소 공간 저장

// define functions...
// 응용 프로그램에서 디바이스를 처음 사용하는 경우를 처리하는 함수
int buzzer_open(struct inode *minode, struct file *mfile)
{
    // 디바이스가 열려 있는지 확인
    if(buzzer_usage != 0) return -EBUSY;

    // buzzer의 가상 주소 매핑
    buzzer_ioremap= ioremap(BUZZER_ADDRESS,BUZZER_ADDRESS_RANGE);

    // 등록할 수 있는 I/O 영역인지 확인
    if(!check_mem_region((unsigned long)buzzer_ioremap,BUZZER_ADDRESS_RANGE)) {
        // I/O 메모리 영역을 등록
        request_mem_region((unsigned long)buzzer_ioremap,BUZZER_ADDRESS_RANGE,BUZZER_NAME);
    }
    else printk(KERN_WARNING"Can't get IO Region 0x%x\n", (unsigned int)buzzer_ioremap);

    buzzer_usage = 1;
    return 0;
}

// 응용 프로그램에서 디바이스를 더이상 사용하지 않아서 닫기를 구현하는 함수
int buzzer_release(struct inode *minode, struct file *mfile)
{
    // 매핑된 가상주소를 해제
    iounmap(buzzer_ioremap);

    // 등록된 I/O 메모리 영역을 해제
    release_mem_region((unsigned long)buzzer_ioremap,BUZZER_ADDRESS_RANGE);

    buzzer_usage = 0;
    return 0;
}

// 디바이스 드라이버의 쓰기를 구현하는 함수
ssize_t buzzer_write_byte(struct file *inode, const char *gdata, size_t length, loff_t *off_what)
{
    unsigned char *addr;
    unsigned char  c;

    // gdata의 사용자 공간의 메모리에서 c에 읽어온다.
    get_user(c,gdata);

    addr = (unsigned char *)(buzzer_ioremap);
    *addr = c;

    return length;
}

// 파일 오퍼레이션 구조체
// 파일을 열때 open()을 사용한다. open()는 시스템 콜을 호출하여 커널 내부로 들어간다.
// buzzer_open()으로 정의되어 있으므로 buzzer_open()가 호출된다.
// write와 release도 마찬가지로 동작한다. 만약 등록되지 않은 동작에 대해서는 커널에서 정의해
// 놓은 default 동작을 하도록 되어 있다.
static struct file_operations buzzer_fops = {
    .owner          = THIS_MODULE,
    .open           = buzzer_open,
    .write          = buzzer_write_byte,
    .release        = buzzer_release,
};

// 모듈을 커널 내부로 삽입
// 모듈 프로그램의 핵심적인 목적은 커널 내부로 들어가서 서비스를 제공받는 것이므로
// 커널 내부로 들어가는 init()을 먼저 시작한다.
// 응용 프로그램은 소스 내부에서 정의되지 않은 많은 함수를 사용한다. 그것은 외부
// 라이브러리가 컴파일 과정에서 링크되어 사용되기 때문이다. 모듈 프로그램은 커널
// 내부하고만 링크되기 때문에 커널에서 정의하고 허용하는 함수만을 사용할 수 있다.
int buzzer_init(void)
{
    int result;

    // 문자 디바이스 드라이버를 등록한다.
    result = register_chrdev(BUZZER_MAJOR,BUZZER_NAME,&buzzer_fops);

    if(result < 0) {  // 등록실패
        printk(KERN_WARNING"Can't get any major\n");
        return result;
    }

    // major 번호를 출력한다.
    printk(KERN_WARNING"Init Module, Buzzer Major number : %d\n", BUZZER_MAJOR);
    return 0;
}

// 모듈을 커널에서 제거
void buzzer_exit(void)
{
    // 문자 디바이스 드라이버를 제거한다.
    unregister_chrdev(BUZZER_MAJOR,BUZZER_NAME);

    printk(KERN_INFO"driver: %s DRIVER EXIT\n", BUZZER_NAME);
}

module_init(buzzer_init);       // 모듈 적재 시 호출되는 함수
module_exit(buzzer_exit);       // 모듈 제거 시 호출되는 함수

MODULE_AUTHOR(DRIVER_AUTHOR);   // 모듈의 저작자
MODULE_DESCRIPTION(DRIVER_DESC); //모듈에 대한 설명
MODULE_LICENSE("Dual BSD/GPL");  // 모듈의 라이선스 등록
```

```
#
# Makefile for Buzzer Device Driver
# Hanback Electronics Co.,ltd
#

CC     = /usr/local/arm/arm-2010q1/bin/arm-none-eabi-gcc

obj-m := buzzer.o

KDIR := /Android/linux-2.6.32-hanback

PWD := $(shell pwd)


default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
	rm -f default

clean:
	rm -f *.ko
	rm -f *.o
	rm -f *.mod.*
	rm -f .*.cmd
```

### TODO: 더 쓰기

> Nov 21 w11

12/19(화) 16주차 수업함 

### Embedded System Term Project #2
#### Project Overview
- 배열 덧셈 및 Buzzer/7-Segment device 제어
- 과제 제출 관련
  1. Due date: 12/19(화) 오후 5:00
  2. Project Report (프린트 제출)
  3. 소스 코드 전체 (메일로 제출: blee@kgu.ac.kr)

#### Requirements
1) Android 프로그램
- 1차원 배열 덧셈을 위한 UI 생성
  1. 사용자로부터 입력 받은 배열 요소 개수만큼의 정수를 random하게 생성하여 표시: 배열 요소는 최대 10개까지 허용
  2. 사용자는 배열 요소의 덧셈 결과를 입력
  3. 배열 요소 및 덧셈 결과를 JNI 프로그램에 전달
  4. 덧셈 결과에 따른 메시지 출력
- Android 프로젝트 생성 시 사용값
  1. Project 이름: ESTermProject
  2. Application 이름: ArrayAdder
  3. Package 이름: ac.kr.kgu.esproject
  4. Activity 이름: ArrayAdderActivity

2) JNI 프로그램 및 디바이스 드라이버
- Android 프로그램으로부터 배열 및 배열 덧셈 결과를 전달받아 덧셈이 정확한지 확인
  - 덧셈이 정확한 경우
    - 7-Segment에 덧셈 결과값 출력과 함께 Buzzer 활성화
    - Buzzer의 경우 “삐”음이 주기적으로 On/Off되어야 함
  - 덧셈이 틀린 경우
    - 7-Segment에 사용자 입력 값, 덧셈 결과값 출력과 함께 Buzzer 활성화
    - 사용자 입력값 및 덧셈 결과값이 각각 20, 34인 경우 -> 20 - 34
    - Buzzer의 경우 “삐”음이 연속적으로 발생되어야 함
- 7-Segment 출력 시
  - 숫자 및 문자를 움직이면서 표시할 것

3) 기타
- Android 프로그램의 “Clear” 버튼을 누를 경우
  1. Android 프로그램을 초기화 상태로 변경
  2. Buzzer가 활성화된 경우 비활성화 시킴
  3. 7-Segment의 내용을 움직이는 직사각형으로 표시

#### 주요 감점 사항
- 배열 덧셈 결과 확인은 반드시 JNI 프로그램에서 수행 (-30)
- JNI 프로그램으로 매개변수 전달 시 가변 크기 배열 전달 (-20)
  - JNI로 배열을 전할 때 5개인데 10개를, 나머지는 0으로 채워서 보내면 감점
- 덧셈 결과가 정확할 경우 Buzzer가 주기적으로 On/Off (-10)
- 7-Segment 출력 시 숫자 움직임 (-20)

#### Android 프로그램 실행 예시
#### 7-Segment 표시 – 결과값 표시
세븐세그먼트 정답: 여섯개 깜빡 깜빡 깜빡 -> 오른쪽to왼쪽 흘러감 -> 다 흘러가서 없어지면 깜빡 세 번

오답: 20 - 34 를...

#### 대기 시 7-Segment 표시
세븐세그먼트 대기: CCW로 원그리기

이거 due 까지 안내면 빵점이 되고 그러면 B를 줄 수가 없어진다

## Buzzer 마저
```
        on/off               ↓NDK
Android ------------------>  JNI             D/D
|       libbuzzer.so         1. open
|       BuzzerControl();     2. write(i/o)
├ com.hanback.buzzer
├ BuzzerActivity
└ Buzzer (App name)
```

### JNI Library
```
int BuzzerControl(int);
JNI 코드를 만들 때, 얘랑 맞춰서 만들어주기 위해
int -> jint, 이름은 -> Java_<Package name>_<Activity name>_<method name>
jint Java_com_hanback_buzzer_BuzzerActivity_BuzzerControl(
    JNIEnv *env, jobject thiz, jint value); 
// 파라미터 앞에 두 개는 모든 JNI 메서드에 반드시 들어가야 하는 거임

```

android method name을 jni용으로 바꾸어야 함

JNI를 컴파일해서 libbuzzer.so를 만들어 줘야 함

요 디렉토리에서 ~~ 그다음 pdf JNI library(1) 부터.

makefile이 두 개 존재해야 해요 이름만 똑같은 Android.mk고 위치는 다름

(4)
컴파일하시면 최종적으로 프로젝트의 이 디렉토리에 libbuzzer.so가 만들어져요

그다음 Android App (6) 부터.

### JNI Library
/Android/android-ndk-r5b/apps/buzzer/project/jni를 생성하고...

buzzer.c
```
/*
 * Copyright (C) 2009 Hanback Electronics Inc.
 *
 */
#include <string.h>
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <sys/mman.h>
#include <errno.h>


jint
Java_com_hanback_buzzer_BuzzerActivity_BuzzerControl( JNIEnv* env,
                                                  jobject thiz, jint value )
{
    int fd,ret;
    int data = value;

    fd = open("/dev/buzzer",O_WRONLY);
    
    if(fd < 0) return -errno;
    
    ret = write(fd, &data, 1);
    close(fd);
    
    if(ret == 1) return 0;
      
    return -1;
}
```

Android.mk <- apps/buzzer/project/jni/Android.mk
```
# Copyright (C) 2009 Hanback Electronics Inc.
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := buzzer
LOCAL_SRC_FILES := buzzer.c

include $(BUILD_SHARED_LIBRARY)
```

Application.mk <- apps/buzzer/Application.mk
```
APP_PROJECT_PATH := $(call my-dir)/project
APP_MODULES      := buzzer
```

#### Buzzer JNI 라이브러리 생성
/Android/android-ndk-r5b에서 실행
```
# make APP=buzzer
```

컴파일 결과
```
# ls appls/buzzer/project/libs/armeabi
libbuzzer.so
```

## LED Device Driver
src
- CD label: HBE-SM III-SV210 V1.3.3 DVD #1
- D/D src:
- JNI:
- Android App: 

### LED Device
HBE-SM III-SV210 M3 Module
- 총 8개의 LED가 데이터 버스와 연결
- 정해진 물리 주소에 값을 출력하면 해당 비트가 1인 경우 LED가 켜짐

**2번 버튼을 누른 후 테스트**

LED Control Register's 데이터 비트 구조
- 하위 9개의 비트를 사용.

Bits | Name | Description
--- | --- | ---
0 | LED_1 | User LED Display Bit 0 (Active High)
1 | LED_2 | User LED Display Bit 1 (Active High)
2 | LED_3 | User LED Display Bit 2 (Active High)
3 | LED_4 | User LED Display Bit 3 (Active High)
4 | LED_5 | User LED Display Bit 4 (Active High)
5 | LED_6 | User LED Display Bit 5 (Active High)
6 | LED_7 | User LED Display Bit 6 (Active High)
7 | LED_8 | User LED Display Bit 7 (Active High)
8 | LED_EN | LED Enable Bit (Active High)

### LED Device Driver
ledioport.c

```
/*
 * 8bit-LED Device Driver
 *  Hanback Electronics Co.,ltd
 * File : ledioport.c
 * Date : April,2009
 */ 

// 모듈의 헤더파일 선언
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <asm/uaccess.h>
#include <linux/fs.h>
#include <asm/io.h>
#include <linux/ioport.h>

#define DRIVER_AUTHOR			"hanback"		// 모듈의 저작자
#define DRIVER_DESC			"led test program"	// 모듈에 대한 설명

#define LEDIOPORT_MAJOR   		241		// 디바이스 주번호
#define LEDIOPORT_NAME    		"LED IO PORT"	// 디바이스 이름
#define LEDIOPORT_MODULE_VERSION	"LED IO PORT V0.1"	// 디바이스 버전
#define LEDIOPORT_ADDRESS 		0x88000020	// led의 물리 주소
#define LEDIOPORT_ADDRESS_RANGE 	0x1000		// I/O 영역의 크기

//Global variable
static int ledioport_usage = 0;		// 드라이버가 사용여부를 확인하는 값
static unsigned long *ledioport_ioremap; //IO 주소 공간 저장

// define functions...
// 응용 프로그램에서 디바이스를 처음 사용하는 경우를 처리하는 함수
int ledioport_open(struct inode *minode, struct file *mfile) 
{
    // 디바이스가 열려 있는지 확인.
    if(ledioport_usage != 0) return -EBUSY;
    
    // LED의 가상 주소 매핑
    ledioport_ioremap= ioremap(LEDIOPORT_ADDRESS,LEDIOPORT_ADDRESS_RANGE);

    // 등록할 수 있는 I/O 영역인지 확인
    if(!check_mem_region((unsigned long)ledioport_ioremap,LEDIOPORT_ADDRESS_RANGE)){
        // I/O 메모리 영역을 등록
        request_mem_region((unsigned long)ledioport_ioremap,LEDIOPORT_ADDRESS_RANGE,LEDIOPORT_NAME);
    } else printk(KERN_WARNING"Can't get IO Region 0x%x\n", (unsigned int)ledioport_ioremap);
    
    ledioport_usage = 1;
    return 0;
}

// 응용 프로그램에서 디바이스를 더이상 사용하지 않아서 닫기를 구현하는 함수
int ledioport_release(struct inode *minode, struct file *mfile) 
{	
    // 매핑된 가상주소를 해제
    iounmap(ledioport_ioremap);

    // 등록된 I/O 메모리 영역을 해제
    release_mem_region((unsigned long)ledioport_ioremap,LEDIOPORT_ADDRESS_RANGE);
    ledioport_usage = 0;
    return 0;
}

// 디바이스 드라이버의 쓰기를 구현하는 함수
ssize_t ledioport_write_byte(struct file *inode, const char *gdata, size_t length, loff_t *off_what) 
{
    unsigned short *addr;
    unsigned char  c;

    // gdata의 사용자 공간의 메모리에서 c에 읽어온다.
    get_user(c,gdata); 
    
    addr = (unsigned short*)ledioport_ioremap;
    *addr = c|0x100;
    
    return length;
}

// 파일 오퍼레이션 구조체
// 파일을 열때 open()을 사용한다. open()는 시스템 콜을 호출하여 커널 내부로 들어간다.
// 해당 시스템 콜과 관련된 파일 연산자 구조체 내부의 open에 해당하는 필드가 드라이버 내에서
// ledioport_open()으로 정의되어 있으므로 ledioport_open()가 호출된다.
// write와 release도 마찬가지로 동작한다. 만약 등록되지 않은 동작에 대해서는 커널에서 정의해
// 놓은 default 동작을 하도록 되어 있다.
static struct file_operations led_fops = {
    .owner		= THIS_MODULE, 
    .open		= ledioport_open,
    .write		= ledioport_write_byte,
    .release	= ledioport_release,
};

// 모듈을 커널 내부로 삽입
// 모듈 프로그램의 핵심적인 목적은 커널 내부로 들어가서 서비스를 제공받는 것이므로 
// 커널 내부로 들어가는 init()을 먼저 시작한다.
// 응용 프로그램은 소스 내부에서 정의되지 않은 많은 함수를 사용한다. 그것은 외부
// 라이브러리가 컴파일 과정에서 링크되어 사용되기 때문이다. 모듈 프로그램은 커널
// 내부하고만 링크되기 때문에 커널에서 정의하고 허용하는 함수만을 사용할 수 있다.
int led_init(void) {
    
    int result;

    // 문자 디바이스 드라이버를 등록한다.
    result = register_chrdev(LEDIOPORT_MAJOR,LEDIOPORT_NAME,&led_fops);
    
    if(result < 0) { // 등록실패
        printk(KERN_WARNING"Can't get any major\n");
        return result;
    }
    
    // major 번호를 출력한다.
    printk(KERN_INFO"Init Module, ledioport Major Number : %d\n",LEDIOPORT_MAJOR);
    return 0;
}

// 모듈을 커널에서 제거
void led_exit(void) 
{
    // 문자 디바이스 드라이버를 제거한다.
    unregister_chrdev(LEDIOPORT_MAJOR,LEDIOPORT_NAME);

    printk(KERN_INFO"driver: %s DRIVER EXIT\n", LEDIOPORT_NAME);
}


module_init(led_init);	// 모듈 적재 시 호출되는 함수
module_exit(led_exit);	// 모듈 제거 시 호출되는 함수

MODULE_AUTHOR(DRIVER_AUTHOR);	// 모듈의 저작자
MODULE_DESCRIPTION(DRIVER_DESC); // 모듈에 대한 설명
MODULE_LICENSE("Dual BSD/GPL");	 // 모듈의 라이선스 등록
```

```
#
# Makefile for 8bit-LED Device Driver
# Hanback Electronics Co.,ltd
#

CC     = /usr/local/arm/arm-2010q1/bin/arm-none-eabi-gcc

obj-m := ledioport.o

KDIR := /Android/linux-2.6.32-hanback

PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
	rm -f default

clean:
	rm -f *.ko
	rm -f *.o
	rm -f *.mod.*
	rm -f .*.cmd
```

### JNI Library
led.c
```
/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <sys/mman.h>
#include <errno.h>




jint
Java_com_hanback_led_LedActivity_LEDControl( JNIEnv* env,
                                                  jobject thiz, jint data )
{
    int fd,ret;

    fd = open("/dev/ledioport",O_WRONLY);
    if(fd < 0) return -errno;
    if(fd > 0) {
        data &= 0xff;
        ret = write(fd,&data,1);
        close(fd);
    } else return fd;

    if(ret == 1) return 0;
    
    return -1;
}
```

Android.mk <- apps/led/project/jni/Android.mk
```
# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := led
LOCAL_SRC_FILES := led.c

include $(BUILD_SHARED_LIBRARY)
```

Application.mk <- apps/led/Application.mk
```
APP_PROJECT_PATH := $(call my-dir)/project
APP_MODULES      := led
```

> Dec 5 w13

시험... 필기 날렸다

오픈북이랬어

디바이스 드라이버 위주로 보면되겠다

파일 함수... 독립성...

커널 함수.... 조심하고
