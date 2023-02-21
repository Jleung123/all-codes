<!DOCTYPE html>
<html>
	<head>
		<title>GRADE3 PROBLEM</title>
		<style>
			label{float:left;width:100px;}
			br{clear:both;}
		</style>
	</head>
	<body>
		<?php
			include('Grade.php');
			if(isset($_GET['average'])) $choice = $_GET['average'];
			else $choice = null;
			if($choice == null || $choice == 'Clear')
			{
				$final = $midterm = $avg = '';
			}
			else if ($choice == 'Average')
			{
				$final = $_GET['final'];
				$midterm = $_GET['midterm'];
				$grade = new Grade($final, $midterm);
				$avg = $grade->calcAverageGrade();
			}
		echo "<form action = 'grade3.php'>
			<div>GRADE3 PROBLEM</div>
			<label>Midterm:</label><input type = 'text'name = 'midterm'/><br>
			<label>Final:</label><input type = 'text'name = 'final'/><br>
			<label>Averge:</label><input readonly type = 'text' name = 'Average' value = '$avg'/><br>
			<input type = 'submit' value = 'Average' name = 'average'/>
			<input type = 'reset' value = 'Clear'/>
		</form>";
		?>
	</body>
</html>
