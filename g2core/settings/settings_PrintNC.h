/*
 * settings_PrintNC.h - PrintNC machine profile
 * This file is part of the g2core project
 *
 * Copyright (c) 2021 Anthony Myatt
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

// ***> NOTE: The init message must be a single line with no CRs or LFs
#ifndef INIT_MESSAGE
#define INIT_MESSAGE "Initializing configs to PrintNC settings"
#endif

// Machine Settings
#define SPINDLE_ENABLE_POLARITY     1                       // 0=active low, 1=active high
#define SPINDLE_DIR_POLARITY        0                       // 0=clockwise is low, 1=clockwise is high
#define SPINDLE_PAUSE_ON_HOLD      true
#define SPINDLE_DWELL_TIME         6.0
#define SPINDLE_SPINUP_DELAY       6.0


// X Motor
#define M1_STEP_ANGLE               1.8                      // {1sa: degrees per step
#define M1_TRAVEL_PER_REV           10                       // {1tr:  1.25 is a typical value for a screw axis
#define M1_MOTOR_MAP                AXIS_X_EXTERNAL          // {1ma: AXIS_X, AXIS_Y...
#define M1_POWER_MODE               MOTOR_ALWAYS_POWERED     // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M1_POWER_LEVEL              1.0                      // {1pl:   0.0=no power, 1.0=max power
#define M1_MICROSTEPS               8                        // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_POLARITY                 1                        // {1po:  0=normal direction, 1=inverted direction

// Y1 Motor
#define M2_STEP_ANGLE               1.8                      // {2sa: degrees per step
#define M2_TRAVEL_PER_REV           10                       // {2tr:  1.25 is a typical value for a screw axis
#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL          // {2ma: AXIS_X, AXIS_Y...
#define M2_POWER_MODE               MOTOR_ALWAYS_POWERED     // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M2_POWER_LEVEL              1.0                      // {2pl:   0.0=no power, 1.0=max power
#define M2_MICROSTEPS               8                        // {2mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M2_POLARITY                 0                        // {2po:  0=normal direction, 1=inverted direction

// Y2 Motor
#define M3_STEP_ANGLE               1.8                      // {3sa: degrees per step
#define M3_TRAVEL_PER_REV           10                       // {3tr:  1.25 is a typical value for a screw axis
#define M3_MOTOR_MAP                AXIS_Y_EXTERNAL          // {3ma: AXIS_X, AXIS_Y...
#define M3_POWER_MODE               MOTOR_ALWAYS_POWERED     // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M3_POWER_LEVEL              1.0                      // {3pl:   0.0=no power, 1.0=max power
#define M3_MICROSTEPS               8                        // {3mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M3_POLARITY                 0                        // {3po:  0=normal direction, 1=inverted direction

// Z Motor
#define M4_STEP_ANGLE               1.8                      // {4sa: degrees per step
#define M4_TRAVEL_PER_REV           1                        // {4tr:  1.25 is a typical value for a screw axis
#define M4_MOTOR_MAP                AXIS_Z_EXTERNAL          // {4ma: AXIS_X, AXIS_Y...
#define M4_POWER_MODE               MOTOR_ALWAYS_POWERED     // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M4_POWER_LEVEL              1.0                      // {4pl:   0.0=no power, 1.0=max power
#define M4_MICROSTEPS               8                        // {4mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M4_POLARITY                 1                        // {4po:  0=normal direction, 1=inverted direction

// Axis Mode
#define X_AXIS_MODE                 AXIS_STANDARD            // {xam:
#define Y_AXIS_MODE                 AXIS_STANDARD            // {yam:
#define Z_AXIS_MODE                 AXIS_STANDARD            // {zam:

// Velocity Max
#define X_VELOCITY_MAX              8500.0                   // {xvm:  G0 max velocity in mm/min
#define Y_VELOCITY_MAX              7000.0                   // {yvm:  G0 max velocity in mm/min
#define Z_VELOCITY_MAX              180.0                    // {zvm:  G0 max velocity in mm/min

// Feedrate Max
#define X_FEEDRATE_MAX              X_VELOCITY_MAX           // {xfr:  G1 max feed rate in mm/min
#define Y_FEEDRATE_MAX              Y_VELOCITY_MAX           // {yfr:  G1 max feed rate in mm/min
#define Z_FEEDRATE_MAX              Z_VELOCITY_MAX           // {zfr:  G1 max feed rate in mm/min

// Spindle 1
#define P1_PWM_FREQUENCY            100                      // in Hz
#define P1_CW_SPEED_LO              6000                     // in RPM (arbitrary units)
#define P1_CW_SPEED_HI              24000
#define P1_CW_PHASE_LO              0.01                     // phase [0..1]
#define P1_CW_PHASE_HI              1.0
#define P1_CCW_SPEED_LO             6000                     // in RPM (arbitrary units)
#define P1_CCW_SPEED_HI             24000
#define P1_CCW_PHASE_LO             0.01                     // phase [0..1]
#define P1_CCW_PHASE_HI             1.0
#define P1_PWM_PHASE_OFF            0.0

// Digital Inputs
#define DI1_MODE                    IO_ACTIVE_LOW            // Normally open
#define DI1_ACTION                  INPUT_ACTION_NONE
#define DI1_FUNCTION                INPUT_FUNCTION_LIMIT

#define DI2_MODE                    IO_ACTIVE_LOW            // Normally open
#define DI2_ACTION                  INPUT_ACTION_NONE
#define DI2_FUNCTION                INPUT_FUNCTION_LIMIT

#define DI3_MODE                    IO_ACTIVE_LOW            // Normally open
#define DI3_ACTION                  INPUT_ACTION_NONE
#define DI3_FUNCTION                INPUT_FUNCTION_LIMIT

#define DI4_MODE                    IO_ACTIVE_LOW            // Normally open
#define DI4_ACTION                  INPUT_ACTION_NONE
#define DI4_FUNCTION                INPUT_FUNCTION_LIMIT

#define DI5_MODE                    IO_ACTIVE_LOW            // Normally open
#define DI5_ACTION                  INPUT_ACTION_NONE
#define DI5_FUNCTION                INPUT_FUNCTION_PROBE

// X Axis Homing
#define X_TRAVEL_MIN                0.0                      // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                420.0                    // {xtm:  travel between switches or crashes
#define X_JERK_HIGH_SPEED           20000.0                  // {xjh:
#define X_HOMING_INPUT              1                        // {xhi:  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                        // {xhd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           3000.0                   // {xsv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            100.0                    // {xlv:  mm/min
#define X_LATCH_BACKOFF             4.0                      // {xlb:  mm
#define X_ZERO_BACKOFF              2.0                      // {xzb:  mm

// Y Axis Homing
#define Y_TRAVEL_MIN                0.0                      // {ytn:  minimum travel for soft limits
#define Y_TRAVEL_MAX                420.0                    // {ytm:  travel between switches or crashes
#define Y_JERK_HIGH_SPEED           20000.0                  // {yjh:
#define Y_HOMING_INPUT              2                        // {yhi:  input used for homing or 0 to disable
#define Y_HOMING_DIRECTION          0                        // {yhd:  0=search moves negative, 1= search moves positive
#define Y_SEARCH_VELOCITY           3000.0                   // {ysv:  minus means move to minimum switch
#define Y_LATCH_VELOCITY            100.0                    // {ylv:  mm/min
#define Y_LATCH_BACKOFF             4.0                      // {ylb:  mm
#define Y_ZERO_BACKOFF              2.0                      // {yzb:  mm

// Z Axis Homing
#define Z_TRAVEL_MIN                0.0                      // {ztn:  minimum travel for soft limits
#define Z_TRAVEL_MAX                20.0                    // {ztm:  travel between switches or crashes
#define Z_JERK_HIGH_SPEED           20000.0                  // {zjh:
#define Z_HOMING_INPUT              1                        // {zhi:  input used for homing or 0 to disable
#define Z_HOMING_DIRECTION          1                        // {zhd:  0=search moves negative, 1= search moves positive
#define Z_SEARCH_VELOCITY           180.0                   // {zsv:  minus means move to minimum switch
#define Z_LATCH_VELOCITY            30.0                    // {zlv:  mm/min
#define Z_LATCH_BACKOFF             4.0                      // {zlb:  mm
#define Z_ZERO_BACKOFF              2.0                      // {zzb:  mm

