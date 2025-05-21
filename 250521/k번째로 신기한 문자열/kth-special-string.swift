import Foundation

let line = readLine()!.split(separator: " ")
let n = Int(line[0])!
let k = Int(line[1])!
let t = line[2]
var arr: [String] = []
for _ in 0..<n { arr.append(readLine()!) }

let a = arr.filter { $0.hasPrefix(t) }.sorted()
print(a[k - 1])