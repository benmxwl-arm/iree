// Copyright 2021 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include "iree/compiler/Codegen/Passes.h"
#include "mlir/Pass/PassManager.h"
//===---------------------------------------------------------------------===//
// Include pass headers per target device
//===---------------------------------------------------------------------===//
#include "iree/compiler/Codegen/Common/GPU/Passes.h"
#include "iree/compiler/Codegen/Common/Passes.h"
#include "iree/compiler/Codegen/LLVMCPU/Passes.h"
#include "iree/compiler/Codegen/LLVMGPU/Passes.h"
#include "iree/compiler/Codegen/SPIRV/Passes.h"
#include "iree/compiler/Codegen/VMVX/Passes.h"
#include "iree/compiler/Codegen/WGSL/Passes.h"

namespace mlir {
namespace iree_compiler {

void registerCodegenPasses() {
  // Generated.
  registerCodegenCommonPasses();
  registerCodegenCommonGPUPasses();
  registerCodegenLLVMCPUPasses();
  registerCodegenLLVMGPUPasses();
  registerCodegenSPIRVPasses();
  registerCodegenVMVXPasses();
  registerCodegenWGSLPasses();
}

} // namespace iree_compiler
} // namespace mlir
