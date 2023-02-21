<html>
	<head>
		<title>
			exerc1.5
		</title>
	<body>
		<?php
			if(isset($_GET["choice"])) $choice = $_GET["choice"];
			else $choice = null;
			if($choice == null)
			{
				echo "<form action = 'inc2.php' method = 'get'>";
					echo "Enter Integer: ";
					echo "<input type = 'text' name =  'num'/><br>";
					echo "<input type = 'submit' value = 'ENTER' name = 'choice'/>";
				echo "</form>";
			}
			else
			{
				$x = $_GET['num'];
				$y = (integer)$x + 1;
				echo "Increment value is $y";
				echo "<br><a href = 'inc2.php'>RESET</a>";	
			}
		?>
	</body>
</html>