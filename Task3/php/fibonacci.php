<?php 
/**
 * Sequência de Fibonacci em PHP
 * @author	Leandro F
 */
 
function fibonacci($q, $zero = false){
	if($q >= 2){ 
		$f = ($zero) ? [0,1] : [1,1]; 
		for($i = 2; $i < $q; $i++){
			$f[$i] = $f[$i-1] + $f[$i-2];		
		}
		return $f;
	}
	return ($q == 1) ? [1] : [];
}
 
$fib = fibonacci(20, true);
foreach($fib as $v){
	echo (end($fib) == $v) ? $v : $v.', ';	
}
?>