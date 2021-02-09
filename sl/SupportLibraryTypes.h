/*
 * Copyright (C) 2020 The Android Open Source Project
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

#ifndef ANDROID_PACKAGES_MODULES_NEURALNETWORKS_SL_SUPPORT_LIBRARY_TYPES_H
#define ANDROID_PACKAGES_MODULES_NEURALNETWORKS_SL_SUPPORT_LIBRARY_TYPES_H

#include <stdint.h>
#include <stdio.h>

typedef struct AHardwareBuffer AHardwareBuffer;

// NN api types based on NNAPI header file
// https://developer.android.com/ndk/reference/group/neural-networks

/**
 * Operand types.
 *
 * The type of operands that can be added to a model.
 *
 * Although we define many types, most operators accept just a few
 * types.  Most used are ANEURALNETWORKS_TENSOR_FLOAT32,
 * ANEURALNETWORKS_TENSOR_QUANT8_ASYMM, and ANEURALNETWORKS_INT32.
 */
enum {
    ANEURALNETWORKS_FLOAT32 = 0,
    ANEURALNETWORKS_INT32 = 1,
    ANEURALNETWORKS_UINT32 = 2,
    ANEURALNETWORKS_TENSOR_FLOAT32 = 3,
    ANEURALNETWORKS_TENSOR_INT32 = 4,
    ANEURALNETWORKS_TENSOR_QUANT8_ASYMM = 5,
    ANEURALNETWORKS_BOOL = 6,
    ANEURALNETWORKS_TENSOR_FLOAT16 = 8,
    ANEURALNETWORKS_TENSOR_BOOL8 = 9,
    ANEURALNETWORKS_FLOAT16 = 10,
    ANEURALNETWORKS_TENSOR_QUANT16_SYMM = 7,
    ANEURALNETWORKS_TENSOR_QUANT8_SYMM_PER_CHANNEL = 11,
    ANEURALNETWORKS_TENSOR_QUANT16_ASYMM = 12,
    ANEURALNETWORKS_TENSOR_QUANT8_SYMM = 13,
    ANEURALNETWORKS_TENSOR_QUANT8_ASYMM_SIGNED = 14,
    ANEURALNETWORKS_MODEL = 15,
};

/**
 * Operation types.
 *
 * The type of operations that can be added to a model.
 */
enum {
    ANEURALNETWORKS_ADD = 0,
    ANEURALNETWORKS_AVERAGE_POOL_2D = 1,
    ANEURALNETWORKS_CONCATENATION = 2,
    ANEURALNETWORKS_CONV_2D = 3,
    ANEURALNETWORKS_DEPTHWISE_CONV_2D = 4,
    ANEURALNETWORKS_DEPTH_TO_SPACE = 5,
    ANEURALNETWORKS_DEQUANTIZE = 6,
    ANEURALNETWORKS_EMBEDDING_LOOKUP = 7,
    ANEURALNETWORKS_FLOOR = 8,
    ANEURALNETWORKS_FULLY_CONNECTED = 9,
    ANEURALNETWORKS_HASHTABLE_LOOKUP = 10,
    ANEURALNETWORKS_L2_NORMALIZATION = 11,
    ANEURALNETWORKS_L2_POOL_2D = 12,
    ANEURALNETWORKS_LOCAL_RESPONSE_NORMALIZATION = 13,
    ANEURALNETWORKS_LOGISTIC = 14,
    ANEURALNETWORKS_LSH_PROJECTION = 15,
    ANEURALNETWORKS_LSTM = 16,
    ANEURALNETWORKS_MAX_POOL_2D = 17,
    ANEURALNETWORKS_MUL = 18,
    ANEURALNETWORKS_RELU = 19,
    ANEURALNETWORKS_RELU1 = 20,
    ANEURALNETWORKS_RELU6 = 21,
    ANEURALNETWORKS_RESHAPE = 22,
    ANEURALNETWORKS_RESIZE_BILINEAR = 23,
    ANEURALNETWORKS_RNN = 24,
    ANEURALNETWORKS_SOFTMAX = 25,
    ANEURALNETWORKS_SPACE_TO_DEPTH = 26,
    ANEURALNETWORKS_SVDF = 27,
    ANEURALNETWORKS_TANH = 28,
    ANEURALNETWORKS_BATCH_TO_SPACE_ND = 29,
    ANEURALNETWORKS_DIV = 30,
    ANEURALNETWORKS_MEAN = 31,
    ANEURALNETWORKS_PAD = 32,
    ANEURALNETWORKS_SPACE_TO_BATCH_ND = 33,
    ANEURALNETWORKS_SQUEEZE = 34,
    ANEURALNETWORKS_STRIDED_SLICE = 35,
    ANEURALNETWORKS_SUB = 36,
    ANEURALNETWORKS_TRANSPOSE = 37,
    ANEURALNETWORKS_ABS = 38,
    ANEURALNETWORKS_ARGMAX = 39,
    ANEURALNETWORKS_ARGMIN = 40,
    ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_LSTM = 42,
    ANEURALNETWORKS_CAST = 45,
    ANEURALNETWORKS_EQUAL = 48,
    ANEURALNETWORKS_EXP = 49,
    ANEURALNETWORKS_EXPAND_DIMS = 50,
    ANEURALNETWORKS_GATHER = 51,
    ANEURALNETWORKS_GREATER = 53,
    ANEURALNETWORKS_GREATER_EQUAL = 54,
    ANEURALNETWORKS_LESS = 58,
    ANEURALNETWORKS_LESS_EQUAL = 59,
    ANEURALNETWORKS_LOG = 60,
    ANEURALNETWORKS_LOGICAL_AND = 61,
    ANEURALNETWORKS_LOGICAL_NOT = 62,
    ANEURALNETWORKS_LOGICAL_OR = 63,
    ANEURALNETWORKS_LOG_SOFTMAX = 64,
    ANEURALNETWORKS_MAXIMUM = 65,
    ANEURALNETWORKS_MINIMUM = 66,
    ANEURALNETWORKS_NEG = 67,
    ANEURALNETWORKS_NOT_EQUAL = 68,
    ANEURALNETWORKS_PAD_V2 = 69,
    ANEURALNETWORKS_POW = 70,
    ANEURALNETWORKS_PRELU = 71,
    ANEURALNETWORKS_QUANTIZE = 72,
    ANEURALNETWORKS_QUANTIZED_16BIT_LSTM = 73,
    ANEURALNETWORKS_REDUCE_ANY = 76,
    ANEURALNETWORKS_REDUCE_MAX = 77,
    ANEURALNETWORKS_REDUCE_MIN = 78,
    ANEURALNETWORKS_REDUCE_PROD = 79,
    ANEURALNETWORKS_REDUCE_SUM = 80,
    ANEURALNETWORKS_RSQRT = 83,
    ANEURALNETWORKS_SELECT = 84,
    ANEURALNETWORKS_SIN = 85,
    ANEURALNETWORKS_SLICE = 86,
    ANEURALNETWORKS_SPLIT = 87,
    ANEURALNETWORKS_SQRT = 88,
    ANEURALNETWORKS_TILE = 89,
    ANEURALNETWORKS_TOPK_V2 = 90,
    ANEURALNETWORKS_TRANSPOSE_CONV = 91,
    ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM = 92,
    ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN = 93,
    ANEURALNETWORKS_RESIZE_NEAREST_NEIGHBOR = 94,
    ANEURALNETWORKS_QUANTIZED_LSTM = 95,
    ANEURALNETWORKS_IF = 96,
    ANEURALNETWORKS_WHILE = 97,
    ANEURALNETWORKS_ELU = 98,
    ANEURALNETWORKS_HARD_SWISH = 99,
    ANEURALNETWORKS_FILL = 100,
    ANEURALNETWORKS_RANK = 101,
};

/**
 * Fused activation function types.
 *
 */
enum {
    ANEURALNETWORKS_FUSED_NONE = 0,
    ANEURALNETWORKS_FUSED_RELU = 1,
    ANEURALNETWORKS_FUSED_RELU1 = 2,
    ANEURALNETWORKS_FUSED_RELU6 = 3,
};

/**
 * Execution preferences.
 */
enum {
    ANEURALNETWORKS_PREFER_LOW_POWER = 0,
    ANEURALNETWORKS_PREFER_FAST_SINGLE_ANSWER = 1,
    ANEURALNETWORKS_PREFER_SUSTAINED_SPEED = 2,
};

/**
 * Different duration measurements.
 *
 */
typedef enum {
    ANEURALNETWORKS_DURATION_ON_HARDWARE = 0,
    ANEURALNETWORKS_DURATION_IN_DRIVER = 1,
    ANEURALNETWORKS_FENCED_DURATION_ON_HARDWARE = 2,
    ANEURALNETWORKS_FENCED_DURATION_IN_DRIVER = 3,
} DurationCode;

/**
 * Result codes.
 */
// LINT.IfChange
enum {
    ANEURALNETWORKS_NO_ERROR = 0,
    ANEURALNETWORKS_OUT_OF_MEMORY = 1,
    ANEURALNETWORKS_INCOMPLETE = 2,
    ANEURALNETWORKS_UNEXPECTED_NULL = 3,
    ANEURALNETWORKS_BAD_DATA = 4,
    ANEURALNETWORKS_OP_FAILED = 5,
    ANEURALNETWORKS_BAD_STATE = 6,
    ANEURALNETWORKS_UNMAPPABLE = 7,
    ANEURALNETWORKS_OUTPUT_INSUFFICIENT_SIZE = 8,
    ANEURALNETWORKS_UNAVAILABLE_DEVICE = 9,
    ANEURALNETWORKS_MISSED_DEADLINE_TRANSIENT = 10,
    ANEURALNETWORKS_MISSED_DEADLINE_PERSISTENT = 11,
    ANEURALNETWORKS_RESOURCE_EXHAUSTED_TRANSIENT = 12,
    ANEURALNETWORKS_RESOURCE_EXHAUSTED_PERSISTENT = 13,
    ANEURALNETWORKS_DEAD_OBJECT = 14,
};
// LINT.ThenChange(//depot/google3/third_party/tensorflow/lite/delegates/nnapi/nnapi_delegate.cc:NnApiErrorDescription)

/**
 * Implicit padding algorithms.
 */
enum {
    ANEURALNETWORKS_PADDING_SAME = 1,
    ANEURALNETWORKS_PADDING_VALID = 2,
};

/**
 * Device types.
 *
 * The type of NNAPI device.
 */
enum {
    /** The device type cannot be provided. */
    ANEURALNETWORKS_DEVICE_UNKNOWN = 0,
    /** The device does not fall into any category below. */
    ANEURALNETWORKS_DEVICE_OTHER = 1,
    /** The device runs NNAPI models on single or multi-core CPU. */
    ANEURALNETWORKS_DEVICE_CPU = 2,
    /** The device can run NNAPI models and also accelerate graphics APIs such
     * as OpenGL ES and Vulkan. */
    ANEURALNETWORKS_DEVICE_GPU = 3,
    /** Dedicated accelerator for Machine Learning workloads. */
    ANEURALNETWORKS_DEVICE_ACCELERATOR = 4,
};

/**
 * Relative execution priority.
 *
 * Available since API level 30.
 */
enum {
    ANEURALNETWORKS_PRIORITY_LOW = 90,
    ANEURALNETWORKS_PRIORITY_MEDIUM = 100,
    ANEURALNETWORKS_PRIORITY_HIGH = 110,
    ANEURALNETWORKS_PRIORITY_DEFAULT = ANEURALNETWORKS_PRIORITY_MEDIUM,
};

/**
 * For {@link ANeuralNetworksCompilation_setCaching}, specify the size
 * of the cache token required from the application. The size is in bytes.
 *
 * Available since API level 29.
 */
enum { ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN = 32 };

/**
 * For {@link ANeuralNetworksModel_setOperandValue}, values with a
 * length smaller or equal to this will be immediately copied into
 * the model. The size is in bytes.
 *
 * Available since API level 27.
 */
enum { ANEURALNETWORKS_MAX_SIZE_OF_IMMEDIATELY_COPIED_VALUES = 128 };

/**
 * ANeuralNetworksMemoryDesc is an opaque type that represents a memory
 * descriptor.
 *
 * A memory descriptor describes the properties of a memory object, and is used
 * by
 * {@link ANeuralNetworksMemory_createFromDesc}.
 *
 * To use:
 *   - Create a new memory descriptor by calling
 *     {@link ANeuralNetworksMemoryDesc_create}.
 *   - Specify all of the intended input and output roles by calling
 *     {@link ANeuralNetworksMemoryDesc_addInputRole} and
 *     {@link ANeuralNetworksMemoryDesc_addOutputRole}.
 *   - Optionally, specify the memory dimensions by calling
 *     {@link ANeuralNetworksMemoryDesc_setDimensions}.
 *   - Complete the memory descriptor with {@link
 * ANeuralNetworksMemoryDesc_finish}.
 *   - Use the memory descriptor as many times as needed with
 *     {@link ANeuralNetworksMemory_createFromDesc}.
 *   - Destroy the memory descriptor with {@link
 * ANeuralNetworksMemoryDesc_free}.
 *
 * A memory descriptor is completed by calling {@link
 * ANeuralNetworksMemoryDesc_finish}. A memory descriptor is destroyed by
 * calling {@link ANeuralNetworksMemoryDesc_free}.
 *
 * A memory descriptor must not be modified once
 * {@link ANeuralNetworksMemoryDesc_finish}
 * has been called on it.
 *
 * It is the application's responsibility to make sure that only
 * one thread modifies a memory descriptor at a given time. It is however
 * safe for more than one thread to use the memory descriptor once
 * {@link ANeuralNetworksMemoryDesc_finish} has returned.
 *
 * It is also the application's responsibility to ensure that there are no other
 * uses of the memory descriptor after calling {@link
 * ANeuralNetworksMemoryDesc_free}. It is however safe to continue using a
 * {@link ANeuralNetworksMemory} object created from the memory descriptor.
 *
 * Available since API level 30.
 */
typedef struct ANeuralNetworksMemoryDesc ANeuralNetworksMemoryDesc;

/**
 * ANeuralNetworksMemory is an opaque type that represents memory.
 *
 * This type is used to represent shared memory, memory mapped files,
 * and similar memories.
 *
 * By using shared memory, a program can efficiently communicate to the
 * runtime and drivers the tensors that define a model. See
 * {@link ANeuralNetworksModel_setOperandValueFromMemory}. An application
 * should typically create one shared memory object that contains every tensor
 * needed to define a model. {@link ANeuralNetworksMemory_createFromFd} can be
 * used to create shared memory from a file handle. {@link
 * ANeuralNetworksMemory_createShared} can be used to directly created shared
 * memory.
 *
 * Memory objects can also be used to specify the input and output arguments of
 * an execution. See {@link ANeuralNetworksExecution_setInputFromMemory}
 * and {@link ANeuralNetworksExecution_setOutputFromMemory}.
 */
typedef struct ANeuralNetworksMemory ANeuralNetworksMemory;

/**
 * ANeuralNetworksModel is an opaque type that contains a description of the
 * mathematical operations that constitute the model.
 *
 * <p>The model will be built by calling<ul>
 * <li>{@link ANeuralNetworksModel_create},</li>
 * <li>{@link ANeuralNetworksModel_addOperation},</li>
 * <li>{@link ANeuralNetworksModel_addOperand},</li>
 * </ul>
 *
 * A model is completed by calling {@link ANeuralNetworksModel_finish}.
 * A model is destroyed by calling {@link ANeuralNetworksModel_free}.
 *
 * <p>It is the application's responsibility to make sure that only one thread
 * modifies a model at a given time. It is however safe for more than one
 * thread to use the model once {@link ANeuralNetworksModel_finish} has
 * returned.</p>
 *
 * <p>It is also the application's responsibility to ensure that there are no
 * other uses of the model after calling {@link ANeuralNetworksModel_free}. This
 * includes any compilation or execution object created using the model.</p>
 */
typedef struct ANeuralNetworksModel ANeuralNetworksModel;

/**
 * ANeuralNetworksCompilation is an opaque type that can be used to compile
 * a machine learning model.
 *
 * <p>To use:<ul>
 *    <li>Create a new compilation instance by calling the
 *        {@link ANeuralNetworksCompilation_create} function.</li>
 *    <li>Perform the compilation with {@link
 * ANeuralNetworksCompilation_start}.</li> <li>Wait for the compilation to
 * complete with {@link ANeuralNetworksCompilation_wait}.</li> <li>Use the
 * compilation as many times as needed with {@link
 * ANeuralNetworksExecution_create}.</li> <li>Destroy the compilation with
 * {@link ANeuralNetworksCompilation_free} once all executions using the
 * compilation have completed.</li></ul></p>
 *
 * <p>A compilation cannot be modified once {@link
 * ANeuralNetworksCompilation_start} has been called on it.</p>
 *
 * <p>It is the application's responsibility to make sure that only one thread
 * modifies a compilation at a given time. It is however safe for more than one
 * thread to use {@link ANeuralNetworksCompilation_wait} at the same time.
 * It is also safe for multiple threads to use a compilation object once
 * {@link ANeuralNetworksCompilation_wait} has completed.</p>
 *
 * <p>It is also the application's responsibility to ensure that there are no
 * other uses of the compilation after calling {@link
 * ANeuralNetworksCompilation_free}. This includes any execution object created
 * using the compilation.</p>
 */
typedef struct ANeuralNetworksCompilation ANeuralNetworksCompilation;

/**
 * ANeuralNetworksExecution is an opaque type that can be used to apply a
 * machine learning model to a set of inputs.
 *
 * <p>To use:<ul>
 *    <li>Create a new execution instance by calling the
 *        {@link ANeuralNetworksExecution_create} function.</li>
 *    <li>Associate data to the model inputs with
 *        {@link ANeuralNetworksExecution_setInput} or
 *        {@link ANeuralNetworksExecution_setInputFromMemory}.</li>
 *    <li>Associate output buffers to the model outputs with
 *        {@link ANeuralNetworksExecution_setOutput} or
 *        {@link ANeuralNetworksExecution_setOutputFromMemory}.</li>
 *    <li>Apply the model with {@link
 * ANeuralNetworksExecution_startCompute}.</li> <li>Wait for the execution to
 * complete with {@link ANeuralNetworksExecution_wait}.</li> <li>Destroy the
 * execution with
 *        {@link ANeuralNetworksExecution_free}.</li></ul></p>
 *
 * <p>An execution cannot be modified once {@link
 * ANeuralNetworksExecution_start} has been called on it.</p>
 *
 * <p>An execution can be applied to a model with
 * {@link ANeuralNetworksExecution_startCompute} only once. Create new
 * executions to do new evaluations of the model.</p>
 *
 * <p>It is the application's responsibility to make sure that only one thread
 * modifies an execution at a given time. It is however safe for more than one
 * thread to use {@link ANeuralNetworksExecution_wait} at the same time.</p>
 *
 * <p>It is also the application's responsibility to ensure that there are no
 * other uses of the request after calling {@link
 * ANeuralNetworksRequest_free}.</p>
 */
typedef struct ANeuralNetworksExecution ANeuralNetworksExecution;

/**
 * Parameters for ANEURALNETWORKS_TENSOR_QUANT8_SYMM_PER_CHANNEL operand.
 */
typedef struct ANeuralNetworksSymmPerChannelQuantParams {
    /* The index of the channel dimension. */
    uint32_t channelDim;
    /** The size of the scale array. Should be equal to dimension[channelDim] of
     * the Operand. */
    uint32_t scaleCount;
    /** The array of scaling values for each channel. Each value must be greater
     * than zero. */
    const float* scales;
} ANeuralNetworksSymmPerChannelQuantParams;

/**
 * ANeuralNetworksBurst is an opaque type that can be used to reduce the latency
 * of a rapid sequence of executions. It will likely cause overhead if only used
 * for a single execution.
 *
 * ANeuralNetworksBurst serves as a context object for any number of inferences
 * using {@link ANeuralNetworksExecution} objects. An ANeuralNetworksBurst
 * object and the {@link ANeuralNetworksExecution} objects used with it must all
 * have been created from the same {@link ANeuralNetworksCompilation} object.
 *
 * This object is also used as a hint to drivers, providing insight to the
 * lifetime of a rapid sequence of executions. For example, a driver may choose
 * to increase the clock frequency of its accelerator for the lifetime of a
 * burst object.
 *
 * <p>To use:<ul>
 *    <li>Create a new burst object by calling the
 *        {@link ANeuralNetworksBurst_create} function.</li>
 *    <li>For each execution:</li><ul>
 *        <li>Create {@link ANeuralNetworksExecution} and configure its
 *            properties (see {@link ANeuralNetworksExecution} for
 * details).</li> <li>Apply the model synchronously with
 *            {@link ANeuralNetworksExecution_burstCompute}, reusing the same
 *            {@link ANeuralNetworksBurst} with the new
 *            {@link ANeuralNetworksExecution}.</li>
 *        <li>Use and free the {@link ANeuralNetworksExecution}.</li></ul>
 *    <li>Destroy the burst with
 *        {@link ANeuralNetworksBurst_free}.</li></ul></p>
 *
 * Available since API level 29.
 */
typedef struct ANeuralNetworksBurst ANeuralNetworksBurst;

/**
 * OperandType describes the type of an operand.
 * This structure is used to describe both scalars and tensors.
 */
typedef struct ANeuralNetworksOperandType {
    /** The data type, e.g ANEURALNETWORKS_INT8. */
    int32_t type;
    /** The number of dimensions. It should be 0 for scalars. */
    uint32_t dimensionCount;
    /** The dimensions of the tensor. It should be nullptr for scalars. */
    const uint32_t* dimensions;
    /** These two fields are only used for quantized tensors.
     * They should be zero for scalars and non-fixed point tensors.
     * The dequantized value of each entry is (value - offset) * scale.
     */
    float scale;
    int32_t zeroPoint;
} ANeuralNetworksOperandType;

/**
 * ANeuralNetworksEvent is an opaque type that represents an event
 * that will be signaled once an execution completes.
 */
typedef struct ANeuralNetworksEvent ANeuralNetworksEvent;

typedef int32_t ANeuralNetworksOperationType;

/**
 * ANeuralNetworksDevice is an opaque type that represents a device.
 *
 * This type is used to query basic properties and supported operations of the
 * corresponding device, and control which device(s) a model is to be run on.
 *
 * Available since API level 29.
 */
typedef struct ANeuralNetworksDevice ANeuralNetworksDevice;

// Function types

typedef int64_t (*ANeuralNetworks_getRuntimeFeatureLevel_fn)();

typedef uint64_t (*ANeuralNetworks_getDefaultLoopTimeout_fn)();

typedef uint64_t (*ANeuralNetworks_getMaximumLoopTimeout_fn)();

typedef int (*ANeuralNetworksMemory_createFromFd_fn)(size_t size, int protect, int fd,
                                                     size_t offset, ANeuralNetworksMemory** memory);

typedef void (*ANeuralNetworksMemory_free_fn)(ANeuralNetworksMemory* memory);

typedef int (*ANeuralNetworksModel_create_fn)(ANeuralNetworksModel** model);

typedef int (*ANeuralNetworksModel_finish_fn)(ANeuralNetworksModel* model);

typedef void (*ANeuralNetworksModel_free_fn)(ANeuralNetworksModel* model);

typedef void (*ANeuralNetworksCompilation_free_fn)(ANeuralNetworksCompilation* compilation);

typedef int (*ANeuralNetworksCompilation_setPreference_fn)(ANeuralNetworksCompilation* compilation,
                                                           int32_t preference);

typedef int (*ANeuralNetworksCompilation_finish_fn)(ANeuralNetworksCompilation* compilation);

typedef int (*ANeuralNetworksModel_addOperand_fn)(ANeuralNetworksModel* model,
                                                  const ANeuralNetworksOperandType* type);

typedef int (*ANeuralNetworksModel_setOperandValue_fn)(ANeuralNetworksModel* model, int32_t index,
                                                       const void* buffer, size_t length);

typedef int (*ANeuralNetworksModel_setOperandSymmPerChannelQuantParams_fn)(
        ANeuralNetworksModel* model, int32_t index,
        const ANeuralNetworksSymmPerChannelQuantParams* channelQuant);

typedef int (*ANeuralNetworksModel_setOperandValueFromMemory_fn)(
        ANeuralNetworksModel* model, int32_t index, const ANeuralNetworksMemory* memory,
        size_t offset, size_t length);

typedef int (*ANeuralNetworksModel_setOperandValueFromModel_fn)(ANeuralNetworksModel* model,
                                                                int32_t index,
                                                                const ANeuralNetworksModel* value);

typedef int (*ANeuralNetworksModel_addOperation_fn)(ANeuralNetworksModel* model,
                                                    ANeuralNetworksOperationType type,
                                                    uint32_t inputCount, const uint32_t* inputs,
                                                    uint32_t outputCount, const uint32_t* outputs);

typedef int (*ANeuralNetworksModel_identifyInputsAndOutputs_fn)(ANeuralNetworksModel* model,
                                                                uint32_t inputCount,
                                                                const uint32_t* inputs,
                                                                uint32_t outputCount,
                                                                const uint32_t* outputs);

typedef int (*ANeuralNetworksModel_relaxComputationFloat32toFloat16_fn)(ANeuralNetworksModel* model,
                                                                        bool allow);

typedef int (*ANeuralNetworksExecution_create_fn)(ANeuralNetworksCompilation* compilation,
                                                  ANeuralNetworksExecution** execution);

typedef void (*ANeuralNetworksExecution_free_fn)(ANeuralNetworksExecution* execution);

typedef int (*ANeuralNetworksExecution_setInput_fn)(ANeuralNetworksExecution* execution,
                                                    int32_t index,
                                                    const ANeuralNetworksOperandType* type,
                                                    const void* buffer, size_t length);

typedef int (*ANeuralNetworksExecution_setInputFromMemory_fn)(
        ANeuralNetworksExecution* execution, int32_t index, const ANeuralNetworksOperandType* type,
        const ANeuralNetworksMemory* memory, size_t offset, size_t length);

typedef int (*ANeuralNetworksExecution_setOutput_fn)(ANeuralNetworksExecution* execution,
                                                     int32_t index,
                                                     const ANeuralNetworksOperandType* type,
                                                     void* buffer, size_t length);

typedef int (*ANeuralNetworksExecution_setOutputFromMemory_fn)(
        ANeuralNetworksExecution* execution, int32_t index, const ANeuralNetworksOperandType* type,
        const ANeuralNetworksMemory* memory, size_t offset, size_t length);

typedef void (*ANeuralNetworksEvent_free_fn)(ANeuralNetworksEvent* event);
typedef int (*ANeuralNetworksEvent_wait_fn)(ANeuralNetworksEvent* event);

typedef int (*ASharedMemory_create_fn)(const char* name, size_t size);

typedef int (*ANeuralNetworks_getDeviceCount_fn)(uint32_t* numDevices);

typedef int (*ANeuralNetworks_getDevice_fn)(uint32_t devIndex, ANeuralNetworksDevice** device);

typedef int (*ANeuralNetworksDevice_getName_fn)(const ANeuralNetworksDevice* device,
                                                const char** name);

typedef int (*ANeuralNetworksDevice_getType_fn)(const ANeuralNetworksDevice* device, int32_t* type);

typedef int (*ANeuralNetworksDevice_getVersion_fn)(const ANeuralNetworksDevice* device,
                                                   const char** version);

typedef int (*ANeuralNetworksDevice_wait_fn)(const ANeuralNetworksDevice* device);

typedef int (*ANeuralNetworksDevice_getFeatureLevel_fn)(const ANeuralNetworksDevice* device,
                                                        int64_t* featureLevel);

typedef int (*ANeuralNetworksModel_getSupportedOperationsForDevices_fn)(
        const ANeuralNetworksModel* model, const ANeuralNetworksDevice* const* devices,
        uint32_t numDevices, bool* supportedOps);

typedef int (*ANeuralNetworksCompilation_createForDevices_fn)(
        ANeuralNetworksModel* model, const ANeuralNetworksDevice* const* devices,
        uint32_t numDevices, ANeuralNetworksCompilation** compilation);

typedef int (*ANeuralNetworksCompilation_setCaching_fn)(ANeuralNetworksCompilation* compilation,
                                                        const char* cacheDir, const uint8_t* token);

typedef int (*ANeuralNetworksCompilation_setTimeout_fn)(ANeuralNetworksCompilation* compilation,
                                                        uint64_t duration);

typedef int (*ANeuralNetworksCompilation_setPriority_fn)(ANeuralNetworksCompilation* compilation,
                                                         int priority);

typedef int (*ANeuralNetworksExecution_compute_fn)(ANeuralNetworksExecution* execution);

typedef int (*ANeuralNetworksExecution_startComputeWithDependencies_fn)(
        ANeuralNetworksExecution* execution, const ANeuralNetworksEvent* const* dependencies,
        uint32_t num_dependencies, uint64_t duration, ANeuralNetworksEvent** event);

typedef int (*ANeuralNetworksExecution_compute_fn)(ANeuralNetworksExecution* execution);

typedef int (*ANeuralNetworksExecution_setTimeout_fn)(ANeuralNetworksExecution* execution,
                                                      uint64_t duration);

typedef int (*ANeuralNetworksExecution_setLoopTimeout_fn)(ANeuralNetworksExecution* execution,
                                                          uint64_t duration);

typedef int (*ANeuralNetworksExecution_setReusable_fn)(ANeuralNetworksExecution* execution,
                                                       bool reusable);

typedef int (*ANeuralNetworksExecution_getOutputOperandRank_fn)(ANeuralNetworksExecution* execution,
                                                                int32_t index, uint32_t* rank);

typedef int (*ANeuralNetworksExecution_getOutputOperandDimensions_fn)(
        ANeuralNetworksExecution* execution, int32_t index, uint32_t* dimensions);

typedef int (*ANeuralNetworksBurst_create_fn)(ANeuralNetworksCompilation* compilation,
                                              ANeuralNetworksBurst** burst);

typedef void (*ANeuralNetworksBurst_free_fn)(ANeuralNetworksBurst* burst);

typedef int (*ANeuralNetworksExecution_burstCompute_fn)(ANeuralNetworksExecution* execution,
                                                        ANeuralNetworksBurst* burst);

typedef int (*ANeuralNetworksMemory_createFromAHardwareBuffer_fn)(const AHardwareBuffer* ahwb,
                                                                  ANeuralNetworksMemory** memory);

typedef int (*ANeuralNetworksExecution_setMeasureTiming_fn)(ANeuralNetworksExecution* execution,
                                                            bool measure);

typedef int (*ANeuralNetworksExecution_getDuration_fn)(const ANeuralNetworksExecution* execution,
                                                       int32_t durationCode, uint64_t* duration);

typedef int (*ANeuralNetworksExecution_enableInputAndOutputPadding_fn)(
        ANeuralNetworksExecution* execution, bool enable);

typedef int (*ANeuralNetworksDevice_getExtensionSupport_fn)(const ANeuralNetworksDevice* device,
                                                            const char* extensionName,
                                                            bool* isExtensionSupported);

typedef int (*ANeuralNetworksModel_getExtensionOperandType_fn)(ANeuralNetworksModel* model,
                                                               const char* extensionName,
                                                               uint16_t operandCodeWithinExtension,
                                                               int32_t* type);

typedef int (*ANeuralNetworksModel_getExtensionOperationType_fn)(
        ANeuralNetworksModel* model, const char* extensionName,
        uint16_t operationCodeWithinExtension, ANeuralNetworksOperationType* type);

typedef int (*ANeuralNetworksModel_setOperandExtensionData_fn)(ANeuralNetworksModel* model,
                                                               int32_t index, const void* data,
                                                               size_t length);

typedef int (*ANeuralNetworksMemoryDesc_create_fn)(ANeuralNetworksMemoryDesc** desc);

typedef void (*ANeuralNetworksMemoryDesc_free_fn)(ANeuralNetworksMemoryDesc* desc);

typedef int (*ANeuralNetworksMemoryDesc_addInputRole_fn)(
        ANeuralNetworksMemoryDesc* desc, const ANeuralNetworksCompilation* compilation,
        int32_t index, float frequency);

typedef int (*ANeuralNetworksMemoryDesc_addOutputRole_fn)(
        ANeuralNetworksMemoryDesc* desc, const ANeuralNetworksCompilation* compilation,
        uint32_t index, float frequency);

typedef int (*ANeuralNetworksMemoryDesc_setDimensions_fn)(ANeuralNetworksMemoryDesc* desc,
                                                          uint32_t rank,
                                                          const uint32_t* dimensions);

typedef int (*ANeuralNetworksMemoryDesc_finish_fn)(ANeuralNetworksMemoryDesc* desc);

typedef int (*ANeuralNetworksMemory_createFromDesc_fn)(const ANeuralNetworksMemoryDesc* desc,
                                                       ANeuralNetworksMemory** memory);

typedef int (*ANeuralNetworksMemory_copy_fn)(const ANeuralNetworksMemory* src,
                                             const ANeuralNetworksMemory* dst);

typedef int (*ANeuralNetworksEvent_createFromSyncFenceFd_fn)(int sync_fence_fd,
                                                             ANeuralNetworksEvent** event);

typedef int (*ANeuralNetworksEvent_getSyncFenceFd_fn)(const ANeuralNetworksEvent* event,
                                                      int* sync_fence_fd);

typedef int (*ANeuralNetworksCompilation_getPreferredMemoryAlignmentForInput_fn)(
        const ANeuralNetworksCompilation* compilation, uint32_t index, uint32_t* alignment);

typedef int (*ANeuralNetworksCompilation_getPreferredMemoryPaddingForInput_fn)(
        const ANeuralNetworksCompilation* compilation, uint32_t index, uint32_t* padding);

typedef int (*ANeuralNetworksCompilation_getPreferredMemoryAlignmentForOutput_fn)(
        const ANeuralNetworksCompilation* compilation, uint32_t index, uint32_t* alignment);

typedef int (*ANeuralNetworksCompilation_getPreferredMemoryPaddingForOutput_fn)(
        const ANeuralNetworksCompilation* compilation, uint32_t index, uint32_t* padding);

#endif  // ANDROID_PACKAGES_MODULES_NEURALNETWORKS_SL_SUPPORT_LIBRARY_TYPES_H
