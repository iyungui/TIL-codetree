import Foundation

let n = Int(readLine()!)!
let input = readLine()!.components(separatedBy: " ").map { Int($0)! }
for i in input.sorted(by: <) { print(i, terminator: " ") }
print()
for i in input.sorted(by: >) { print(i, terminator: " ") }