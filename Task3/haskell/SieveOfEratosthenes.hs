Q. Calculate prime numbers up to n

Sol.
module SieveOfEratosthenes where

main :: IO ()
main = do
        putStrLn "Number to search primes up to: "
        line1 <- getLine
        let num = (read line1 :: Int)
        print $ sieve num

-- Calling the tail recursive function
sieve :: Int -> [Int]
sieve n = sieveRec [2..n] []

-- Tail recursive function, that uses the Sieve of Erastosthenes
sieveRec :: [Int] -> [Int] -> [Int]
sieveRec []     acc = reverse acc
sieveRec (n:xs) acc = sieveRec (filter (\x-> x `mod` n /= 0) xs) (n:acc)
