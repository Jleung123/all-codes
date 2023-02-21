<!DOCTYPE html>
<?php
$mid = $_GET['mid'];
$fin = $_GET['fin'];
$s = $_GET['semester'];
$grade = "";
switch ($s)
{
	case "Fall" : $grade = ((2 * $mid) + $fin) / 3;
	break;
	case "Spring" : $grade = ($mid + (2 * $fin)) / 3;
	break;
	case "Summer" : $grade = ($mid + $fin) / 2;
	break;
}
?>
<html>
	<head>
		<title>GRADE1 PROBLEM1</title>
		<link rel = "stylesheet" type = "text/css" href = "grade.css" />
	</head>
	<body>
		<div id = "main">
			<div id = "main2">
				<form action = "grade1b.html">
					<table>
						<th colspan = "2">GRADE1 PROBLEM</th>
						<tr><td><label>Average:</label></td>
							<td> <?php echo "<input value = '$grade' type = 'text'/>"; ?></td>
							</tr>
						<tr><td colspan = "2" > 
							<input type = "button" value = "Back" onclick = "location.href = 'grade1.html'" style = "color:white; background-color:black; border:4px solid white;"/>
						</td></tr>
					</table> 
				</form>
			</div>
		</div>
	</body>
</html>
