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
./no_you_need_form_28B_not_28C
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Makefile, main.cpp, Bureaucrat.[{h, hpp},cpp], Bureaucrat.cpp + AForm.[{h, hpp},cpp], ShrubberyCreationForm.[{h, hpp},cpp], + RobotomyRequestForm.[{h, hpp},cpp], PresidentialPardonForm.[{h, hpp},cpp]
- Forbidden functions : None
## Detail
- 이제 당신은 기본적인 보고서를 가지고 있고, 더 많은 것들을 해볼거야!
- 모든 상황에서, base class 인 Form은 추상 클래스여야만 해. form의 특성은 private 로 남아있어야 하고, base class 에 있어야 한다는 걸 명심해!
- 다음과 같은 concrete class 가 필요해:
	- ShrubberyCreationForm: 요구되는 등급: sign 145, exec 137
	{target}_shrubbery 파일을 working directory에 만들고, ASCII 나무를 안에 작성해라.
	- RobotomyRequestForm: sign 72, exec 45
	약간의 드릴 소리가 납니다. {target}이 50%의 확률로 성공적으로 로봇화 되었음을 알립니다. 그렇지 않으면 로봇 공학이 실패했음을 알립니다.
	- PresidentialPardonForm: sign 25, exec 5
	{target} 이 Zaphod Beeblebrox 에 의해 사면 되었음을 알립니다.
- 이 concrete class 들의 생성자에는 모두 하나의 인자를 가지고 있습니다: form의 타겟. 예를 들어 만약 집에 shrubbery(관목숲)을 심고 싶다면 "집"을 타겟으로 해서 인자에 넣는다. (이 말은 std::string으로 하나를 받을 것 같다.)
- execute(Bureaucrat const & executor) const 멤버함수를 Form의 base class에 만들고, concrete class에 form 동작을 실행하는 함수를 구현해라.
- 양식에 서명이 이미 되어 있는지 확인하는 것과, 양식을 실행하려는 관료의 등급이 충분히 높은지 확인해야 합니다. 그렇지 않으면 적절한 예외를 throw를 합니다.
- 모든 구체적인 클래스 또는 기본 클래스에서 요구 사항을 확인하는 것은 당신에게 달렸습니다.
- 마지막으로 Bureaucrat에 executeForm(Form const & form) 멤버 함수를 추가하세요. 만약 성공적으로 실행된다면 다음과 같은 출력을 합니다:
	- {bureaucrat} executed {form}
	- 만약 아니라면, 명시적인 오류를 출력하십시오.
- 테스트를 main에 추가하세요!
<bt> </bt>

# Exercise 03: At least this beats coffee-making 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_05.git
cd cpp_module_05/ex03
make
./at_least_this_beats_coffee_making 
```
## Summary
- Turn-in directory : ex03/
- Files to turn in : Files from previous exercises + Intern.{h, hpp}, Intern.cpp
- Forbidden functions : None
## Detail
- 양식을 작성하는 것은 충분히 성가신 일이기 때문에 우리 관료들에게 하루 종일 이것을 하라고 요구하는 것은 잔인한 일입니다. 다행히고 인턴이 존재합니다. 인턴에게는 이름도, 등급도, 고유한 특성도 없습니다. 관료들이 신경 쓰는 유일한 것은 인턴이 일하고 있는 것입니다.
- 그러나 인턴에게는 중요한 기능이 있습니다: makeForm(). 이것은 두 개의 문자열이 필요합니다.
- 첫 번째는 폼의 이름이고, 두 번째는 폼의 대상입니다. 대상이 두 번째 인자(매개변수)로 초기화 될 때 Form 객체(이름은 매개변수로 전달 된 이름)의 포인터를 반환합니다.
- 다음과 같이 인쇄됩니다: 
	- Intern creates {form}
- 만약 form 이름이 없다면 명시적인 에러 메시지를 띄워주세요.
- 당신은 읽기 어렵고, 더러운 해답인 if/elseif/else forest 를 피해햐 합니다. 이것은 평가 과정에서 허용되지 않습니다.
- 예를 들어 Bender가 타겟인 RobotomyRequestForm 은 아래의 코드로 만든다.
```
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
```
<bt> </bt>
