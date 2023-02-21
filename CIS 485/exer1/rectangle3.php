<html>
	<head>
		<title>
			exerc1.6
		</title>
	<body>
		<?php
			if(isset($_GET['choice'])) $choice = $_GET['choice'];
			else $choice = null;
			if($choice == null)
			{
				echo "<form action = 'rectangle3.php' method = 'get' style = 'max-width:350px;margin:1px;padding:1px;'>";
						echo "<label style = 'float:left; width:100px'>Length:</label>";
					echo "<input name = 'len' type = 'text' style = 'margin:2px; max-width:150px; float:left;'/><br>";
						echo "	<label style='float:left; width:100px'>Width:</label>";
					echo "<input name = 'wid' type = 'text' style = 'margin:2px; max-width:150px; float:left;'/><br>";
						echo "	<p style = 'clear:both;'/>";
					echo "<input type = 'submit' value = 'Area' name = 'choice'/>";
					echo "<input type = 'reset' value = 'Clear' />";
				echo "</form>";
			}
			else
			{
				$x = $_GET['len'];
				$y = $_GET['wid'];
				$z = (float)$x*(float)$y;
				echo "The area is $z";
				echo "<br><a href = 'rectangle3.php'>RESET</a>";
			}
		?>
	</body>
</html>