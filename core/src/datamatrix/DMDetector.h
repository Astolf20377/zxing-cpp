#pragma once
/*
* Copyright 2016 Nu-book Inc.
* Copyright 2016 ZXing authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

namespace ZXing {

class BitMatrix;
class DetectorResult;

namespace DataMatrix {

/**
 * @brief Detects a Data Matrix symbol in an image.
 */
//DetectorResult Detect(const BitMatrix& image, bool tryHarder, bool tryRotate, bool isPure);
DetectorResult Detect(const BitMatrix& image, bool tryHarder, bool tryRotate, bool isPure, DetectorResult &backup);

} // DataMatrix
} // ZXing
