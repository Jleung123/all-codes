<!DOCTYPE html>
<html>
	<head>
		<title>GRADE2 PROBLEM</title>
		<link rel = "stylesheet" type = "text/css" href = "grade.css" />
		<?php
			if(isset($_GET['choice'])) $choice = $_GET['choice'];
			else $choice = null;
			if($choice == null || $choice == 'Clear')
			{
				$m = $f = $s = $a = $grade = $letter = $temp = "";
			}
			else
			{
				$m = $_GET['midterm'];
				$f = $_GET['final'];
				$s = $_GET['semester'];
				switch ($s)
				{
					case "Fall" : $grade = ((2 * $m) + $f) / 3;
					break;
					case "Spring" : $grade = ($m + (2 * $f)) / 3;
					break;
					case "Summer" : $grade = ($m + $f) / 2;
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
				if ($choice == "Average")
				{
					$temp = $grade;
				}
				else if ($choice == "Letter")
				{
					$temp = $letter;
				}
			}
		?>
	</head>
	<body>
		<div id = "main">
			<div id = "main2">
				<form action = "grade2.php" method = "get">
					<table>
						<th colspan = "2">GRADE2 PROBLEM</th>
						<tr><td><label>Midterm:</label></td>	<td><input name = "midterm" type = "text"/></td></tr>
						<tr><td><label>Final:</label></td>	<td><input name = "final" type="text"  /></td></tr>
						<tr><td><label>Semester:</label></td>	<td><select name = "semester"><option>Fall</option><option>Spring</option><option>Summer</option></select></td></tr>
						<tr><td><label>Answer:</label></td>	
						<td> <?php echo "<input value = '$temp' type = 'text' />";?></td></tr>
						<tr>
							<td colspan = "2"> 
								<input name = "choice" type = 'submit' value = "Average"/>
								<input name = "choice" type = 'submit' value = "Letter"/>
								<input type = "reset" value="Clear"/>
							</td>
						</tr>
					</table> 
				</form>
			</div>
		</div>
	</body>
</html>
