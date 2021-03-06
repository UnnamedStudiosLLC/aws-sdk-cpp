﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/AllocationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace AllocationStrategyMapper
      {

        static const int lowestPrice_HASH = HashingUtils::HashString("lowestPrice");
        static const int diversified_HASH = HashingUtils::HashString("diversified");


        AllocationStrategy GetAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lowestPrice_HASH)
          {
            return AllocationStrategy::lowestPrice;
          }
          else if (hashCode == diversified_HASH)
          {
            return AllocationStrategy::diversified;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllocationStrategy>(hashCode);
          }

          return AllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForAllocationStrategy(AllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case AllocationStrategy::lowestPrice:
            return "lowestPrice";
          case AllocationStrategy::diversified:
            return "diversified";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllocationStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
