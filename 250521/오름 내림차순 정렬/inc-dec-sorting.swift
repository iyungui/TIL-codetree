import Foundation

let n = Int(readLine()!)!
let input = readLine()!.components(separatedBy: " ").map { Int($0)! }

// 오름차순 정렬 결과 출력
print(input.sorted().map { String($0) }.joined(separator: " "))

// 내림차순 정렬 결과 출력
print(input.sorted(by: >).map { String($0) }.joined(separator: " "))