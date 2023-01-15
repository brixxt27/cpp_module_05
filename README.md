# cpp_module_05
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_05/issues/1)

# Exercise 00: Mommy, when I grow up, I want to be a bureaucrat!
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

# Exercise 01: Form up, maggots!
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex01
make
./form_up_maggots
```
## Summary
- Turn-in directory : ex01/
- Files to turn in : Files from previous exercise + Form.{h, hpp}, Form.cpp
- Forbidden functions : None
## Detail
- 이제 관료는 완성 되었을테니, 그들에게 무엇인가 할 일을 주자! 양식 더미를 채우는 것보다 좋은 게 있을까?
- Form class 는 다음과 같이 만들어야 해:
	- constant name
	- 서명 되어 있는지 확인할 수 있는 boolean 변수(생성될 때는 false)
	- 서명하기 위해 요구되는 constant grade
	- 그리고 이를 집행할 수 있는 constant grade
- 모든 멤버는 private이고, protected가 아니다.
- From 의 grade는 Bureaucrat에 적용 되는 예외와 동일하게 적용된다. 즉, Form::GradeTooHighException and Form::GradeTooLowException 이 범위를 벗어났을 때 발생해야 한다.
- 이전과 같이 모든 멤버 변수를 위한 getter 와, 모든 form의 정보를 출력하는 operator<< 연산자를 오버로딩해줘!
- Bureaucrat을 인자로 받는 beSigned() 멤버변수를 Form에 추가해줘. 그건 만약 관료의 grade가 form의 grade 보다 높거나 같으면 보고서의 서명 상태를 변경한다. 만약에 서명하기에 등급이 너무 낮으면 Form::GradeTooLowException을 던져야 한다.
- 마지막으로 Bureaucrat class에 signForm() 멤버함수를 추가해줘. 만약 서명된 문서라면 다음과 같이 출력 될거야:
	- {bureaucrat} signed {form}
- 그렇지 않으면 다음과 같이 출력 될거야
	- {bureaucrat} couldn’t sign {form} because {reason}.
- 테스트를 main문에 추가해줘.

<bt> </bt>

# Exercise 02: No, you need form 28B, not 28C... 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex02
make
./
```
## Summary
- Files to turn in : Makefile, main.cpp, Bureaucrat.[{h, hpp}, cpp], Bureaucrat.cpp + AForm.[{h, hpp},cpp], ShrubberyCreationForm.[{h, hpp},cpp], +
RobotomyRequestForm.[{h, hpp},cpp], PresidentialPardonForm.[{h, hpp},cpp]
## Detail
<bt> </bt>

# Exercise 03: At least this beats coffee-making 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex03
make
./
```
## Summary
- Turn-in directory : ex03/
- Files to turn in : Files from previous exercises + Intern.{h, hpp}, Intern.cpp
- Forbidden functions : None
## Detail
<bt> </bt>
