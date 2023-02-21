<!DOCTYPE html>
<html>
	<head>
		<title>CIRCLE PROBLEM</title>
	</head>
	<body>
		<?php
			include('library.php');
			include('Circle.php');
			$choice = readValue('choice');
			if($choice == null || $choice == 'Clear')
			{
				$area=$circumference='';
			}
			else if ($choice == 'Area')
			{
				$radius = readValue('radius');
				$circle = new Circle($radius);
				$area = $circle->calcArea();
				$circumference = '';
			}
			else if ($choice == 'Circumference')
			{
				$radius = readValue('radius');
				$circle = new Circle($radius);
				$circumference = $circle->calcCircumference();
				$area = '';
			}
			else if ($choice == 'Both')
			{
				$radius = readValue('radius');
				$circle = new Circle($radius);
				$area = $circle->calcArea();
				$circumference = $circle->calcCircumference();
			}
			echo "<form action = 'circle2.php
			' method = 'get'>
				<label>CIRCLE PROBLEM</label><br>
				<label>Radius:</label><input type = 'text' name = 'radius'/><br>
				<label>Area:</label><input readonly type = 'text' value = '$area'/><br>
				<label>Circumference:</label><input readonly type = 'text' value = '$circumference'/><br>
				<input type = 'submit' name = 'choice' value = 'Area' />
				<input type = 'submit' name = 'choice' value = 'Circumference' />
				<input type = 'submit' name = 'choice' value = 'Both' />
				<input type = 'reset' name = 'choice' value = 'Clear' />
			</form>"
		?>
	</body>
</html>
