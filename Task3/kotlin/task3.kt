fun fibonacci(n: Int): Int {
    var previous = 0
    var current = 1
    for (i: Int in 2..n) {
        val temp = current + previous
        previous = current
        current = temp
    }
    return current
}