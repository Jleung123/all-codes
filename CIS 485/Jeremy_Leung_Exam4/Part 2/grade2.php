<?php
	include('Grade.php');
	
	$choice = $_GET["avg"];
	if($choice == null) header('Location: grade2.html');
	else
	{	
		$midterm = (float)$_GET['midterm'];
		$final = (float)$_GET['final'];
		$avg = $midterm + $final;
		$grade = new Grade($midterm, $final);
		echo "Average = ".$grade->calcAverageGrade();
	}
?>
<br><a href = 'grade2.html'>BACK</a>