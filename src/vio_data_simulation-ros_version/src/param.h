//
// Created by hyj on 17-6-22.
//

#ifndef IMUSIM_PARAM_H
#define IMUSIM_PARAM_H

#include <eigen3/Eigen/Core>

class Param{

public:

    Param();

    // time
    int imu_frequency = 200;
    int cam_frequency = 30;
    double imu_timestep = 1./imu_frequency;
    double cam_timestep = 1./cam_frequency;
    double t_start = 0;
    double t_end = 3600 * 4;  //  

    // TODO: set different noise variace
    // Test 1. original parameters
    // noise
    double gyro_bias_sigma = 0.00005;
    double acc_bias_sigma = 0.0005;

    //double gyro_bias_sigma = 1.0e-5;
    //double acc_bias_sigma = 0.0001;

    double gyro_noise_sigma = 0.015;    // rad/s
    double acc_noise_sigma = 0.019;      //　m/(s^2)

    /*// Test 2. customized parameters
    // noise
    double gyro_bias_sigma = 0.0002;
    double acc_bias_sigma = 0.002;

    //double gyro_bias_sigma = 1.0e-5;
    //double acc_bias_sigma = 0.0001;

    double gyro_noise_sigma = 0.08;    // rad/s
    double acc_noise_sigma = 0.09;      //　m/(s^2)*/

    double pixel_noise = 1;              // 1 pixel noise

    // cam f
    double fx = 460;
    double fy = 460;
    double cx = 255;
    double cy = 255;
    double image_w = 640;
    double image_h = 640;


    // 外参数
    Eigen::Matrix3d R_bc;   // cam to body
    Eigen::Vector3d t_bc;     // cam to body

};


#endif //IMUSIM_PARAM_H
