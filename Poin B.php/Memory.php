<?php

//Include file Parent
include "Hardware.php";

class Memory extends Hardware{
    //Deklarasi Atribut
    private $frequency;
    private $memorySize;
    private $supportCuda;



    //Constructor
	function __construct() {
	}
	
    //Get Set Methods
	function getFrequency() {
		return $this->frequency;
	}

	function setFrequency($frequency){
		$this->frequency = $frequency;	
	}

	function getMemorySize() {
		return $this->memorySize;
	}
	
	function setMemorySize($memorySize){
		$this->memorySize = $memorySize;
	}

	function getSupportCuda() {
		return $this->supportCuda;
	}

	function setSupportCuda($supportCuda){
		$this->supportCuda = $supportCuda;
	}

    //Output Methods
    function output_memory(){
        $this->output_product();
        $this->output_hardware();
        echo "Frequency				: ". $this->getFrequency()."<br/>";
		echo "Memory Size			: ". $this->getMemorySize()."<br/>";
		echo "Support Cuda			: ". $this->getSupportCuda()."<br/>";

    }


    //Destructor
    function __destruct()
    {
        
    }
}
?>