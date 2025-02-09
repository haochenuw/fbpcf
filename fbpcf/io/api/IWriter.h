/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <cstddef>
#include <vector>

namespace fbpcf::io {

/*
 * Defines a class that writes data to
 * an underlying medium.
 */
class IWriter {
 public:
  /*
   * write() returns the number of bytes it
   * was able to write, or -1 if there was
   * an error. It attempts to write the first
   * n bytes of the entire provided buffer.
   */
  virtual size_t write(std::vector<char>& buf) = 0;
  virtual ~IWriter() = default;
};

} // namespace fbpcf::io
