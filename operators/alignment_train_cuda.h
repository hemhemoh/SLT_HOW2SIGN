/**
 * Copyright 2017-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <torch/extension.h> // @manual=//caffe2:torch_extension

void alignmentTrainCUDAWrapper(
    const torch::Tensor& p_choose,
    torch::Tensor& alpha,
    float eps);