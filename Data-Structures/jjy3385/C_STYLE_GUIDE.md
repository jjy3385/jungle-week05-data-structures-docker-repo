# C 언어 코딩 컨벤션 가이드

> 이 문서는 C 언어 프로젝트에서 일관된 코드 스타일을 유지하기 위한 가이드입니다.

---

## 1. 파일 및 이름 규칙

### 1.1 파일명
- 전부 **소문자**, 단어 구분은 **언더스코어 `_`** 사용
- 예) `main.c`, `linked_list.c`, `string_utils.c`

### 1.2 함수명
- **소문자 + 언더스코어** 방식 (snake_case)
- 예) `init_list()`, `calculate_sum()`

### 1.3 변수명
- 지역 변수: 소문자 + 언더스코어
- 전역 변수: `g_` 접두사 사용
- 상수: 전부 대문자 + 언더스코어 (매크로 포함)
- 예) `MAX_BUFFER_SIZE`

### 1.4 구조체/타입명
- `PascalCase` 또는 `snake_case_t` 형태
- 예) `typedef struct Node Node;`
- 타입 별칭은 `_t` 접미사 사용 (`size_t`처럼)

---

## 2. 코드 포맷팅

### 2.1 들여쓰기
- **4칸 스페이스** (Tab 사용 지양)
```c
if (condition) {
    do_something();
}
```

### 2.2 중괄호 `{ }`
- **K&R 스타일** 권장 (함수, 제어문 동일)
```c
if (x > 0) {
    printf("Positive\n");
} else {
    printf("Non-positive\n");
}
```

### 2.3 줄 길이
- 한 줄은 **최대 80~100자**를 권장
- 너무 길어지면 줄바꿈
```c
long_function_name(argument1, argument2,
                   argument3, argument4);
```

### 2.4 공백 규칙
- 연산자 앞뒤에 공백
```c
a = b + c;
for (i = 0; i < 10; i++) { ... }
```
- 쉼표 뒤에는 공백
```c
func(a, b, c);
```
- 함수 호출 시 함수명과 `(` 사이에 공백 없음
```c
func(x); // OK
func (x); // Bad
```

---

## 3. 함수 작성 규칙

### 3.1 함수 길이
- 하나의 함수는 **한 가지 일**만 하도록 작성
- 50줄 이상이면 분리 고려

### 3.2 매개변수
- 매개변수 개수는 가능하면 **5개 이하**
- 많은 경우 구조체로 묶기

### 3.3 반환 타입
- 명시적으로 작성 (`void`도 생략하지 않음)
```c
void print_message(const char *msg);
```

---

## 4. 주석 스타일

### 4.1 한 줄 주석
- `//` 사용
```c
// 연결 리스트의 맨 끝에 노드 추가
```

### 4.2 여러 줄 주석
- `/* ... */` 사용
```c
/*
 * 프로그램 시작점
 * - 초기화
 * - 메인 루프 실행
 */
```

### 4.3 함수 헤더 주석
```c
/**
 * @brief  두 정수의 합을 구한다.
 * @param  a 첫 번째 정수
 * @param  b 두 번째 정수
 * @return 두 정수의 합
 */
int sum(int a, int b);
```

---

## 5. 기타 규칙

### 5.1 매직 넘버 금지
- 의미 있는 이름의 상수로 대체
```c
#define MAX_USERS 100
```

### 5.2 NULL, 0 사용
- 포인터 초기화에는 `NULL` 사용
- 정수에는 `0` 사용

### 5.3 헤더 가드
```c
#ifndef FILE_NAME_H
#define FILE_NAME_H

// 내용

#endif // FILE_NAME_H
```
