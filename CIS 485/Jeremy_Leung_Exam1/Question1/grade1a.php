<!DOCTYPE html>
<?php
$step = $_GET['step'];
$mid = $_GET['mid'];
$fin = $_GET['fin'];
?>
<html>
	<head>
		<title>GRADE1 PROBLEM</title>
		<link rel =  "stylesheet" type = "text/css" href = "grade.css" />
	</head>
	<body>
		<div id = "main">
			<div id = "main2">
				<?php
					if(isset($_GET['step'])) $step = $_GET['step'];
					else $step = null;
					if($step == null || $step == 'Clear')
					{
						$m = $f = $s = $mid = $fin = "";
					}
					else
					{
						if ($step == "Average")
						{
							echo "<form action = 'grade1b.php'/>";
						}
						else if ($step == "Letter")
						{
							echo "<form action = 'grade1c.php'/>";
						}
					}
				?>
				<table>
					<th colspan = "2">GRADE1 PROBLEM</th>
					<tr><td><label>SEMESTER:</label></td><td><select name = "semester"><option>Fall</option><option>Spring</option><option>Summer</option></select></td></tr>
					<tr><td colspan = "2" > 
					<input type = "submit" value = "Next"  style = "color:white;background-color:black;border:4px solid white;" />
					<input type = "reset" value = "Back" onclick = "location.href='grade1.html'" style="color:white;background-color:black;border:4px solid white;" />
					<?php echo "<input value = '$mid' type = 'hidden' name = 'mid'/>
								<input value = '$fin' type = 'hidden' name = 'fin'/>"; ?>
					</td></tr>
				</table> 
			</div>
		</div>
	</body>
</html>
