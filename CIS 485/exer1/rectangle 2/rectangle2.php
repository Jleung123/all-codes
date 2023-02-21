<?php
	$c = $_GET['choice'];
	$l = $_GET['len'];
	$w = $_GET['wid'];
	$a = (float)$l*(float)$w;
	$p = ((float)$l+(float)$w)*2;
	if ($c == "Area")
		echo "The area is $a";
	else if ($c == "Perimeter")
		echo "The perimeter is $p";
?>
<br><a href = "rectangle2.html">RESET</a>