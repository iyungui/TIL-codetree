import Foundation

let n = Int(readLine()!)!
let input = readLine()!.components(separatedBy: " ").map { Int($0)! }
print(input.sorted(by: <).map { String($0) }.joined(separator: " "))
print(input.sorted(by: >).map { String($0) }.joined(separator: " "))