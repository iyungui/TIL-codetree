import Foundation

let n = Int(readLine()!)!
let a = readLine()!.components(separatedBy: " ").map { Int($0)! }

func gcd(_ a: Int, _ b: Int) -> Int {
    return b == 0 ? a : gcd(b, a % b)
}

func lcm(_ a: Int, _ b: Int) -> Int {
    return a / gcd(a, b) * b
}

func solve(_ idx: Int) -> Int {
    if idx == n - 1 { return a[idx] }
    return lcm(a[idx], solve(idx + 1))
}

if n == 1 {
    print(a[0])
} else {
    print(solve(0))
}
