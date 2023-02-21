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
				echo "<form action = 'rectangle4.php' method = 'get' style='max-width:350px;margin:1px;padding:1px;'>
						<label style = 'float:left; width:100px'>Length:</label>
					<input name = 'len' type = 'text' style = 'margin:2px; max-width:150px; float:left;'/>
						<label style = 'float:left; width:100px'>Width:</label>
					<input name = 'wid' type = 'text' style = 'margin:2px; max-width:150px; float:left;'/>
						<p style = 'clear:both;'/>
					<input name = 'choice' type = 'submit' value = 'Area' />
					<input name = 'choice' type = 'submit' value = 'Perimeter' />
					<input type = 'reset' value = 'Clear' />
			    </form>";
			}
			else
			{
				$c = $_GET['choice'];
				$l = $_GET['len'];
				$w = $_GET['wid'];
				$a = (float)$l*(float)$w;
				$p = ((float)$l+(float)$w)*2;
				if ($c == 'Area')
				{
					echo "The perimeter is $a";
					echo "<br><a href = 'rectangle4.php'>RESET</a>";
				}
				else if ($c == 'Perimeter')
				{
					echo "The area is $p";
					echo "<br><a href = 'rectangle4.php'>RESET</a>";
				}
			}
		?>
	</body>
</html>