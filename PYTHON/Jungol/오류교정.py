n = int(input())  # 행렬의 크기 입력받기
matrix = [list(map(int, input().split())) for _ in range(n)]  # 행렬 정보 입력받기

def check_parity(matrix):
    for i in range(n):
        row_sum = sum(matrix[i])
        col_sum = sum(matrix[j][i] for j in range(n))
        if row_sum % 2 != 0 or col_sum % 2 != 0:
            # 패리티 성질을 만족하지 않는 경우
            for i in range(n):
                for j in range(n):
                    # 비트 하나를 바꿨을 때 패리티 성질이 만족되는지 확인
                    matrix[i][j] ^= 1
                    row_sum = sum(matrix[i])
                    col_sum = sum(matrix[k][j] for k in range(n))
                    if row_sum % 2 == 0 and col_sum % 2 == 0:
                        return f"Change bit ({i+1},{j+1})"
                    matrix[i][j] ^= 1
            return "Corrupt"
    return "OK"

print(check_parity(matrix))  # 결과 출력
