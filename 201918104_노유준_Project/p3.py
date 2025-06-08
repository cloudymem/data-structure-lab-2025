# 프로젝트 문제 3번
#-*-coding:cp949-*-
from collections import deque

input = [[4, 3, 2, 1],
         [0, 0, 0, 0],
         [0, 0, 9, 0],
         [1, 2, 3, 4]]
N = 4

forest = []

def problem3(input):
    N = len(input)
    bear_size = 2
    honeycomb_count = 0
    time = 0

    forest = [row[:] for row in input]

    # 곰의 초기 위치 찾기
    for i in range(N):
        for j in range(N):
            if forest[i][j] == 9:
                bear_x, bear_y = i, j
                forest[i][j] = 0
    print("곰의 초기 위치 x : {0}, y : {1}".format(bear_x, bear_y))

    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]

    def bfs(sx, sy, size):
        visited = [[-1] * N for _ in range(N)]
        queue = deque()
        queue.append((sx, sy))
        visited[sx][sy] = 0
        edible = []

        while queue:
            x, y = queue.popleft()
            for dir in range(4):
                nx = x + dx[dir]
                ny = y + dy[dir]
                if 0 <= nx < N and 0 <= ny < N and visited[nx][ny] == -1:
                    if forest[nx][ny] <= size:
                        visited[nx][ny] = visited[x][y] + 1
                        queue.append((nx, ny))
                        if 0 < forest[nx][ny] < size:
                            edible.append((visited[nx][ny], nx, ny))

        if not edible:
            return None
        edible.sort()
        return edible[0]  # (거리, x, y)

    while True:
        result = bfs(bear_x, bear_y, bear_size)
        if result is None:
            break
        dist, nx, ny = result
        time += dist
        forest[nx][ny] = 0
        honeycomb_count += 1
        if honeycomb_count == bear_size:
            bear_size += 1
            honeycomb_count = 0
        bear_x, bear_y = nx, ny

    result = time
    return result

result = problem3(input)
assert result == 14
print("정답입니다.")
