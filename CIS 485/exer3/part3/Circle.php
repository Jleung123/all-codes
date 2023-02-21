<?php
class Circle{
   private $radius;
   public function __construct($radius = 0){$this->radius = (float)$radius;}  
   public function setRadius($radius){$this->radius = (float)$radius;}
   public function getRadius(){return $this->radius;}
   public function calcArea(){return (($this->radius * $this->radius) * 3.14);}
   public function calcCircumference(){return (2 * (3.14 * $this->radius));}
}
?>
