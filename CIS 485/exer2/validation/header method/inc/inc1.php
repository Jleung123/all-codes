<!DOCTYPE html>
<html>
	<body>
		<form action="controller.php" method="get">
			Enter Integer:
			<input type = "text" name = "num" />
			<input type = "submit" value = "Enter" name = "choice"/>
		</form>
		<?php
			if(isset($_GET["errormsg"]))
			{
				$errormsg = urldecode($_GET["errormsg"]);
				if ($errormsg != null )echo "<div style = 'color:red'>".$errormsg."</div>";
			}
		?>
	</body>
</html>