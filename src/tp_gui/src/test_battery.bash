#!/bin/bash

rostopic pub /battery_state sensor_msgs/BatteryState -f test_battery.yaml
