;; Auto-generated. Do not edit!


(when (boundp 'carla_ros_scenario_runner_types::CarlaScenario)
  (if (not (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES"))
    (make-package "CARLA_ROS_SCENARIO_RUNNER_TYPES"))
  (shadow 'CarlaScenario (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES")))
(unless (find-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::CARLASCENARIO")
  (make-package "CARLA_ROS_SCENARIO_RUNNER_TYPES::CARLASCENARIO"))

(in-package "ROS")
;;//! \htmlinclude CarlaScenario.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass carla_ros_scenario_runner_types::CarlaScenario
  :super ros::object
  :slots (_name _scenario_file _waypoints _target_speed ))

(defmethod carla_ros_scenario_runner_types::CarlaScenario
  (:init
   (&key
    ((:name __name) "")
    ((:scenario_file __scenario_file) "")
    ((:waypoints __waypoints) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Pose :init) r)) r))
    ((:target_speed __target_speed) 0.0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _scenario_file (string __scenario_file))
   (setq _waypoints __waypoints)
   (setq _target_speed (float __target_speed))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:scenario_file
   (&optional __scenario_file)
   (if __scenario_file (setq _scenario_file __scenario_file)) _scenario_file)
  (:waypoints
   (&rest __waypoints)
   (if (keywordp (car __waypoints))
       (send* _waypoints __waypoints)
     (progn
       (if __waypoints (setq _waypoints (car __waypoints)))
       _waypoints)))
  (:target_speed
   (&optional __target_speed)
   (if __target_speed (setq _target_speed __target_speed)) _target_speed)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; string _scenario_file
    4 (length _scenario_file)
    ;; geometry_msgs/Pose[] _waypoints
    (apply #'+ (send-all _waypoints :serialization-length)) 4
    ;; float64 _target_speed
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; string _scenario_file
       (write-long (length _scenario_file) s) (princ _scenario_file s)
     ;; geometry_msgs/Pose[] _waypoints
     (write-long (length _waypoints) s)
     (dolist (elem _waypoints)
       (send elem :serialize s)
       )
     ;; float64 _target_speed
       (sys::poke _target_speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _scenario_file
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _scenario_file (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; geometry_msgs/Pose[] _waypoints
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _waypoints (let (r) (dotimes (i n) (push (instance geometry_msgs::Pose :init) r)) r))
     (dolist (elem- _waypoints)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; float64 _target_speed
     (setq _target_speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get carla_ros_scenario_runner_types::CarlaScenario :md5sum-) "f5f6ec6445da857a4104dc166cc6cc20")
(setf (get carla_ros_scenario_runner_types::CarlaScenario :datatype-) "carla_ros_scenario_runner_types/CarlaScenario")
(setf (get carla_ros_scenario_runner_types::CarlaScenario :definition-)
      "#
# Copyright (c) 2020 Intel Corporation.
#
# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.
#
string name
string scenario_file
geometry_msgs/Pose[] waypoints
float64 target_speed


================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :carla_ros_scenario_runner_types/CarlaScenario "f5f6ec6445da857a4104dc166cc6cc20")


