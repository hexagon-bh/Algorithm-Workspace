while True:
    s = input().strip()  # 비트 스트링 입력
    if s == '#':  # 입력 종료 조건
        break
    parity = s[-1]  # 마지막 문자를 패리티로 저장
    s = s[:-1]  # 마지막 문자 제거
    num_ones = s.count('1')  # 1의 개수 계산
    if num_ones % 2 == 0 and parity == 'e':  # 짝수 패리티인데 1의 개수가 짝수인 경우
        s += '0'  # 마지막 문자는 0
    elif num_ones % 2 == 0 and parity == 'o':  # 짝수 패리티인데 1의 개수가 홀수인 경우
        s += '1'  # 마지막 문자는 1
    elif num_ones % 2 == 1 and parity == 'e':  # 홀수 패리티인데 1의 개수가 짝수인 경우
        s += '1'  # 마지막 문자는 1
    else:  # 홀수 패리티인데 1의 개수가 홀수인 경우
        s += '0'  # 마지막 문자는 0
    print(s)  # 결과 출력
