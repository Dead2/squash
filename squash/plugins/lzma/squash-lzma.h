/* Copyright (c) 2013 The Squash Authors
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Authors:
 *   Evan Nemerson <evan@coeus-group.com>
 */

#ifndef __SQUASH_PLUGIN_LZMA_H__
#define __SQUASH_PLUGIN_LZMA_H__

#include <lzma.h>

typedef enum SquashLZMAType_e {
  SQUASH_LZMA_TYPE_LZMA,
  SQUASH_LZMA_TYPE_XZ,
  SQUASH_LZMA_TYPE_LZMA1,
  SQUASH_LZMA_TYPE_LZMA2
} SquashLZMAType;

typedef struct SquashLZMAOptions_s {
  SquashOptions base_object;

  SquashLZMAType type;
  lzma_options_lzma options;
  uint64_t memlimit;
  lzma_check check;
} SquashLZMAOptions;

typedef struct SquashLZMAStream_s {
  SquashStream base_object;

  SquashLZMAType type;
  lzma_stream stream;
} SquashLZMAStream;

#endif /* __SQUASH_PLUGIN_LZMA_H__ */