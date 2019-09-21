#ifndef GS_HPP
#define GS_HPP

#include <filesystem>
#include <gs++/bhash.hpp>

std::filesystem::path get_tokendir(const bhash<btokenid> tokenid);
void signal_handler(int signal);

#endif
