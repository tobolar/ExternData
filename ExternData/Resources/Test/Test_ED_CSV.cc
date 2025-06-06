/* Test_ED_CSV.cc - CSV functions tester
 *
 * Copyright (C) 2015-2025, Thomas Beutlich
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "../Include/ED_CSVFile.h"
#include "Constants.h"
#include <gtest/gtest.h>

namespace
{

TEST(ED_CSV, Create) {
    auto handle = ED_createCSV("../Examples/test.csv", delimiter_comma, double_quote, 0, verbose_on);
    ASSERT_NE(nullptr, handle);
    ED_destroyCSV(handle);
}

}  // namespace

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
