<!DOCTYPE html>
<html>
	<head>
		<title>Rectangle</title>
	</head>
	<body>
		<form action = "controller.php" method = "get" style = "max-width:350px;margin:1px;padding:1px;">
			<label style = "float:left; width:100px">Length:</label>
			<input name = "len" type = "text" style = "margin:2px; max-width:150px; float:left;"/>
			<p style = "clear:both;"/>
			<label style = "float:left; width:100px">Width:</label>
			<input name = "wid" type = "text" style = "margin:2px; max-width:150px; float:left;"/>
			<p style = "clear:both;"/>
			<input name = "choice" type = "submit" value = "Area" />
			<input name = "choice" type = "submit" value = "Perimeter" />
			<input type = "reset" value = "Clear" />
		</form>
		<?php
			if(isset($error)) echo $error;
		?>
	</body>
</html>
