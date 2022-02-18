<?php

class Product{
	//Deklarasi Atribut
    private $price;
    private $id_product;


	//Constructor
    function __construct(){}

	//Get Set Methods
    function getPrice() {
		return $this->price;
	}

	function setPrice($price){
		$this->price = $price;
	}

    
    function getId_product() {
		return $this->id_product;
	}
	
	function setId_product($id_product){
		$this->id_product = $id_product;
	}


	//Output Method
	function output_product(){
		echo "Id Product			: ". $this->getId_product()."<br/>";
		echo "Price					: ". $this->getPrice()."<br/>";

	}

	//Destructor
    function __destruct()
    {
    }
	

	
}

?>