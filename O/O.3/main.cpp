#include <iostream>
#include <cstdint>
#include <bitset>

int main()
{
    
    constexpr std::uint_fast8_t mask0{ 0b0000'0001 }; // represents bit 0
    constexpr std::uint_fast8_t mask1{ 0b0000'0010 }; // represents bit 1
    constexpr std::uint_fast8_t mask2{ 0b0000'0100 }; // represents bit 2 
    constexpr std::uint_fast8_t mask3{ 0b0000'1000 }; // represents bit 3
    constexpr std::uint_fast8_t mask4{ 0b0001'0000 }; // represents bit 4
    constexpr std::uint_fast8_t mask5{ 0b0010'0000 }; // represents bit 5
    constexpr std::uint_fast8_t mask6{ 0b0100'0000 }; // represents bit 6
    constexpr std::uint_fast8_t mask7{ 0b1000'0000 }; // represents bit 7


    /**
    std::uint_fast8_t flags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags
    
	std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");
	std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
 
    flags |= mask1; // turn on bit 1
    // flags |= (mask4 | mask5); // turn bits 4 and 5 on at the same time

    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");

    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");
 
    flags &= ~mask2; // turn off bit 2
 
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n"); **/

    std::bitset<8> flags{ 0b0000'0101 };
	std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");
	flags ^= (mask1 | mask2); // flip bits 1 and 2
 
	std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");
	flags |= (mask1 | mask2); // turn bits 1 and 2 on
 
	std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");
	flags &= ~(mask1 | mask2); // turn bits 1 and 2 off
 
	std::cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");

    // Define a bunch of physical/emotional states
	std::bitset<8> isHungry{	0b0000'0001 };
	std::bitset<8> isSad{		0b0000'0010 };
	std::bitset<8> isMad{		0b0000'0100 };
	std::bitset<8> isHappy{		0b0000'1000 };
	std::bitset<8> isLaughing{	0b0001'0000 };
	std::bitset<8> isAsleep{	0b0010'0000 };
	std::bitset<8> isDead{		0b0100'0000 };
	std::bitset<8> isCrying{	0b1000'0000 };
 
 
	std::bitset<8> me{}; // all flags/options turned off to start
	me |= isHappy | isLaughing; // I am happy and laughing
	me &= ~isLaughing; // I am no longer laughing
 
	// Query a few states (we use the any() function to see if any bits remain set)
	std::cout << "I am happy? " << (me & isHappy).any() << '\n';
	std::cout << "I am laughing? " << (me & isLaughing).any() << '\n';

		constexpr std::uint_fast32_t redBits{ 0xFF000000 };
	constexpr std::uint_fast32_t greenBits{ 0x00FF0000 };
	constexpr std::uint_fast32_t blueBits{ 0x0000FF00 };
	constexpr std::uint_fast32_t alphaBits{ 0x000000FF };
 
	std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	std::uint_fast32_t pixel{};
	std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value
 
	// use Bitwise AND to isolate red pixels,
	// then right shift the value into the lower 8 bits
	// (we're not using brace initialization to avoid a static_cast)
	std::uint_fast8_t red = (pixel & redBits) >> 24;
	std::uint_fast8_t green = (pixel & greenBits) >> 16;
	std::uint_fast8_t blue = (pixel & blueBits) >> 8;
	std::uint_fast8_t alpha = pixel & alphaBits;
 
	std::cout << "Your color contains:\n";
	std::cout << std::hex; // print the following values in hex
	std::cout << static_cast<int>(red) << " red\n";
	std::cout << static_cast<int>(green) << " green\n";
	std::cout << static_cast<int>(blue) << " blue\n";
	std::cout << static_cast<int>(alpha) << " alpha\n";
	
    return 0;
}
