# Cpp_study
- C++ 기본 및 활용 예제 학습
- git 코드 수정 및 코드 관리  
 - .gitignore 사용

## Advanced Programming
- 고급프로그래밍(2학년 1학기)수업 대비  
- 예습&복습  
- 과제 관련 정리  

## Chapter 정보
- Chapter 1: C++ 시작
- Chapter 2: C++ 프로그래밍의 기본
- Chapter 3: 클래스와 객체
- Chapter 4: 객체 포인터와 객체 배열, 객체의 동적 생성
- Chapter 5: 함수와 참조, 복사 생성자
- Chapter 6: 함수 중복과 static 멤버
- Chapter 7: 프렌드와 연산자 중복  
- Chapter 8: 상속  

## 도서 정보
- 도서명: 명품 C++ Programming
- 저자명/출판사: 황기태/생능출판사


### + Visual Studio에서 프로젝트 이름 변경하는법  
 1. `.sln`파일을 메모장에서 연다.
 2. `Project("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}") = "함수중복과static멤버", "함수중복과static멤버\함수중복과static멤버.vcxproj", "{57FE1A2C-D608-4B8E-B3FC-A26EFDD0F1E2}"`
 3. 의 프로젝트 이름을 원하는 이름으로 바꾸어준다.
 4. 저장 후 실제 폴더들의 이름과 파일 내부의 vcxproj 파일들의 이름 또한 모두 바꾸어준다.
 5. 이 과정 이후에도 프로젝트가 언로드된다면 바꾸지 않은 부분이 있는지 확인.  
 6. git bash에서 `git add` 시 파일명에 공백이 있을때 add가 안되는 현상으로 인해 프로젝트명 변환
 7. 변경 후 이미 github에 올렸던 파일이었다면 삭제 후 `git pull`를 이용 충돌 방지    
