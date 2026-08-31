import java.util.StringTokenizer

private class FastScanner {
    private val br = System.`in`.bufferedReader()
    private var st: StringTokenizer? = null

    fun nextInt(): Int {
        while (st == null || !st!!.hasMoreElements()) {
            st = StringTokenizer(br.readLine())
        }
        return st!!.nextToken().toInt()
    }
}

fun main() {
    val fs = FastScanner()

    val t = fs.nextInt()

    repeat(t) {

        val k = fs.nextInt()

        val a1 = fs.nextInt()
        val b1 = fs.nextInt()

        val a2 = fs.nextInt()
        val b2 = fs.nextInt()

        var aliceRound = 0
        var bobRound = 0

        if (a1 > b1) aliceRound++
        else bobRound++

        if (a2 < b2) bobRound++
        else aliceRound++

        val aliceSum = a1 + a2
        val bobSum = b1 + b2

        var bobCanWin = false

        loop@ for (a3 in 0..k) {
            for (b3 in 0..k) {

                if (a3 == b3) continue

                val finalAliceSum = aliceSum + a3
                val finalBobSum = bobSum + b3

                var finalAliceRound = aliceRound
                var finalBobRound = bobRound

                if (a3 > b3) finalAliceRound++
                else finalBobRound++

                if (finalBobSum > finalAliceSum) {
                    bobCanWin = true
                    break@loop
                }
                else if (
                    finalBobSum == finalAliceSum &&
                    finalBobRound > finalAliceRound
                ) {
                    bobCanWin = true
                    break@loop
                }
            }
        }

        if (bobCanWin) {
            println("YES")
        } else {
            println("NO")
        }
    }
}