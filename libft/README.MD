ft_memset: https://meoru-tech.tistory.com/13

ft_memcpy: 정의 자체가 unsigned char에 의존하기 때문에 메모리 관련 함수에는 unsigned char를 사용합니다.

ft_memmove: wonjchoi가 한방법으로 나중에 한번 구현해 보기

ft_strlcat: src가 존재할 때 사이즈만큼 dest에 cpy를 해주고 항상 리턴값을 src의 길이이다.

ft_memcpy: "apple\0\0\0a" "apple\0\0\0b"가 있을 떄 strcmp와 다르게 memcpy는 널값을 만나도 n까지 비교한다.

ft_strlcat : man strlcat의 바탕으로 세번째 매개변수 공부 