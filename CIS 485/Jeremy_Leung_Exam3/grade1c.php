<!DOCTYPE html>
<?php
$mid = $_GET['mid'];
$fin = $_GET['fin'];
$s = $_GET['semester'];
$grade = $letter= "";
switch ($s)
{
	case "Fall" : $grade = ((2 * $mid) + $fin) / 3;
	break;
	case "Spring" : $grade = ($mid + (2 * $fin)) / 3;
	break;
	case "Summer" : $grade = ($mid + $fin) / 2;
	break;
}
switch($grade)
{
	case $grade < 65 : $letter = "F";
	break;
	case $grade >= 65 && $grade <= 70 : $letter = "D";
	break;
	case $grade >= 71 && $grade <= 80 : $letter = "C";
	break;
	case $grade >= 81 && $grade <= 90 : $letter = "B";
	break;
	case $grade >= 91 : $letter = "A";
	break;
}
?>
<html>
	<head>
		<title>GRADE1 PROBLEM1</title>
		<link rel = "stylesheet" type = "text/css" href = "grade.css" />
		<?php
			$grade = $letter= "";
			switch ($s)
			{
				case "Fall" : $grade = ((2 * $mid) + $fin) / 3;
				break;
				case "Spring" : $grade = ($mid + (2 * $fin)) / 3;
				break;
				case "Summer" : $grade = ($mid + $fin) / 2;
				break;
			}
			switch($grade)
			{
				case $grade < 65 : $letter = "F";
				break;
				case $grade >= 65 && $grade <= 70 : $letter = "D";
				break;
				case $grade >= 71 && $grade <= 80 : $letter = "C";
				break;
				case $grade >= 81 && $grade <= 90 : $letter = "B";
				break;
				case $grade >= 91 : $letter = "A";
				break;
			}
		?>
	</head>
	<body>
		<div id = "main">
			<div id = "main2">
				<form action = "grade1b.html">
					<table>
						<th colspan = "2">GRADE1 PROBLEM</th>
						<tr><td><label>Letter:</label></td>
							<td> <?php echo "<input value = '$letter' type = 'text'/>"; ?> </td>
						</tr>
						<tr><td colspan = "2">
							<input type = "button" value = "Back" onclick = "location.href = 'grade1.html'" style = "color:white; background-color:black; border:4px solid white;"/>
						</td></tr>
					</table>
				</form>
			</div>
		</div>
	</body>
</html>
