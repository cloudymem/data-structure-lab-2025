# -*- coding: cp949 -*-
# -*- coding: utf-8 -*-
input = ")))()"

def problem2(input):
    # 이 곳에 코드를 작성하세요.
    # 입력 힌트
    stack = []
    needed = 0

    for char in input:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                needed += 1
    needed += len(stack)
    result = needed
    return result

result = problem2(input)
assert result == 3
print("정답입니다.")
