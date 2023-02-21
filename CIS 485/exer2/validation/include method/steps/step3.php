<html>
	<head>
		<title>STEP3</title>
		<link rel = "stylesheet" type = "text/css" href = "steps.css" />
	</head>
	<body>
		<div class = "block">
			<?php
				$x = "1" + $_GET["input1"];
				$y = "1" + $_GET["input2"];
				$z = (int)$x + (int)$y + 2;
				echo "<div class = 'output'>OUTPUT: ";
				if($y <= 15) { echo "$z.$y.$x";}
				else { echo "$x.$y.$z";}
				echo "</div>";
			?>
			<div class = "note">MAKE SURE TO COPY/WRITE THE OUTPUT</div>
			<a href = "controller.php">RESTART</a> 
		</div>
	</body>
</html>
