

[TOC]





# 0. 개요

* 웹 브라우저에서 동작하는 유일한 프로그래밍 언어
* 별도의 컴파일 작업 없이 JS Engine만 있으면 실행 가능한 interpreter Language
* 명령형(imperative), 함수형(functional), 프로토타입 기반(prototype-based) 객체지향 프로그래밍을 지원하는 **멀티 패러다임 프로그래밍 언어**
* 강력한 OOP 능력을 지님
  * 클래스 기반 OO 보다 효율적이며 강력한 Prototype based OOP





## 0-1. ECMA 

* ECMA
  * Ecma 인터내셔널을 지칭
  * 정보와 통신 시스템을 위한 국제적 표준화 기구
  * ECMA-262, C#, C++, Drat, JSON 등 여러 시스템을 위한 표준을 담당
* ECMA-262 : 자바스크립트를 개발한 Netscape가 제시한 개선된 기술규격을 바탕으로 ECMA가 새롭게 제정한 표준
* ECMAScript
  * ECMA-262 기술 규격에 따라 정의하고 있는 표준화된 스크립트 프로그래밍 언어
  * Javascript를 표준화 하기 위해 만들어 짐
  * Javascript는 ECMAScript와의 호환을 목표로 함
* ES6 : ECMAScript(=ES) 의 6번째 개정안
* Javascript : ECMAScript의 표준 사양을 가장 잘 구현한 프로그래밍 언어







# 1. 변수

## 1-1. 변수 선언

* var, let, const 키워드 사용

```javascript
var score;
```



**식별자**(Identifier)

* 변수, 함수, 클래스 등을 구별해서 식별할 수 있는 고유한 이름
* **값이 아니라 메모리 주소를 기억함**
* 즉, 식별자란 메모리상에 존재하는 어떤 값을 식별할 수 있는 이름을 지칭

<img src="image-20221018233549342.png" alt="image-20221018233549342" style="zoom: 67%;" />



## 1-2. 실행 컨텍스트(execution context)

* 변수이름을 비롯한 모든 식별자가 저장되는 공간
* JS engine이 여러가지 작업을 진행하는 공간
  * 실행환경 제공
  * 소스코드 평가
  * 실행결과 관리
  * 식블져와 스코프 관리





## 1-3. 호이스팅(hoisting)

* var, let, const, function, function*, class 등의 키워드를 사용해서 선언하는 모든 식별자는 JS Engine에 의한 사전 평가에 의해 선언문이 선두로 끌어올려진것처럼 동작하는 JS 고유의 특징을 **hoisting**이라 한다.
  * JS engine은 소스코드를 실행하기 전, 소스코드 평가과정을 거친 후 실행을 위한 준비를 함
    * 평가과정내에서 변수선언 및 함수정의 등 모든 선언문을 소스코드에서 찾아내 먼저 실행
  * 평가과정이 끝나면 선언문을 제외한 소스코드를 한 줄씩 순차적으로 실행

> 변수 선언은 runtime이 아닌 그 이전단계에서 실행됨



자바스크립트의 고유 특징인 호이스팅 덕분에 아래 코드는 이상 없이 사용 가능하다

```javascript
console.log(score);
var score;
```



하지만 **초기화**는 runtime 시점에서 이루어진다

```javascript
console.log(x);	// undefined
var x = 'hello';
console.log(x);	// hello
```



**요약**

변수 선언 : 평가 과정

변수 초기화 : runtime





## 1-4. 값의 할당

- 변수에 값을 할당할 때는 새로운 메모리 공간을 확보하고 그곳에 할당값을 저장한다.
- 즉, 이전에 할당되었던 값은 유지된다.



가령 아래 코드를 보면

```javascript
console.log(score);	// undefined
var score = 80;
console.log(score);	// 80
score = 90;
console.log(score);	// 90
```



![image-20221018233020124](image-20221018233020124.png)

값을 매번 재할당 할 때마다 변수는 새로운 메모리 영역을 가리킨다.

불필요한 값들은 **가비지 콜렉터**에 의해 자동 해제된다.









# 2. 표현식과 문

**용어**

* 값(value) : 식(표현식; expression)이 평가(evaluate)되어 생성된 결과를 지칭
* 평가 : 식을 **해석**해서 값을 **생성**하거나 **참조**하는 것

```javascript
// 10 + 20 은 평가되어 숫자 값 30을 생성한다. 그리고 변수에 할당한다.
var sum = 10 + 20;	// 30
```

* 리터럴(literal)
  * 사람이 이해할 수 있는 문자(아라비아 숫자, 알파벳, 한글...) 또는 약속된 기호를 사용해 값을 생성하는 표기법(notation)

```javascript
// 숫자 리터럴 3
3
```

위 코드에서 3은 단순한 아라비아 숫자가 아니라 숫자 리터럴이다.

사람이 이해할 수 있는 아라비아 숫자를 사용해 숫자 리터럴 3을 코드에 기술하면 자바스크립트 엔진은 이를 평가해 숫자 값 3을 생성한다.

> 리터럴은 JS Engine에 의해 평가되어 값을 생성한다

리터럴로 생성 가능한 값의 종류( data type)은 아래와 같음

| 리터럴             | 예시                              | 비고                    |
| ------------------ | --------------------------------- | ----------------------- |
| 정수 리터럴        | 100                               |                         |
| 부동소수점 리터럴  | 10.5                              |                         |
| 2진수 리터럴       | 0b01000001                        | 0b로 시작               |
| 8진수 리터럴       | 0o101                             | ES6에서 도입. 0o로 시작 |
| 16진수 리터럴      | 0x41                              | ES6에서 도입. 0x로 시작 |
| 문자열 리터럴      | 'Hello' "Hello"                   |                         |
| 불리언 리터럴      | true false                        |                         |
| null 리터럴        | null                              |                         |
| undefined 리터럴   | undefined                         |                         |
| 객체 리터럴        | { name: 'Lee', address: 'Seoul' } |                         |
| 배열 리터럴        | [ 1, 2, 3 ]                       |                         |
| 함수 리터럴        | function() {}                     |                         |
| 정규 표현식 리터럴 | /[A-Z]+/g                         |                         |



## 2-1. 표현식(expression)

* 값(value)으로 평가될 수 있는 문(statement)
* 표현식이 평가되면 새로운 값을 생성하거나 기존 값을 참조 함
* 리터럴도 표현식에 포함 됨

```javascript
// 100은 리터럴임
// 리터럴 100은 JS engine에 의해 평가되어 값을 생성하므로 그 자체로 표현식임
var score = 100;
```



```javascript
// 50 + 50 은 리터럴과 연산자로 이뤄짐
// 50 + 50 은 평가되어 숫자 값 100을 생성하므로 표현식임
var score = 50 + 50;
```



```javascript
// 변수 식별자를 참조하면 변수 값으로 평가 됨
// 식별자 참조는 값을 생성하지는 않지만 값으로 평가되므로 표현식임
score;
```



> 표현식은 리터럴, 식별자(변수, 함수 이름 등), 연산자, 함수 호출 등의 조합으로 이뤄질 수 있음
>
> 표현식 : 값으로 평가 될 수 있음, 변수에 의해 주솟값이 참조 될 수 있음





```javascript
//리터럴 표현식
10
'Hello'

//식별자 표현식(선언이 이미 존재한다고 가정)
sum
person.name
arr[1]

//연산자 표현식
10 + 20
sum = 10
sum !== 10

//함수/메서드 호출 표현식(선언이 이미 존재한다고 가정)
square()
person.getName()
```





## 2-2. 문(statement)

- 프로그램을 구성하는 기본단위이자 최소 실행 단위
  - 프로그램 : 문의 집합으로 이루어진 것
  - 프로그래밍 : 문을 작성하고 순서에 맞게 나열하는 것
- 문은 여러 토큰(token)으로 구성 됨
  - 토큰 : 문법적 의미를 가지며, 문법저긍로 더이상 나눌 수 없는 코드의 기본 요소

![image-20221018235549474](image-20221018235549474.png)

* 명령문 이라고도 불린다.
  * 즉, 컴퓨터에 내리는 명령 단위
* 선언문, 할당문, 반복문 등이 존재

```javascript
//변수 선언문
var x;

//할당문
x = 5;

//함수 선언문
function foo() {}

//조건문
if (x > 1) { console.log(x); }

//반복문
for (var i = 0 ; i < 2; i++) { console.log(i); }
```



**세미콜론**

- 문의 종료를 나타냄
- 중괄호로 묶인 코드블록 {...} 뒤에는 세미콜론 안붙임
  - if, for 문 등
  - 이런 코드 블록은 자체 종결성(self closing)을 지님





**표현식인 문과 표현식이 아닌 문**

- 표현식인 문 : 값으로 평가되어 변수에 할당 가능
- 표현식이 아닌 문 : 값으로 평가될 수 없으므로 변수에 할당하면 에러 발생

```javascript
//변수 선언문은 표현식이 아닌 문이다.
var x;

//할당문은 그 자체가 표현식이지만 완전한 문이기도 하다. 즉, 할당문은 표현식인 문이다.
x = 100;

//표현식이 아닌 문은 값처럼 사용할 수 없다.
var foo = var x;	//SyntaxError : Unexpected token var

//표현식인 문은 값처럼 사용할 수 있다.
var foo = x = 100;
console.log(foo);	//100
```





# 3. 데이터 타입(Data Type)

- 값의 종류를 지칭
- JS의 모든 값은 데이터타입을 가짐
- JS(ES6)는 7개 타입을 제공
  - 원시타입(primitive type)과 객체 타입(object/reference type) 으로 분류





**구분**

- 원시 타입
  - 숫자 타입
  - 문자열 타입
  - 불리언 타입
  - undefined 타입 : var 키워드로 선언된 변수에 암묵적으로 할당되는 값
  - null 타입 : 값이 없다는 것을 의도적으로 명시할 때 사용하는 값
  - symbol 타입 : ES6에서 추가된 7번째 타입
- 객체 타입 : 객체, 함수, 배열 등





**숫자 타입**

- C나 자바와 달리 정수와 실수의 구분이 없음
- 64비트 부동소수점 형식을 따름

```javascript
var binary = 0b01000001;
var octal = 0o101;
var hex = 0x41;

console.log(binary); 	//65
console.log(octal);		//65
console.log(hex);		//65
console.log(binary === octal);	//true
console.log(octal === hex);		//true

//숫자 타입은 모두 실수로 취급한다.
console.log(1 === 1.0);	// true
console.log(4 / 2);		// 2
console.log(3 / 2);		// 1.5

//세가지 특별한 값
console.log(10 / 0);	// Infinity
console.log(10 / -0);	// -Infinity
console.log(1 * 'String');	//NaN (not-a-number; 산술 연산 불가)
```





**문자열 타입**

```javascript
var string;
string = '문자열';
string = "문자열";
string = `문자열`;

string = '작은따옴표로 감싼 문자열 내의 "큰따옴표"는   문자열로 인식된다.';
string = "큰따옴표로   감싼 문자열 내의 '작은따옴표'는 문자열로 인식된다.";
```

* JS의 문자열은 원시타입이며 변경 불가능한 값(immutable value) 임
  * 즉, 생성된 이후 수정 불가
* **문자열과 불변성**에서 자세히 다룰 예정





### 템플릿 리터럴

- 멀티라인 문자열(multi-line string), 표현식 삽입(expression interpolation), 태그드 템플릿(tagged template) 등 편리한 문자열 처리기법을 제공한다.

- 런타임에 일반 문자열로 변환되어 처리됨
- 백틱(`)을 사용해 표현

```javascript
var template = `Template literal`;
console.log(template);
```



```javascript
// 1. 멀티라인 문자열
var str = 
`Hello
World`;

console.log(str);

var template = 
`
<ul>
    <li><a href="#">Home</a></li>
</ul>
`


// 2. 표현식 삽입
var first = 'Ung-mo';
var last = 'Lee';

// ES5 : 문자열 연결
console.log(`My name is ${first} ${last}.`);	// My name is Ung-mo Lee.
console.log(`1 + 2 = ${1+2}`);	//1 + 2 = 3
${}로 표현식을 감싸서 문자열 내에 삽입할 수 있다.
표현식의 평가 결과가 문자열이 아니더라도 문자열로 타입이 강제로 변환되어 삽입된다.
console.log('1 + 2 = ${1 + 2}');	// 1 + 2 = ${1 + 2}
```





**undefined 타입**

- undefined 타입의 값은 undefined가 유일
- var 키워드로 선언한 변수는 암묵적으로 undefined로 초기화 됨
- 할당후 초기화 되지 않은 변수를 참조하면 undefined가 반환 됨

```javascript
var joo;
console.log(foo);	// undefined
```





**null 타입**

- 변수에 값이 없음을 의도적으로 명시할때 사용한다.
  - 개발자가 의도적으로 값을 할당하지 않았음을 명시하고 싶다면 undefined가 아닌 null을 할당해야한다.
- null을 할당한다는것은 이전에 있던 값에 대한 참조를 명시적으로 제거하는 것을 의미한다.
  - JS Engine은 누구도 참조하지 않는 메모리 공간에 대해 가비지 콜렉션을 수행할 것이다. (undefined 와의 차이)







**Symbol 타입**

- ES6에서 추가된 7번째 타입
- 변경 불가능한 원시 타입의 값
- 다른 값과 중복되지 않는 유일무이한 값
- 주로 이름이 충돟랑 위험이 없는 객체의 유일한 프로퍼티 키를 만들기 위해 사용
- 심벌은 Symbol 함수를 호출해 생성한다.
  - 심벌 이외의 원시 값은 리터럴을 통해 생성한다.
- 생성된 Symbol 값은 외부에 노출되지 않으며, 절대 중복되지 않은 유일무이한 값이다.

```javascript
// 심벌 값 생성
var key = Symbol('key');
console.log(typeof key);	//symbol

// 객체 생성
var obj = {};

// 이름이 충돌할 위험이 없는 유일무이한 값인 심벌을 프로퍼티 키로 사용한다.
obj[key] = 'value';
console.log(obj[key]);
```

- Symbol에 대해서는 추후 보다 자세히 다룬다.







**object 타입**

- JS의 데이터타입은 크게 원시타입과 객체타입으로 나뉜다.
  - 이는 추후 보다 자세히 다룬다.
- JS는 객체 기반의 언어이며, JS를 이루는 거의 모든것이 객체라 볼 수 있다.
- 지금까지 살펴본 6가지 타입 이외의 값은 모두 Object 타입이다.







**데이터 타입의 필요성**

1. 값을 저장하거나 읽을때 확보해야할 메모리 공간의 크기를 결정하기 위해

2. 메모리에서 읽어들인 2진수를 어떻게 해석할지 알기 위해

 





**동적 타이핑**

- 자바스크립트의 변수는 선언이 아닌 할당에 의해 타입이 결정(타입 추론; type inference)된다.
- 재할당에 의해 변수의 타입이 언제든지 동적으로 변할 수 있다.
- 이런 특징을 동적 타이핑이라 한다.

| 정적 타입 언어                                    | 동적 타입 언어                               |
| ------------------------------------------------- | -------------------------------------------- |
| C, C++, Java, Kotlin, Go, Haskell, Rust, Scala... | JavaScript, Python, PHP, Ruby, Lisp, Perl... |

 



**typeof 연산자**

- 변수의 데이터 타입을 알 수있는 함수

```javascript
typeof ''				// string
typeof 1				// number
typeof NaN			// number
typeof true			// boolean
typeof undefined		// undefined
typeof Symbol()			// symbol
typeof null				// object
typeof []				// object
typeof {}				// object
typeof new Date()		// object
typeof /test/gi			// object
typeof function () {}		// function
```







# 4. 객체

* 정의 : JS를 구성하는 모든 것
* 원시값을 제외한 나머지 값(함수, 배열, 정규표현식 등)은 모두 객체 임
  * 원시타입 : 하나의 값만 나타냄, 변경 불가
  * 객체타입 : 다양한 타입의 값을 하나의 단위로 구성한 복합적인 자료구조, 변경 가능
* 프로퍼티의 집합





## 4-0. **프로퍼티**

```javascript
var person = {
    name: 'Lee',
    age: 20
};
```

* 용어
  * 프로퍼티 - name: 'Lee' 와 age: 20 각각의 문장들
  * 프로퍼티 키 : 빈 문자열을 포함한 모든 문자열 또는 심벌 값
    * 심벌값도 문자열로 사용
    * name과 age
  * 프로퍼티 값 : Javascript에서 사용 가능한 모든 값
    * 'Lee'와 20



**프로퍼티 키**

```javascript
// 식별자 네이밍 규칙을 따르지 않을 경우 따옴표로 둘러싸야함
var persen = {
    firstName = 'Ung-Mo',
    'last-Name' = 'Lee';
};

console.log(person);	// {firstName: "Ung-mo", last0name: "Lee"}


// 문자열 또는 문자열로 평가할 수 있는 표현식을 사용해 프로퍼티 키를 동적으로 생성할 수도 있다. 이 경우 프로퍼티키로 사용할 표현식을 대괄호[..]로 묶어야 한다.
var obj = {};
var key = 'hello';

// ES5: 프로퍼티 키 동적 생성
obj[key] = 'world';
// ES6 : 계산된 프로퍼티 이름
// var obj = { [key]: 'world'};

console.log(obj);	// {hello: "world"}
```

- 빈 문자열을 프로퍼티키로 사용해도 에러가 발생하지는 않지만, 키로서의 의미를 갖지 못하므로 권장하지 않는다.
- 프로퍼티키에 문자열이나 심벌값 이외의 값을 넣으면 암묵적 타입 변환을 통해 문자열이 된다.
- var나 function 같은 예약어를 키로 쓸 수 있고 에러도 없지만 권장하지 않는다.





**프로퍼티 값**

* JS에서 사용하는 모든 값은 프로퍼티 값이 될 수있음
* 프로퍼티 값이 함수이면 메서드(method)라 부름
  * ㅎJS에서 함수는 객체이므로 값 취급이 가능



```javascript
var counter = {
   num: 0,
   increase: function() {
      this.num++;
   }
};
```

- 객체는 프로퍼티와 메서드로 구성된 집합임
- 객체의 집합으로 프로그램을 표현하려는 프고르매이 패러다임을 객체지향 프로그래밍이라 함









다소 복잡하지만 아래와 같은 방법으로도 사용 가능

```javascript
var person = {
    age:4,
    height:170
};

person = {age: 17, height: 175};
person['key1'] = {age:21, height : 170};
person['key2'] = {age:30, height : 180};

//console.log(person.height);
console.log(person.age, person.height);
console.log(person['key1'].age, person['key1'].height);
console.log(person['key2'].age, person['key2'].height);


// output
// 17 175
// 21 170
// 30 180
```





**프로퍼티 접근**

두가지 방법이 존재

1. 마침표 프로퍼티 접근 연산자(.)를 사용하는 **마침표 표기법(dot notation)**
2. 대괄호 프로퍼티 접근 연산자([...])를 사용하는 **대괄호 표기법(bracket notation)**
   - 대괄호 표기법의 경우 프로퍼티 키는 반드시 **따옴표로 감싼 문자열**이어야 한다.
   - 따옴표로 감싸지 않으면 자바스크립트 **엔진은 식별자(변수...)로 해석**한다.
   - 프로퍼티 키가 식별자 네이밍을 준수하지 않는다면 대괄호 프로퍼티 접근 연산자를 사용해야한다.



```javascript
var person = {
    name: 'Lee'
};
 
// 마침표 표기법에 의한 프로퍼티 접근
console.log(person.name);
 
// 대괄호 표기법에 의한 프로퍼티 접근
console.log(person['name']);
```

대괄호 표기법에서 프로퍼티 키를 따옴표로 감싸지 않으면 아래 코드 처럼 reference error가 발생

```javascript
var person = {
    name: 'Lee'    
};
 
console.log(person[name]);
```



만약 아래처럼 "name"이라는 문자열 데이터를 저장하고 있는 변수 name이 존재한다면 어떻게 될까?

```javascript
name = "name"
 
var person = {
    name: 'Lee'    
};
 
console.log(person[name]);  
```

따옴표가 없으므로 식별자인 변수 name을 참조하여 해석한다







### Node.js와 웹 브라우저의 평가 순서 차이

```javascript
var person = {
    'last-name': 'Lee',
    1: 10
};
 
person.'last-name';     // SyntaxError: Unexpected string
person.last-name;    // 브라우저 환경 : NaN
                        // Node.js 환경 : Reference Error
 
person[last-name];      // ReferenceError
person['last-name']     // Lee
 
// 프로퍼티키가 숫자로 이뤄진 문자열인 경우 따옴표를 생략할 수 있다.
 
person.1;               // SyntaxError
person.'1';             // SyntaxError
person[1];              // 10 : person[1] -> person['1']
person['1'];            // 10
```



위 코드의 person['last-name']; 결과는 브라우저와 node.js에 따라 달라짐

(name 변수의 존재 여부 차이 때문)



**자바스크립트 엔진**

자바스크립트 엔진은 먼저 person.last를 평가한다.

person객체에는 프로퍼티키가 last인 프로퍼티가 없으므로 person.last를 undefined로 평가한다.

여기까지는 node.js와 브라우저가 공통적으로 행하는 작업이다.

 

**Node.js**

Node.js 환경에서는 name이라는 식별자 선언이 없으므로 reference error가 발생한다.

 

**브라우저**

브라우저 환경에서는 **name이라는 전역변수가 창(windows)의 이름을 가진채 암묵적으로 존재**하며 기본값은 빈 문자열이다.

그러므로 person.last-name 은 undefined-''와 같으므로 NaN이 된다.





**프로퍼티 값 갱신**

이미 존재하는 프로퍼티에 값을 할당하면 프로퍼티 값이 갱신된다.

```javascript
var person = {
    name: 'Lee'
};
 
person.name = 'Kim';
 
console.log(person);
```





**프로퍼티 동적 생성**

존재하지 않는 프로퍼티에 값을 할당하면 프로퍼티가 동적으로 생성되어 추가되고 프로퍼티 값이 할당된다.

```javascript
var person = {
    name: 'Lee'
};
 
person.age = 20;
 
console.log(person);
```





**프로퍼티 삭제**

delete 연산자는 객체의 프로퍼티를 삭제한다.

delete 연산자의 피연산자는 프로퍼티 값에 접근할 수 있는 표현식이어야 한다.

존재하지 않는 프로퍼티를 삭제하면 아무런 에러없이 무시된다.



```javascript
var person = {
    name: 'Lee'
};
 
console.log(person) // { name: 'Lee' }
 
person.age = 20;
console.log(person) // { name: 'Lee', age: 20 }
 
delete person.age;
console.log(person) // { name: 'Lee' }
 
delete person.address;
console.log(person) // { name: 'Lee' }
```











## 4-1. 객체 생성 방법

- 클래스 기반 OOP 언어
  - new 연산자로 생성자를 호출하여 인스턴스를 생성
- 프로토타입 기반 OOP 언어
  - 객체 리터럴
  - Object 생성자 함수
  - 생성자 함수
  - Object.create 메서드
  - 클래스(ES6)





### 객체 리터럴(object literal)

- 프로토타입 기반 객체지향 언어에서 객체를 생성하는 가장 일반적인 방법
- 리터럴은 값을 생성하는 표기법이며, 객체 리터럴은 객체를 생성하기 위한 표기법
- 앞서 살펴보았던 중괄호{...} 내에 0개 이상의 프로퍼티를 정의하는것이 객체 리터럴의 정의 방법

```javascript
var person = {
    name: 'Lee',
    sayHello: function () {
    	console.log(`Hello! My name is ${this.name}.`);
    }
};

console.log(typeof person);	//object
console.log(person);			// {name: "Lee", sayHello: f}
```

 

- 중괄호내에 프로퍼티를 정의하지 않으면 빈 객체가 생성

```javascript
var empty = {};			// 빈 객체
console.log(typeof empty);		// object
```

 



























