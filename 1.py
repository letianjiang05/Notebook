import math

def get_float(prompt):
    while True:
        try:
            return float(input(prompt))
        except ValueError:
            print("Invalid input, please enter a number.")

# Get three measurement values from the user
m1 = get_float("Enter measurement 1: ")
m2 = get_float("Enter measurement 2: ")
m3 = get_float("Enter measurement 3: ")

# Get system uncertainty
u_sys = get_float("Enter system uncertainty: ")

# Calculate mean
mean = (m1 + m2 + m3) / 3

# Calculate measurement uncertainty (standard deviation)
squared_diffs = [(x - mean) ** 2 for x in [m1, m2, m3]]
u_meas = math.sqrt(sum(squared_diffs) / (3 - 1))  # Sample standard deviation

# Calculate combined uncertainty
u_comb = math.sqrt(u_meas ** 2 + u_sys ** 2)

# Output results
print("\nResults:")
print(f"Mean: {mean:.4f}")
print(f"Measurement Uncertainty (Std Dev): {u_meas:.4f}")
print(f"Combined Uncertainty: {u_comb:.4f}")
