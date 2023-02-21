<!DOCTYPE html>
<html>
	<body>
		<form action = "controller.php" method = "get">
			Enter Integer:
			<input type = "text" name = "num" />
			<input type = "submit" value = "Enter" name = "choice"/>
		</form>
		<?php
			if(isset($errormsg)) echo "<div style = 'color:red'>".$errormsg."</div>";
		?>
	</body>
</html>