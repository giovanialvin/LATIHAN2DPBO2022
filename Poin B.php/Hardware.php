<?php

//Include File Parent
include "Product.php";


class Hardware extends Product{
	//Deklarasi Atribut
    private $brand;
    private $model;


	//Constructor
	function __construct() {
	}

	//Get Set Methods
	function getBrand() {
		return $this->brand;
	}
	
	function setBrand($brand){
		$this->brand = $brand;
	}

	function getModel() {
		return $this->model;
	}

	function setModel($model){
		$this->model = $model;
	}

	//Output Methods
	function output_hardware(){
		$this->output_product();
		echo "Brand					: ". $this->getBrand()."<br/>";
		echo "Model					: ". $this->getModel()."<br/>";


	}


	//Destructor
	function __destruct()
    {
        
    }
}
?>