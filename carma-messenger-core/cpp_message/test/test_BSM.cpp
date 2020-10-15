/*
 * Copyright (C) 2019-2020 LEIDOS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */

#include "BSM_Message.h"
#include <gtest/gtest.h>
#include <ros/ros.h>
#include <boost/optional/optional_io.hpp>   //to print boost::optional

TEST(BSMTest, DISABLED_testDecodeBSM)
{
    std::vector<uint8_t> binary_input = {0, 243, 129, 141, 77, 90, 113, 39, 212, 90, 209, 171, 22, 12, 38, 173, 56, 147, 234, 45, 104, 213, 131, 150, 172, 88, 65, 133, 14, 36, 88, 204, 88, 177, 98, 197, 139, 22, 43, 89, 50, 100, 201, 107, 54, 108, 217, 173, 131, 6, 12, 21, 172, 88, 177, 98, 197, 139, 22, 44, 88, 177, 98, 229, 147, 38, 108, 219, 178, 96, 205, 179, 134, 173, 27, 183, 106, 225, 131, 115, 161, 225, 229, 183, 10, 250, 27, 48, 244, 223, 191, 118, 157, 217, 213, 190, 218, 119, 95, 221, 215, 110, 44, 188, 157, 49, 141, 86, 84, 121, 17, 43, 48, 135, 50, 21, 7, 14, 25, 180, 89, 179, 78, 60, 187, 185, 229, 191, 195, 102, 30, 153, 93, 68, 159, 81, 107, 22, 12, 24, 51, 89, 143, 15, 46, 90, 114, 242, 191, 187, 14, 220, 174, 169, 233, 217, 219, 47, 36, 21, 57, 117, 199, 173, 4, 105, 21, 224, 160, 169, 26, 69, 40, 107, 49, 225, 229, 203, 78, 94, 87, 244, 228, 117, 86, 156, 73, 245, 16, 48, 96, 193, 131, 6, 12, 86, 119, 203, 167, 62, 142, 142, 150, 97, 201, 206, 255, 61, 249, 186, 119, 195, 203, 45, 254, 217, 121, 115, 211, 191, 115, 170, 126, 121, 244, 203, 181, 5, 108, 188, 185, 233, 223, 185, 5, 93, 218, 247, 111, 239, 185, 102, 76, 61, 50, 223, 223, 154, 254, 204, 60, 250, 95, 231, 211, 15, 76, 183, 244, 238, 231, 195, 46, 62, 154, 119, 238, 117, 102, 205, 155, 43, 102, 205, 91, 18, 34, 204, 152, 122, 101, 191, 191, 53, 253, 152, 121, 244, 191, 135, 39, 59, 248, 240, 236, 211, 139, 150, 30, 154, 119, 238, 117, 102, 205, 155, 43, 102, 205, 91, 18, 34, 206, 28, 178, 223, 233, 203, 79, 11, 248, 114, 115, 191, 163, 46, 29, 157, 52, 95, 199, 163, 46, 61, 110, 163, 242, 203, 151, 114, 204, 57, 57, 223, 231, 211, 15, 78, 188, 221, 82, 203, 145, 102, 158, 124, 239, 243, 199, 191, 150, 87, 77, 28, 172, 225, 151, 150, 221, 61, 47, 242, 203, 199, 174, 158, 89, 114, 58, 96, 179, 166, 157, 185, 121, 244, 195, 183, 131, 166, 45, 92, 53, 112, 205, 179, 118, 108, 92, 49, 104,0};
    cpp_message::BSM_Message worker;
    auto res = worker.decode_bsm_message(binary_input);
    j2735_msgs::BSM to_read;
    if(res)
    {
        to_read=res.get();
        EXPECT_EQ(to_read.core_data.sec_mark, 60999);
    }
    else EXPECT_TRUE(false);
}

TEST(BSMTest, testEncodeBSM)
{
    //Mobility_Operation::bsm_message worker;
    cpp_message::BSM_Message worker;
    j2735_msgs::BSM message;
    ROS_WARN_STREAM("Mid1");
    message.core_data.msg_count = 1;
    message.core_data.id.push_back(1);
    message.core_data.id.push_back(1);
    message.core_data.id.push_back(1);
    message.core_data.id.push_back(1);
    ROS_WARN_STREAM("Mid");
    message.core_data.sec_mark = 1;
    message.core_data.longitude = 1;
    message.core_data.accuracy.orientation = 1;
    message.core_data.brakes.wheelBrakes.brake_applied_status = j2735_msgs::BrakeAppliedStatus::RIGHT_FRONT;
    message.core_data.brakes.traction.traction_control_status = 1;
    message.core_data.brakes.abs.anti_lock_brake_status = 1;
    message.core_data.brakes.scs.stability_control_status = 1;
    message.core_data.brakes.brakeBoost.brake_boost_applied = 1;
    message.core_data.brakes.auxBrakes.auxiliary_brake_status = 1;
    message.core_data.accelSet.yaw_rate = 1;
    message.core_data.size.vehicle_width = 1;
    message.core_data.size.vehicle_length = 1;
    ROS_WARN_STREAM("Mid2");
    auto res = worker.encode_bsm_message(message);

    if(res) {
        // std::vector<uint8_t> to_read=res.get();
        // size_t len=to_read.size();
        // for(size_t i=0;i<len;i++)std::cout<<int(to_read[i])<<",";
        // std::cout<<"\n";
        EXPECT_TRUE(true);
    }
    else
    {
        std::cout << "Encoding failed while unit testing BSM encoder!\n";
        EXPECT_TRUE(false);
    }
}

// TEST(BSMTest, testEncodeBSM_base_case)
// {
//     //Mobility_Operation::bsm_message worker;
//     cpp_message::BSM_Message worker;
    
//     j2735_msgs::BSM message;     
//     message.strategy="";
//     message.strategy_params="";
//     auto res = worker.encode_bsm_message(message);

//     if(res) {
//         // std::vector<uint8_t> to_read=res.get();
//         // size_t len=to_read.size();
//         // for(size_t i=0;i<len;i++)std::cout<<int(to_read[i])<<",";
//         // std::cout<<"\n";
//         EXPECT_TRUE(true);
//     }
//     else
//     {
//         std::cout << "encoding failed!\n";
//         EXPECT_TRUE(false);
//     }
// }
