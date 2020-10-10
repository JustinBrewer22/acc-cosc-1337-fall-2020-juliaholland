#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get GC content"){
	std::string dna = "AGCTATAG";
	double result = get_gc_content(dna);
	REQUIRE(result == .375);
}

TEST_CASE("Test function get GC content 2"){
	std::string dna = "CGCTATAG";
	double result = get_gc_content(dna);
	REQUIRE(result == .5);
}

TEST_CASE("Test function get reverse DNA"){
	std::string dna = "AGCTATAG";
	std::string result = get_reverse_string(dna);
	REQUIRE(result == "GATATCGA");
}

TEST_CASE("Test function get reverse DNA 2"){
	std::string dna = "CGCTATAG";
	std::string result = get_reverse_string(dna);
	REQUIRE(result == "GATATCGC");
}


TEST_CASE("Test function get complement DNA"){
	std::string dna = "AAAACCCGGT";
	std::string result = get_dna_complement(dna);
	REQUIRE(result == "ACCGGGTTTT");
}

TEST_CASE("Test function get complement DNA 2"){
	std::string dna = "CCCGGAAAAT";
	std::string result = get_dna_complement(dna);
	REQUIRE(result == "ATTTTCCGGG");
}