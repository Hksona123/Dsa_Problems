import matplotlib.pyplot as plt
years=[1,2,3]
revenue=[50000*83.29,50000*2*83.29,50000*2*1.5*83.29]
plt.plot(years,revenue,marker='o')
plt.title("Financial Projection of the Business")
plt.xlabel("Year")
plt.ylabel("Revenue(Rs.)")
plt.xticks(years)
plt.grid(True)
plt.show()