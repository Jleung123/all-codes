<!DOCTYPE html>
<html>
	<head>
		<title>GRADE2 PROBLEM</title>
		<style>
			label{float:left;width:100px;}
			br{clear:both;}
		</style>
	</head>
	<body>
		<form action = 'controller.php' method = 'get'>
			<div>GRADE2 PROBLEM</div>
			<label>Number 1:</label><input type = 'text' name = 'num1'/><br>
			<label>Number 2:</label><input type = 'text' name = 'num2'/><br>
			<input type = 'submit' value = 'Sum' name = 'choice'/>
			<input type = 'submit' value = 'Difference' name = 'choice'/>
			<input type = 'submit' value = 'Product' name = 'choice'/>
			<input type = 'submit' value = 'All' name = 'choice'/>
			<input type = 'reset' value = 'Clear' />
		</form>
		<?php
			if(isset($error)) echo $error;
		?>
	</body>
</html>
