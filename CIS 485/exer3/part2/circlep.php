<?php
	include('library.php');
	include('Circle.php');
	$choice = readValue('choice');
	if($choice == null) header('Location: circle.html');
	else
	{	
		$radius = (float)readValue('radius');
		$circle = new Circle($radius);
		echo "Area = ".$circle->calcArea();
	}
?>
<br><a href = 'circle.html'>BACK</a>