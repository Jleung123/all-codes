<?php
class Calculator{
	private $midterm;
	private $final;
	public function __construct($num1, $num2){$this->num1 = (float)$num1; $this->num2 = (float)$num2;}
	public function setNumber1($num1){$this->num1 = (float)$num1;}
	public function getNumber1(){return $this->num1;}
	public function setNumber2($num2){$this->num2 = (float)$num2;}
	public function getNumber2(){return $this->num2;}
	public function calcSum(){return ($this->num1 + $this->num2);}
	public function calcDifference(){return abs(($this->num1 - $this->num2));}
	public function calcProduct(){return ($this->num1 * $this->num2);}
}
?>
