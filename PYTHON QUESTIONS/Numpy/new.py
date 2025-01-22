# Initial revenue
initial_revenue = 500000*(83.29)

# Growth rates for each year
growth_rates = [2, 1.5,1]

# Calculate revenue for each year
revenue_projection = []
current_revenue = initial_revenue
for rate in growth_rates:
    current_revenue *= rate
    revenue_projection.append(current_revenue)

# Print the projection
for year, revenue in enumerate(revenue_projection, start=1):
    print(f"Year {year}: Rs.{revenue:.2f}")