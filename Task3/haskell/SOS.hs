Q. Calculate prime numbers using Sieve of Sundaram

Sol.
module SOS where

main :: IO ()
main = do
        putStrLn "Use Sieve of Sundaram with the starting value of: "
        line1 <- getLine
        let num = (read line1 :: Int)
        print $ sieveOfSundaram num

-- Adds the first prime and calls a list eliminating method
sieveOfSundaram :: Int -> [Int]
sieveOfSundaram n = 2 : (writeSOS $ [1..n] \\ elimList n)

-- Uses the final transformations
writeSOS :: [Int] -> [Int]
writeSOS xs = map (\x -> 2 * x + 1) xs

-- Creates the list of eliminations
elimList :: Int -> [Int]
elimList n = filter (<=n) [i + j + 2 * i * j | i<-[1..n], j<-[i..n]]