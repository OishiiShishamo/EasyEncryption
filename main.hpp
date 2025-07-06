#pragma once
#ifndef SHISHAMO_EASYENCRYPTION_MAIN_HPP_
#define SHISHAMO_EASYENCRYPTION_MAIN_HPP_

#include <fstream>
#include <iostream>
#include <random>
#include <string>

namespace easy_encryption
{
    std::string XorEncryption(std::string& input, std::string& key);
}

#endif