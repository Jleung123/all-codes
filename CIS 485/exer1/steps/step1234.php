<!DOCTYPE html>
<html>
	<head>
		<title>RECTANGLE PROBLEM</title>
		<link rel = "stylesheet" type = "text/css" href = "steps.css" />
		<script>
			function isInteger()
			{
				var elem = document.getElementById(input2);
				var value = "";
				if(elem.value != null) value=elem.value.trim();	 
				if 	(value == null || value == "") 	{alert("Integer Field Empty"); return false;}
				else if (value == " ")	{alert("Space is not Valid"); return false;}
				else if (isNaN(value)) 	{alert("Value Not A Number"); return false;}
				else if ((parseFloat(value))%1 != 0 )	{alert("Number Is Not An Integer"); return false;}
				else if (value < 1 || value > 10)	{alert("Value must be between 1 - 10");return flase;}
				return true;
			}
		</script>
	</head>
	<body>
		<div class = "block">
			<?php
			if(isset($_GET['step'])) $step = $_GET['step'];
				else $step = null;
				if($step == "1" || $step == " " || $step == null)
				{
					echo "<form action = 'step1234.php' method = 'get'>
						ENTER INPUT1(A or B):
						<select name = 'input1'>
							<option>A</option>
							<option>B</option>
						</select>
						<input type = 'hidden' name = 'step' value = '2'/>
						<input type = 'hidden' name = 'x' value='3'/>
						<input type = 'submit' value = 'ENTER'/>
					</form>";
				}
				else if($step == "2")
				{
					$choice=$_GET["input1"];
					if($choice == "A") 
					{ 
						echo "<form action = 'step1234.php' method = 'get'>
							<input type = 'hidden' name = 'input1' value = '5'/>
							<input type = 'hidden' name = 'step' value = '4'/>";
					}
					else if($choice == "B") 
					{
						echo "<form action = 'step1234.php' method = 'get'>
							<input type = 'hidden' name = 'input1' value = '1'/>
							<input type = 'hidden' name = 'step' value = '3'/>";
					}
					else
					{
						echo "<form action = 'index.php' method = 'get'>";
					}
					echo " ENTER INPUT2(1-10) : 
						<input type = 'text' id = 'input2' name = 'input2' size = '3'>
						<input type = 'submit' value = 'ENTER' onclick = 'return isIteger();'/>
						</form>";
				}
				else if($step == 3)
				{
					$x = "1" + $_GET["input1"];
					$y = "1" + $_GET["input2"];
					$z=(int)$x + (int)$y + 2;
					echo "<div class = 'output'>OUTPUT: ";
					if($y <= 15)	{echo "$z.$y.$x";}
					else	{echo "$x.$y.$z";}
					echo "</div>
					<div class = 'note'>MAKE SURE TO COPY/WRITE THE OUTPUT</div>
					<a href = 'step1234.php'>RESTART</a>";
				}
				else if($step == 4)
				{
					$xf = "1" + $_GET["input1"];
					$xz = "2" + $_GET["input2"];
					$xaq = (int)$xf;
					$xax = (int)$xz;
					if($xaq > $xax)	{$xaq = $xaq+33; $xax = $xax+31;}
					else	{$xaq = $xaq + 2; $xax = $xax + 44;}
					echo "<div class = 'output'>OUTPUT: ";
					echo "$xf.$xaq.$xax.$xz";
					echo "</div>";
					echo "<div class = 'note'>MAKE SURE TO COPY/WRITE THE OUTPUT</div>
					<a href = 'step1234.php'>RESTART</a>";
				}
			?>
		</div>
	</body>
</html>