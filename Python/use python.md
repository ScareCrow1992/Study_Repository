



[TOC]







# 1. 자료형

## 1-1. 숫자형

```python
# 정수형
a = 123
b = -178
c = 0

# 실수형
a = 1.2
b = -3.4

# 8진수
a = 0o177

# 16진수
a = 0x8ff
b = 0xABC
```



**연산**

```python
a = 3
b = 4

# 사칙연산
a + b
a * b
a - b
a / b

# 제곱
a ** b

# 나머지 연산
a % b

# 나누기 후 몫
a // b
```





## 1-2. 문자열

**생성방법**

```python
'Hello world'
"Lorem Ipsum"

multilines = """
	Hello World
	Lorem Ipsum
	"""

multilines = '''
	Hello World
	Lorem Ipsum
	'''

```



**연산**

```python
# 잇기
head = "hello"
tail = "world"
head + tail


# 곱하기
a = "python"
a * 3

# 문자열 길이 구하기
string = "Hello World"
len(string)


# 인덱싱
a = "Life is too short, You need Python"
a[3]
a[-1]

# 슬라이싱
a = "Life is too short, You need Python"
a[0:4]
a[19:]
a[:5]
a[-5:]
a[:]

# 문자열 포매팅
"I eat %d apples." % 3
"I eat %s apples." % "five"

number = 10
day = "three"
"I ate %d apples. so I was sick for %s days." % (number, day)


# 정렬
"%10s" % "hi"
>>>'          hi'

"%-10sjane." % 'hi'
>>>'hi        jane.'

# 소수점 표현
"%0.4f" % 3.42134234
>>>'3.4213'

"%10.4f" % 3.42134234
>>>'    3.4213'

```





**관련 함수**

```python
# 문자 갯수 세기
a = "hobby"
a.count('b')
>>> 2


# 위치 알려주기
a = "Python is the best choice"
a.find('b')
>>> 14

a.find('k')
>>> -1


# 문자열 삽입
",".join('abcd')
>>>'a,b,c,d'

",".join(['a', 'b', 'c', 'd'])
>>>'a,b,c,d'

# 소문자를 대문자로
a = "hi"
a.upper()
>>>'HI'

# 대문자를 소문자로
a = "HI"
a.lower()
>>>'hi'

# 왼쪽 공백 지우기
a = " hi "
a.lstrip()
>>>'hi '

# 오른쪽 공백 지우기
a= " hi "
a.rstrip()
>>>' hi'

# 양쪽 공백 지우기
a = " hi "
a.strip()
>>>'hi'

# 문자열 바꾸기
a = "Life is too short"
a.replace("Life", "Your leg")
>>>'Your leg is too short'

# 문자열 나누기
a = "Life is too short"
a.split()
>>>['Life', 'is', 'too', 'short']

b = "a:b:c:d"
b.split(':')
>>>['a', 'b', 'c', 'd']
```







## 1-3. 리스트

```python
# 생성
>>> a = []
>>> b = [1, 2, 3]
>>> c = ['Life', 'is', 'too', 'short']
>>> d = [1, 2, 'Life', 'is']
>>> e = [1, 2, ['Life', 'is']]
>>> f = list()

# 슬라이싱
>>> a = [1, 2, 3, 4, 5]
>>> a[0:2]
[1, 2]

# 리스트 연산
>>> a = [1, 2, 3]
>>> b = [4, 5, 6]
>>> a + b
[1, 2, 3, 4, 5, 6]

# 리스트 반복
>>> a = [1, 2, 3]
>>> a * 3
[1, 2, 3, 1, 2, 3, 1, 2, 3]

# 리스트 길이 구하기
>>> a = [1, 2, 3]
>>> len(a)
3


# 리스트 요소 삭제
>>> a = [1, 2, 3]
>>> del a[1]
>>> a
[1, 3]

>>> a = [1, 2, 3, 4, 5]
>>> del a[2:]
>>> a
[1, 2]
```





**리스트 관련 함수들**

```python
# 요소 추가
>>> a = [1, 2, 3]
>>> a.append(4)
>>> a
[1, 2, 3, 4]

>>> a.append([5,6])
>>> a
[1, 2, 3, 4, [5, 6]]
# 리스트 통째로가 아닌 값만 넣고 싶ㅍ으면 extend를 사용


# 정렬
>>> a = [1, 4, 3, 2]
>>> a.sort()
>>> a
[1, 2, 3, 4]

>>> a = ['a', 'c', 'b']
>>> a.sort()
>>> a
['a', 'b', 'c']

# 뒤집기
>>> a = ['a', 'c', 'b']
>>> a.reverse()
>>> a
['b', 'c', 'a']

# 위치 반환
>>> a = [1,2,3]
>>> a.index(3)
2
>>> a.index(1)
0
# 주의 : 없는 값을 찾으려 하면 오류 발생

# 요소 삽입
>>> a = [1, 2, 3]
>>> a.insert(0, 4)
>>> a
[4, 1, 2, 3]

>>> a.insert(3, 5)
>>> a
[4, 1, 2, 5, 3]

# 요소 제거
>>> a = [1, 2, 3, 1, 2, 3]
>>> a.remove(3)
>>> a
[1, 2, 1, 2, 3]
# 첫번째로 찾은 값만 제거

# 요소 끄집어 내기
>>> a = [1,2,3]
>>> a.pop()
3

>>> a
[1, 2]

# n번째 요소 끄집어 내기
>>> a = [1,2,3]
>>> a.pop(1)
2
>>> a
[1, 3]

# 요소의 갯수 세기
>>> a = [1,2,3,1]
>>> a.count(1)
2


# 리스트 확장
>>> a = [1,2,3]
>>> a.extend([4,5])
>>> a
[1, 2, 3, 4, 5]
>>> b = [6, 7]
>>> a.extend(b)
>>> a
[1, 2, 3, 4, 5, 6, 7]
# a.extend([4,5])는 a+=[4,5] 와 동일하다

```





## 1-4. 튜플

* 수정이 불가능한 리스트

* 값을 바꾸거나 삭제하려 하면 에러 발생

```python
# 선언
>>> t1 = ()
>>> t2 = (1,)
>>> t3 = (1, 2, 3)
>>> t4 = 1, 2, 3
>>> t5 = ('a', 'b', ('ab', 'cd'))
# t2 처럼 1개의 요소만 가질때는 끝에 ',' 붙이기
# t4 처럼 괄호()를 생략해도 된다

```





## 1-5. 딕셔너리

* key를 통해 value를 찾는 hash 자료형

```
{Key1:Value1, Key2:Value2, Key3:Value3, ...}
```

* 생성 예

```python
>>> dic = {'name':'pey', 'phone':'0119993323', 'birth': '1118'}
>>> a = { 'a': [1,2,3]}
>>> a['a'][1]
2
```



**사용법**

```python
# 요소 추가
>>> a = {1: 'a'}
>>> a[2] = 'b'
>>> a
{1: 'a', 2: 'b'}
>>> a['name'] = 'pey'
>>> a
{1: 'a', 2: 'b', 'name': 'pey'}
>>> a[3] = [1,2,3]
>>> a
{1: 'a', 2: 'b', 'name': 'pey', 3: [1, 2, 3]}


# 요소 삭제
>>> del a[1]
>>> a
{2: 'b', 'name': 'pey', 3: [1, 2, 3]}

# key로 value 얻기
>>> grade = {'pey': 10, 'julliet': 99}
>>> grade['pey']
10
>>> grade['julliet']
99



# 해당 key가 딕셔너리 안에 있는지 조사(in)
>>> a = {'name':'pey', 'phone':'0119993323', 'birth': '1118'}
>>> 'name' in a
True
>>> 'email' in a
False


# for 문 연동
## for 문으로 dictionary를 돌리면 key값이 할당 됨
>>> a = {'alice': [1, 2, 3], 'bob': 20, 'tony': 15, 'suzy': 30}
>>> for key in a:
...     print(key)
... 
alice
bob
tony
suzy

## for에서 value를 얻기 위해선 values()를 사용
>>> for val in a.values():
...     print(val)
... 
[1, 2, 3]
20
15
30    

## key와 value를 한꺼번에 반복하려면 items() 를 사용
>>> for key, val in a.items():
...     print("key = {key}, value={value}".format(key=key,value=val))
... 
key = alice, value=[1, 2, 3]
key = bob, value=20
key = tony, value=15
key = suzy, value=30



# in을 통해 key 소지 여부 확인
>>> 'alice' in a
True
>>> 'teacher' in a
False
>>> 'teacher' not in a
True




```





**관련 함수**

```python
# key 리스트 만들기(keys)
>>> a = {'name': 'pey', 'phone': '0119993323', 'birth': '1118'}
>>> a.keys()
dict_keys(['name', 'phone', 'birth'])
# dict_keys는 리스트에 대응 가능하다
>>> for k in a.keys():
...    print(k)
...
name
phone
birth
# keys의 반환값으로 리 스트가 필요하면 list(a.keys())를 사용
>>> list(a.keys())
['name', 'phone', 'birth']


# Value 리스트 만들기(values)
>>> a.values()
dict_values(['pey', '0119993323', '1118'])


# key, value 쌍 얻기(items)
>>> a.items()
dict_items([('name', 'pey'), ('phone', '0119993323'), ('birth', '1118')])
# key와 value 쌍울 튜블로 묶은 값을 dict_items 객체로 반환


# 딕셔너리 비우기
>>> a.clear()
>>> a
{}


# 여러 값의 수정 및 추가
>>> a = {'alice': [1, 2, 3], 'bob': 20, 'tony': 15, 'suzy': 30}
>>> a.update({'bob':99, 'tony':99, 'kim': 30})
>>> a
{'alice': [1, 2, 3], 'bob': 99, 'tony': 99, 'suzy': 30, 'kim': 30}



# key로 value 얻기
>>> a = {'name':'pey', 'phone':'0119993323', 'birth': '1118'}
>>> a.get('name')
'pey'
>>> a.get('phone')
'0119993323'
# a['key'] 와 달리 존재하지 않는 키로 참조해도 오류가 나오지 않음





# dict_keys, dict_values, dict_items 등은 리스트로 변환하지 않더라도 기본적인 반복(iterate) 구문(예: for문)을 실행할 수 있다.



```





**주의 사항**

* key를 중복해서 넣을 수 있지만 정상 작동을 기대하기 힘듬
* key에 리스트를 넣을 순 없다





## 1-6 집합

* 중복 허용 X
* 순서가 없음 = 인덱싱 지원 X



```python
# 생성
>>> s1 = set([1,2,3])
>>> s1
{1, 2, 3}

# 문자열을 통한 문자 set
>>> s2 = set("Hello")
>>> s2
{'e', 'H', 'l', 'o'}

# 중복된값은 자동으로 제거
>>> s = {1, 5, 1, 1, 1, 3, 7}
>>> s
{1, 3, 5, 7}


# 비어있는 집합
>>> s = set()

```



**생성시 주의사항**

```python
# mutable 한 값은 원소로 포함 불가
>>> s = {"1", 3, 5, (1,3)}
>>> s
{(1, 3), 5, 3, '1'}

>>> s = {"1", 3, 5, [1,3]}
Traceback (most recent call last):
File "<stdin>", line 1, in <module>
TypeError: unhashable type: 'list'
        
>>> s = {"1", 3, 5, {1,3}}
Traceback (most recent call last):
File "<stdin>", line 1, in <module>

TypeError: unhashable type: 'set'
>>> s = {"1", 3, 5, {1:1,3:3}}
Traceback (most recent call last):
File "<stdin>", line 1, in <module>
TypeError: unhashable type: 'dict'
        
>>> s = {"1", 3, 5, frozenset([1,3,4])}
>>> s
{5, 3, '1', frozenset({1, 3, 4})}
```





**순회**

```python
>>> for i in {1, 2, 4, 8, 16,32}:
...     print(i)
... 
32
1
2
4
8
16
# unordered 하므로 순서에 규칙이 없음
```



**in**

* 원소의 포함 여부를 판별

```python
>>> r = set([2, 5, 7])
# r = {2, 5 , 7}
>>> 2 in r
True
>>> 3 in r
False
>>> 3 not in r
True
```





**원소 추가**

```python
>>> k = {100, 105}
>>> k.add(50)
>>> k
{105, 50, 100}
>>> k.add(12)
>>> k
{105, 50, 100, 12}
```





**update**

* 여러 값을 한번에 추가

```python
>>> k = {1, 2, 3}
>>> k.update([3, 4, 5])
>>> k
{1, 2, 3, 4, 5}
```





**원소 제거**

* remove : 원소가 없으면 에러 발생

```python
>>> k = {1, 2, 3}
>>> k.remove(3)
>>> k
{1, 2}
>>> k.remove(3)
Traceback (most recent call last):
File "<stdin>", line 1, in <module>
KeyError: 3
```



* discard : 없어도 에러 발생 X

```python
>>> k = {1, 2, 3}
>>> k.discard(3)
>>> k
{1, 2}
>>> k.discard(3)
>>> k
{1, 2}
```





**변환**

* set에 저장된 값을 인덱싱으로 접근하려면 리스트나 튜닝으로 변환해야함

```python
>>> s1 = set([1,2,3])
>>> l1 = list(s1)
>>> l1
[1, 2, 3]
>>> l1[0]
1
>>> t1 = tuple(s1)
>>> t1
(1, 2, 3)
>>> t1[0]
1
```





**얕은 복사(copy)**

* copy 메소드로 얕은복사를 수행

```python
>>> s = {1, 3, 5}
>>> t = s.copy()
>>> s
{1, 3, 5}
>>> t
{1, 3, 5}
>>> id(s)
4334668264
>>> id(t)
4334666696
```

* 생성자로 복사 가능

```python
>>> s = {1, 3, 5}
>>> t = set(s)
>>> s
{1, 3, 5}
>>> t
{1, 3, 5}
>>> id(s)
4334666248
>>> id(t)
4334667144
```





**집합 연산**

* | - 합집합 연산자

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a | b
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{1, 2, 3, 4, 5, 6, 7}
```



* & - 교집합 연산자

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a & b
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{3, 4, 5}
```



* ^ - 대칭자집합 연산자(합집합 - 교집합)

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a ^ b
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{1, 2, 6, 7}
```





**집합 연산 메소드**

- union - 합집합

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a.union(b)
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{1, 2, 3, 4, 5, 6, 7}
```

- intersection - 교집합

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a.intersection(b)
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{3, 4, 5}
```

- difference - 차집합

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a.difference(b)
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{1, 2}
```

- symmetric_difference : 대칭차집합 연산자(합집합 - 교집합)

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {3, 4, 5, 6, 7}
>>> c = a.symmetric_difference(b)
>>> a
{1, 2, 3, 4, 5}
>>> b
{3, 4, 5, 6, 7}
>>> c
{1, 2, 6, 7}
```





**기타 메소드**

- issubset : 부분집합 여부 확인

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {1, 2, 3}
>>> a.issubset(b)
False
>>> b.issubset(a)
True
```

- issuperset : issubset과 반대 superset인지 확인

```python
>>> a = {1, 2, 3, 4, 5}
>>> b = {1, 2, 3}
>>> a.issuperset(b)
True
>>> b.issuperset(a)
False
```

- isdisjoint : 교집합이 없으면 True, 있으면 False

```python
>>> a = {1, 2, 3}
>>> b = {4, 5, 6}
>>> a.isdisjoint(b)
True
>>> c = {1, 2, 3}
>>> d = {3, 4, 5}
>>> c.isdisjoint(d)
False
```







## 1-7. 자료형 변환

```python
# 정수/실수 -> 문자열
a = 3
str(a) + "hi"

# 문자열 -> 정수/실수
num_str = '10'
print(int(num_str))

num_str = '10.2'
print(float(num_str))

```







# 2. 프로그램 구조

## 2-1. if문

```python
If <조건문>:
    <수행할 문장1> 
    <수행할 문장2>
    ...
elif <조건문>:
    <수행할 문장1>
    <수행할 문장2>
    ...
elif <조건문>:
    <수행할 문장1>
    <수행할 문장2>
    ...
	...
else:
   <수행할 문장1>
   <수행할 문장2>
   ... 




    
# 사용 예
>>> pocket = ['paper', 'cellphone']
>>> card = True
>>> if 'money' in pocket:
...      print("택시를 타고가라")
... elif card: 
...      print("택시를 타고가라")
... else:
...      print("걸어가라")
...
택시를 타고가라


if score >= 60:
    message = "success"
else:
    message = "failure"

    
message = "success" if score >= 60 else "failure"

```







## 2-2 . while 문

```python
while <조건문>:
    <수행할 문장1>
    <수행할 문장2>
    <수행할 문장3>
    ...
    
    
# 사용 예
>>> treeHit = 0
>>> while treeHit < 10:
...     treeHit = treeHit +1
...     print("나무를 %d번 찍었습니다." % treeHit)
...     if treeHit == 10:
...         print("나무 넘어갑니다.")
...
나무를 1번 찍었습니다.
나무를 2번 찍었습니다.
나무를 3번 찍었습니다.
나무를 4번 찍었습니다.
나무를 5번 찍었습니다.
나무를 6번 찍었습니다.
나무를 7번 찍었습니다.
나무를 8번 찍었습니다.
나무를 9번 찍었습니다.
나무를 10번 찍었습니다.
나무 넘어갑니다.
```





## 2-3. for 문

```python
for 변수 in 리스트(또는 튜플, 문자열):
    수행할 문장1
    수행할 문장2
    ...
    

# 예제 1
>>> test_list = ['one', 'two', 'three'] 
>>> for i in test_list: 
...     print(i)
... 
one 
two 
three


# 예제 2
>>> a = [(1,2), (3,4), (5,6)]
>>> for (first, last) in a:
...     print(first + last)
...
3
7
11


# 예제 3
marks = [90, 25, 67, 45, 80]

number = 0 
for mark in marks: 
    number = number +1 
    if mark >= 60: 
        print("%d번 학생은 합격입니다." % number)
    else: 
        print("%d번 학생은 불합격입니다." % number)
        
        
# range 함수 응용 1
>>> add = 0 
>>> for i in range(1, 11): 
...     add = add + i 
... 
>>> print(add)
55


# range 함수 응용 2
marks = [90, 25, 67, 45, 80]
for number in range(len(marks)):
    if marks[number] < 60: 
        continue
    print("%d번 학생 축하합니다. 합격입니다." % (number+1))


# list와 함께
>>> a = [1,2,3,4]
>>> result = []
>>> for num in a:
...     result.append(num*3)
...
>>> print(result)
[3, 6, 9, 12]


# list 내포
>>> a = [1,2,3,4]
>>> result = [num * 3 for num in a]
>>> print(result)
[3, 6, 9, 12]
    
```







# 3. 함수

```python
def 함수명(매개변수):
    <수행할 문장1>
    <수행할 문장2>
    ...
    
    
# 사용 예
def add(a, b) 
    return a + b

def say(): 
    return 'Hi' 


# 가변인수
>>> def add_many(*args): 
...     result = 0 
...     for i in args: 
...         result = result + i 
...     return result 
>>>
>>> result = add_many(1,2,3)
>>> print(result)
6
>>> result = add_many(1,2,3,4,5,6,7,8,9,10)
>>> print(result)
55



# 가변인수 2
>>> def add_mul(choice, *args): 
...     if choice == "add": 
...         result = 0 
...         for i in args: 
...             result = result + i 
...     elif choice == "mul": 
...         result = 1 
...         for i in args: 
...             result = result * i 
...     return result 
... 
>>>
>>> result = add_mul('add', 1,2,3,4,5)
>>> print(result)
15
>>> result = add_mul('mul', 1,2,3,4,5)
>>> print(result)
120


# 다중 반환
>>> def add_and_mul(a,b): 
...     return a+b, a*b
>>>
>>> result = add_and_mul(3,4)
result = (7, 12)
>>> result1, result2 = add_and_mul(3, 4)
result1 = 7
result2 = 12

```





# 4. 클래스

















