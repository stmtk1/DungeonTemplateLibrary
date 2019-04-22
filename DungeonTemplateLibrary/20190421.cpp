﻿#include <DTL.hpp>
#include <cstdint>
#include <array>

int main() {

	using shape_t = std::uint_fast8_t;
	constexpr std::size_t width{ 256 };
	constexpr std::size_t height{ 256 };
	std::array<std::array<shape_t, width>, height> matrix{ {} };
	//std::array<shape_t, width * height> matrix_array{ {} };
	//std::array<std::array<std::array<shape_t, 2>, width>, height> matrix_layer{ {} };

	//dtl::FractalLoopIsland<shape_t>(dtl::MatrixRange(0,0, 0, 0), 0, 200, 50).draw(matrix);
	//dtl::thirdParty::stb::FileSTB<shape_t, width, height, 3>().writePNG("fi.png", [](unsigned char* a) {});
	//dtl::console::OutputStringBool<shape_t>("■", "・").drawOperator(matrix, [](const shape_t value_) {return value_ > 120; });

	dtl::generator::terrain::stl::SVI<shape_t>().create(matrix, 1500);
	dtl::console::OutputStringBool<shape_t>("■", "・").draw(matrix);

	//dtl::FractalIsland<shape_t>(dtl::MatrixRange(32, 16, 0, 0), 0, 170, 80).draw(matrix_layer, 0, width, height);
	//dtl::console::OutputStringBool<shape_t>("■", "・").drawOperator(matrix_layer, 0, width, height, [](const shape_t value_) {return value_ > 50; });

	//dtl::FractalIsland<shape_t>(dtl::MatrixRange(32, 16, 0, 0), 0, 170, 80).draw(matrix, width, height);
	//dtl::console::OutputStringBool<shape_t>("■", "・").drawOperator(matrix, width, height, [](const shape_t value_) {return value_ > 50; });

	//dtl::FractalIsland<shape_t>(dtl::MatrixRange(32, 16, 0, 0), 0, 170, 80).draw(matrix_layer, 0);
	//dtl::console::OutputStringBool<shape_t>("■", "・").drawOperator(matrix_layer, 0, [](const shape_t value_) {return value_ > 50; });

	//dtl::FractalIsland<shape_t>(dtl::MatrixRange(32, 16, 0, 0), 0, 170, 80).drawArray(matrix_array, width, height);
	//dtl::console::OutputStringBool<shape_t>("■", "・").drawOperatorArray(matrix_array, width, height, [](const shape_t value_) {return value_ > 50; });

	return 0;
}