<!DOCTYPE html>
<html>
	<head>
		<title>RECTANGLE PROBLEM</title>
	</head>
	<body>
		<?php
		if(isset($_GET['choice'])) $choice = $_GET['choice'];
			else $choice = null;
			if($choice == null || $choice == 'Clear')
			{
				$x=$y=$z="";
			}
			else
			{
				$x = $_GET['len'];
				$y = $_GET['wid'];
				$z = (float)$x * (float)$y;
			}
		?>
		<form action = 'rectangle5.php' method = 'get' style='color:black; background-color:lightblue; border:5px solid black;max-width:350px;margin:1px;padding:1px;'>
			<label style='color:white; background-color:black; float:left; text-align:center; width:350px;'>RECTANGLE PROBLEM</label><p  />
			<label style='float:left; width:100px'>Length:</label>
			<?php
				echo "<input value = '$x' type='text' name = 'len' style='background-color:#DEDEE6; border:4px solid black; margin:2px; max-width:150px; float:left;'/><p style='clear:both;'/>";
			?>
			<label style='float:left; width:100px'>Width:</label>
			<?php
				echo "<input value = '$y' type='text' name = 'wid' style='background-color:#DEDEE6; border:4px solid black; margin:2px; max-width:150px; float:left;'/><p style='clear:both;'/>";
			?>
			<label style='float:left; width:100px'>Answer:</label>
			<?php
				echo "<input value = '$z' readonly type='text' style='background-color:#DEDEE6; border:4px solid black; margin:2px; max-width:150px; float:left;'/><p style='clear:both;'/>";
			?>
			<div style='text-align: center;'>
				<input type='submit' name = 'choice' value='Area' style='color:black;background-color:red;border:4px solid black;'/>
				<input type='submit' name = 'choice' value='Clear' 	 style='color:black;background-color:red;border:4px solid black;'/>
			</div>
		</form>
	</body>
</html>