<?php
class Grade{
	private $midterm;
	private $final;
	public function __construct($midterm, $final){$this->midterm = (float)$midterm; $this->final = (float)$final;}
	public function setMidterm($midterm){$this->midterm = (float)$midterm;}
	public function getMidterm(){return $this->midterm;}
	public function setFinal($final){$this->final = (float)$final;}
	public function getFinal(){return $this->final;}
	public function calcAverageGrade(){return (($this->midterm + $this->final)/2);}
}
?>
