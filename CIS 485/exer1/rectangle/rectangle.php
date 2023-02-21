<?php
	$x = $_GET['len'];
	$y = $_GET['wid'];
	$z = (float)$x*(float)$y;
	echo "The area is $z";
?>
<br><a href = "rectangle.html">RESET</a>