<?php
class Rectangle
{
	private $len,$wid;
	
	public function __construct($len=0,$wid=0)
	{
		$this->len=$len;
		$this->wid=$wid;
	}
	public function setLength($v){$this->len=(int)$v;}
	public function setWidth($v){$this->wid=(int)$v;}
	public function getLength(){return $this->len;}
	public function getWidth(){return $this->wid;}
	public function getArea(){return $this->len * $this->wid;}
	public function getPerimeter(){return 2*$this->len + 2*$this->wid;}
}
?>
