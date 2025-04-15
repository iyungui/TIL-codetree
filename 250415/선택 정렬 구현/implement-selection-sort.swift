import Foundation

let n: Int = Int(readLine()!)!
let arr = readLine()!.split(separator: " ").map { Int($0)! }

func selectionSort(_ arr: [Int]) -> [Int] {
    var arr = arr
    for i in 0..<arr.count {
        var minIdx: Int = i
        
        for j in i + 1..<arr.count {
            if arr[minIdx] > arr[j] {
                minIdx = j
            }
        }
        if i != minIdx {
            arr.swapAt(i, minIdx)
        }
    }
    return arr
}

let answer = selectionSort(arr)

for i in answer { print("\(i) ", terminator: "") }