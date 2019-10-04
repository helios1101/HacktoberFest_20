Q. Generate all the happy numbers below n

Sol.

module HappyNumber where

import Data.Char
import Control.Monad (join)

main :: IO ()
main = do
        putStrLn "Number to list all happy numbers below: "
        line1 <- getLine
        let num = (read line1 :: Int)
        print $ firstNHappyNumber num


-- Decides whatever a number is happy
isHappyNumber :: Int -> Bool
isHappyNumber x
    | l == 1 && n == 1 = True
    | l == 1 && n /= 1 = False
    | l > 1 = isHappyNumber n
    where
        !l = length $ show $ n
        !n = happyParser x

-- Helper which is does the actual calculating
happyParser :: Int -> Int
happyParser = sum . map (join (*)) . map digitToInt . show

-- Generates the happy numbers below n
belowNHappyNumber :: Int -> [Int]
belowNHappyNumber n = [ x | x <- [1..n], isHappyNumber x]