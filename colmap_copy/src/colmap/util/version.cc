// Copyright (c) 2023, ETH Zurich and UNC Chapel Hill.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the name of ETH Zurich and UNC Chapel Hill nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.


#include "colmap/util/version.h"

#include "colmap/util/misc.h"

namespace colmap {
namespace {

const std::string COLMAP_VERSION = "3.9-dev";
const std::string COLMAP_COMMIT_ID = "8e7093d2";
const std::string COLMAP_COMMIT_DATE = "2023-12-08";

}  // namespace

std::string GetVersionInfo() {
  return StringPrintf("COLMAP %s", COLMAP_VERSION.c_str());
}

std::string GetBuildInfo() {
#if defined(COLMAP_CUDA_ENABLED)
  const std::string cuda_info = "with CUDA";
#else
  const std::string cuda_info = "without CUDA";
#endif
  return StringPrintf("Commit %s on %s %s",
                      COLMAP_COMMIT_ID.c_str(),
                      COLMAP_COMMIT_DATE.c_str(),
                      cuda_info.c_str());
}

}  // namespace colmap
