import Foundation

let n = Int(readLine()!)!
let inputString = readLine()!
let input = inputString.split(separator: " ").map { Int($0)! }

// 오름차순 정렬
let ascending = input.sorted()
var ascendingResult = ""
for (index, value) in ascending.enumerated() {
    ascendingResult += String(value)
    if index < ascending.count - 1 {
        ascendingResult += " "
    }
}
print(ascendingResult)

// 내림차순 정렬
let descending = input.sorted(by: >)
var descendingResult = ""
for (index, value) in descending.enumerated() {
    descendingResult += String(value)
    if index < descending.count - 1 {
        descendingResult += " "
    }
}
print(descendingResult)