#pragma once

#include <stream.hpp>

#include "format.hpp"

out_strm_ptr get_encoder(format_t type, out_strm_ptr &&base);
out_strm_ptr get_decoder(format_t type, out_strm_ptr &&base);
void compress(const char *method, const char *infile, const char *outfile);
void decompress(char *infile, const char *outfile);
bool decompress(const unsigned char *in, uint64_t in_size, int fd);
