<!DOCTYPE html>
<html>
<head>
<title>INCREMENT PROBLEM</title>
</head>
<body>
<?php
	if(isset($_GET["choice"])) $choice=$_GET["choice"];
	else $choice=null;
	
	if($choice==null || $choice=="Clear")
	{
		$x=$y="";
	}
	else
	{
		$x=$_GET["number"];
		$y=(integer)$x+1;
	}
?>
	<form action='inc3.php' method='get' style='color:black; background-color:lightblue; border:5px solid black;max-width:350px;margin:1px;padding:1px;'>
		<label style='color:white; background-color:black; float:left; text-align:center; width:350px;'>INCREMENT PROBLEM</label><p  />
		<label style='float:left; width:100px'>Integer:</label>
				<?php
				  echo "<input  value='$x' name='number' type='text' style='background-color:#DEDEE6; border:4px solid black; margin:2px; max-width:150px; float:left;'/><p style='clear:both;'/>";
		         ?>
		<label style='float:left; width:100px'>Answer:</label>
				<?php
				  echo "<input value='$y' readonly type='text' style='background-color:#DEDEE6; border:4px solid black; margin:2px; max-width:150px; float:left;'/><p style='clear:both;'/>";
				?>
		<div style='text-align: center;'>
			<input type='submit' name='choice' value='Increment' style='color:black;background-color:red;border:4px solid black;'/>
			<input type='submit' name='choice' value='Clear' 	 style='color:black;background-color:red;border:4px solid black;'/>
		</div>
	</form>
</body>
</html>
