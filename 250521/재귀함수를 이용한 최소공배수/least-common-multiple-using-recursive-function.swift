import Foundation

let n = Int(readLine()!)!
let arr = readLine()!.components(separatedBy: " ").map { Int($0)! }

func gcd(_ a: Int, _ b: Int) -> Int {
    if b == 0 { return a }
    return gcd(b, a % b)
}

func lcm(_ a: Int, _ b: Int) -> Int {
    return a / gcd(a, b) * b
}

func solve(_ idx: Int) -> Int {
    if n == 1 { return arr[0] }

    if idx == n - 1 { return arr[idx] }

    return lcm(arr[idx], solve(idx + 1))
}

let res = solve(0)
print(res)