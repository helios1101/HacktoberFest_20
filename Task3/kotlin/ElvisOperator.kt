fun main() {
    val name : String? = null

    println(name ?: "Ifan Zalukhu")  // Ifan Zalukhu

    if (name != null) println(name) else println("Ifan Zalukhu")
}