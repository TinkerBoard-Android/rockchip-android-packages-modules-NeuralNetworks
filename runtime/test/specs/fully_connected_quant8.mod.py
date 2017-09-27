# model

model = Model()
in0 = Input("op1", "TENSOR_QUANT8_ASYMM", "{3}, 0.5f, 0")
weights = Input("op2", "TENSOR_QUANT8_ASYMM", "{1, 1}, 0.5f, 0")
bias = Input("b0", "TENSOR_QUANT8_ASYMM", "{1}, 0.25f, 0")
out0 = Output("op3", "TENSOR_QUANT8_ASYMM", "{3}, 1.f, 0")
act = Int32Scalar("act", 0)
model = model.Operation("FULLY_CONNECTED", in0, weights, bias, act).To(out0)

# Example 1. Input in operand 0,
input0 = {in0: # input 0
             [2, 32, 16],
         weights: [2],
         bias: [4]}
output0 = {out0: # output 0
               [2, 17, 9]}

# Instantiate an example
Example((input0, output0))
