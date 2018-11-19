#include <stdio.h>

int main(void)
{
    char *apszList[3] = {"Test", "String", "Data"};
    char **ppszList = apszList;
    
    char szBuffer[32] = {"TestString"};
    char *pszBuffer = szBuffer;
    
    printf("%c\n", **apszList);
    printf("%c\n", *apszList[1]);
    printf("%c\n", *pszBuffer);
    
    printf("%s\n", apszList[0]);
    printf("%s\n", *(apszList + 1));
}


/*
 
 line 5: 요소가 char*형이고 개수가 3인 배열을 선언하고 초기화한다.
 line 6:  char 형 이중 포인터 변수를 초기화한다.
 line 8: 요소가 char 형이고 개수가 32인 배열을 선언하고 초기화한다.
 line 9: char 형 단일 포인터 변수를 선언하고 초기화한다.
 line 11: apszList 는 배열의 이름이므로 주소이다. 이 주소를 한번
            간접 지정하면 char* 형이고 두 번 간접지정하면 char 형이다.
 line 12: apszList 에 대해 배열 연산을 수행하고 그 결과에 대해서 간접 지정
            연산을 수행한다. 그리고 배열 연산의 결과는 char* 형이다.
 line 15: apszList 는 요소가 char* 형인 배열의 이름이다.
          따라서 배열 연산의 결과는 char* 형이다.
 line 16: ppszList + 1 연산의 결과는 주소이며 해당 주소를 간접 지정
            연산 결과는 char* 형이다
 
 */
