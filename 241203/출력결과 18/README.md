# [출력결과 18 ](https://www.codetree.ai/missions/5/problems/reading-k201540)

|유형|문제 경험치|난이도|
|---|---|---|
|[Novice Mid / 재귀함수 / 값을 반환하는 재귀함수](https://www.codetree.ai/missions?missionId=5)|50xp|![어려움][hard]|








[b5]: https://img.shields.io/badge/Bronze_5-%235D3E31.svg
[b4]: https://img.shields.io/badge/Bronze_4-%235D3E31.svg
[b3]: https://img.shields.io/badge/Bronze_3-%235D3E31.svg
[b2]: https://img.shields.io/badge/Bronze_2-%235D3E31.svg
[b1]: https://img.shields.io/badge/Bronze_1-%235D3E31.svg
[s5]: https://img.shields.io/badge/Silver_5-%23394960.svg
[s4]: https://img.shields.io/badge/Silver_4-%23394960.svg
[s3]: https://img.shields.io/badge/Silver_3-%23394960.svg
[s2]: https://img.shields.io/badge/Silver_2-%23394960.svg
[s1]: https://img.shields.io/badge/Silver_1-%23394960.svg
[g5]: https://img.shields.io/badge/Gold_5-%23FFC433.svg
[g4]: https://img.shields.io/badge/Gold_4-%23FFC433.svg
[g3]: https://img.shields.io/badge/Gold_3-%23FFC433.svg
[g2]: https://img.shields.io/badge/Gold_2-%23FFC433.svg
[g1]: https://img.shields.io/badge/Gold_1-%23FFC433.svg
[p5]: https://img.shields.io/badge/Platinum_5-%2376DDD8.svg
[p4]: https://img.shields.io/badge/Platinum_4-%2376DDD8.svg
[p3]: https://img.shields.io/badge/Platinum_3-%2376DDD8.svg
[p2]: https://img.shields.io/badge/Platinum_2-%2376DDD8.svg
[p1]: https://img.shields.io/badge/Platinum_1-%2376DDD8.svg
[passed]: https://img.shields.io/badge/Passed-%23009D27.svg
[failed]: https://img.shields.io/badge/Failed-%23D24D57.svg
[easy]: https://img.shields.io/badge/쉬움-%235cb85c.svg?for-the-badge
[medium]: https://img.shields.io/badge/보통-%23FFC433.svg?for-the-badge
[hard]: https://img.shields.io/badge/어려움-%23D24D57.svg?for-the-badge



## 재귀함수 / 값을 반환하는 재귀함수 문제 - 노트

각 함수의 역할에 대해서 파악

g 함수: a ~ b 범위 중 x 보다 작은 값의 개수를 찾는 함수
f 함수: k 는 현재 탐색하는 범위 (a, b) 에서 x 이하의 값들 중에서 찾고자 하는 k 번째 작은 값의 순서를 나타냄. (이분 탐색 사용)


예를 들어,
p = {1, 3, 7, 8, 4, 3, 5, 2, 9, 2} 이고,
x = 5, k = 4 일 때, f 함수는, p 배열에서 5 이하의 값 중 '네 번째로 작은 값'을 찾는 함수라는 것이다.

처음으로 함수 호출 f(0, 9, 5, 4)

현재 범위: p[0] ~ p[9] = {1, 3, 7, 8, 4, 3, 5, 2, 9, 2}
중간 값 mid: (0 + 9) / 2 = 4
g(0, 4, 5) 호출:
p[0] ~ p[4] = {1, 3, 7, 8, 4}에서 5 이하인 값: {1, 3, 4}
결과 lc = 3 (5 이하인 값의 개수)

lc 값이 나오면 조건을 판별한다.

만약 lc < k 라면, 답은 [mid + 1, b] 즉 [5, 9] 범위 안에 있음.
왜냐하면 이미 g(0, 4, 5) 를 통해, 범위(0, 4) 에서 5 이하인 값은 고려되었지만, 네 번째 값(k)는 이 범위에 없기 때문.

따라서, k 를 업데이트 시키면 k = k - lc = 4 - 3 = 1
즉, 남은 범위에서 첫 번째 값을 찾으면 됨.

다음 호출 f(5, 9, 5, 1)
	•	현재 범위: p[5] ~ p[9] = {3, 5, 2, 9, 2}
	•	중간값: mid = (5 + 9) / 2 = 7
	•	g(5, 7, 5) 호출:
	•	p[5] ~ p[7] = {3, 5, 2}에서 5 이하인 값: {3, 5, 2}
	•	결과 lc = 3 (5 이하인 값의 개수)

이런 식으로 반복...
5 이하의 값 중 네 번째로 작은 값은 3.


## 요약
1.	g(a, mid, x)로 탐색 범위의 왼쪽 절반 ([a, mid])에서 x 이하의 값 개수 lc를 계산합니다.
2.	lc와 k를 비교:
	•	lc >= k: 답이 [a, mid]에 있으므로 탐색 범위를 [a, mid]로 줄입니다.
	•	lc < k: 답이 [mid+1, b]에 있으므로 탐색 범위를 [mid+1, b]로 줄이고, k를 k - lc로 업데이트합니다.
3.	이렇게 범위를 반복적으로 줄이면서 최종적으로 답을 찾습니다.
