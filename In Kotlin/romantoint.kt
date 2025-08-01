fun romanToInt(s: String): Int {
    val roman = mapOf(
        'I' to 1, 'V' to 5, 'X' to 10,
        'L' to 50, 'C' to 100, 'D' to 500, 'M' to 1000
    )

    var total = 0
    var prev = 0

    for (ch in s.reversed()) {
        val value = roman[ch]!!
        if (value < prev)
            total -= value
        else {
            total += value
            prev = value
        }
    }

    return total
}

fun main() {
    val s = "MCMXCIV"
    println("Roman numeral: $s → Integer: ${romanToInt(s)}")
}
