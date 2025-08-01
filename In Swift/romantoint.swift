func romanToInt(_ s: String) -> Int {
    let roman: [Character: Int] = [
        "I": 1, "V": 5, "X": 10,
        "L": 50, "C": 100, "D": 500, "M": 1000
    ]

    var total = 0
    var prev = 0

    for ch in s.reversed() {
        let value = roman[ch]!
        if value < prev {
            total -= value
        } else {
            total += value
            prev = value
        }
    }

    return total
}

let s = "MCMXCIV"
print("Roman numeral: \(s) → Integer: \(romanToInt(s))")
