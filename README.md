# cpp_module_05
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_05/issues/1)

# ex00: 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex00
make
./mommy_when_I_grow_up_I_want_to_be_a_bureaucrat
```
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, main.cpp, Bureaucrat.{h, hpp}, Bureaucrat.cpp
- Forbidden functions : None
## Detail
***exception class 은 Orthodox Canonical form으로 작성 되면 안 된다. 그러나 다른 클래스는 그래도 된다.***
- 사무실, 복도, 양식 그리고 대기 줄의 인위적인 악몽을 디자인해보자! 재미있어 보이니? 맞아? 맞아...이건 끔찍해...
- 첫 번째의 시도로 이 거대한 로직에서 가장 작은 요소인 관료부터 만들어보자!
- Bureaucrat(관료)는 아래의 멤버 변수를 가지고 있어야 해:
	- constant name
	- 1부터 150까지의 범위를 가지는 등급(1등급이 가장 높고, 150들급이 가장 낮다)
- 유효하지 않은 등급을 사용하는 관료를 인스턴스화 하는 어떠한 시도든간에 아래 두 개의 예외 중 하나를 던져야해(throw):
	- Bureaucrat::GradeTooHighException 또는
	- Bureaucrat::GradeTooLowException
- 넌 두 속성을 위한 getter인 getName()과 getGrade() 를 만들거야. 그리고 관료의 등급을 올리거나 낮추는 두 개의 멤버 함수를 구현해라. 만약 setter에서 변경하려는 등급이 범위를 벗어나면, 생성자와 같은 예외를 던져야 해.
- 기억해라! 1이 가장 높은 등급이고, 150이 가장 낮은 등급이란걸, 그리고 등급 3에서의 승급은 관료에게 등급 2를 준다는 걸.
- thrown exception 들은 try-catch 블럭을 사용해서 잡을 수 있다.
```
try
{
	/* do some stuff with bureaucrats */
}
catch (std::exception & e)
{
	/* handle exception */
}
```
- 아래와 같은 출력을 하는 삽입 연산자(<<) 을 구현해라:
	- {name}, bureaucrat grade {grade}.
- 평소와 같이 모든 작업이 예상대로 되는지 확인하는 테스트를 넣어라.

<bt> </bt>

# ex01: 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex01
make
./
```
## Summary
## Detail
<bt> </bt>

# ex02: 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex02
make
./
```
## Summary
## Detail
<bt> </bt>

# ex03: 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex03
make
./
```
## Summary
## Detail
<bt> </bt>
