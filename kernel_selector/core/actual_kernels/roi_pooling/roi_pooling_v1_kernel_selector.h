﻿/*
// Copyright (c) 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#pragma once

#include "kernel_selector.h"
 
namespace KernelSelector 
{
    class ROIPoolingV1KernelSelctor : public KernelSelctorBase
    {
    public:
        static ROIPoolingV1KernelSelctor &Instance() {
            static ROIPoolingV1KernelSelctor instance_;
            return instance_;
        }

        ROIPoolingV1KernelSelctor();

        virtual ~ROIPoolingV1KernelSelctor() {}

        virtual KernelsData GetBestKernels(const Params& params, const OptionalParams& options) const override;
    };
}