<?php
	$choice = $_GET["choice"];
	$x = $_GET["len"];
	$y = $_GET["wid"];
	if($choice == "Area")
	{
		$z = (float)$x * (float)$y;
		echo "Area = $z";
	}
	else if($choice == "Perimeter")
	{
		$z = 2 * (float)$x + 2 * (float)$y;
		echo "Perimeter=$z";
	}
?>
<br><a href = "controller.php">reset</a>