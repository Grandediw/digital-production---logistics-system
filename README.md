# Digital Production and Logistics System

## Overview

This repository focuses on solving complex optimization problems related to digital production and logistics systems using Python and IBM’s CPLEX solver. It includes a range of projects that address various challenges such as production planning, inventory management, vehicle routing, and order batching. These problems are central to optimizing logistics and supply chain operations in both digital and physical environments.

The repository contains Python implementations that solve real-world optimization problems using linear programming (LP), mixed-integer programming (MIP), and heuristic approaches. The models developed provide solutions that minimize costs, travel distances, and environmental impact, while ensuring operational efficiency.

## Key Features

- **Optimization Problems**: Solving a wide array of production and logistics problems including vehicle routing, inventory control, and order batching.
- **CPLEX Integration**: Using IBM CPLEX to solve linear and mixed-integer programming models.
- **Python Code**: Modular and scalable Python scripts for solving different types of optimization problems.
- **Real-World Scenarios**: The repository contains real-world-inspired examples, including food and beverage distribution, warehouse management, and multi-objective optimization problems.

## Repository Structure

- **`hw1.ipynb`**: Class-Based Storage Problem
  - Optimizes storage in a warehouse by assigning products to locations to minimize picking distance using an ABC classification method.
  
- **`hw2.ipynb`**: Bi-Objective Periodic Review Problem
  - Minimizes inventory costs and environmental emissions by balancing economic and environmental objectives.

- **`hw3.ipynb`**: Order Batching Problem
  - Groups orders into efficient batches to minimize travel distance for warehouse pickers using heuristic approaches.

- **`hw4.ipynb`**: Vehicle Routing Problem with Pickup and Delivery (VRPPD)
  - Optimizes vehicle routes for a distribution system, ensuring that pickups occur before deliveries and minimizing the total travel time.

- **`Homework 1 - Class-Based Storage.pdf`**: Documentation for class-based storage optimization.

- **`Homework 2 - Bi-Objective Periodic Review.pdf`**: Documentation for solving a bi-objective inventory control problem.

- **`Homework 3 - Order Batching Problem.pdf`**: Explanation of the order batching optimization using seed and accompanying rules.

- **`Homework 4 - VRPPD.pdf`**: Description of the vehicle routing problem with pickup and delivery constraints.

## Getting Started

### Prerequisites

To use the Python files in this repository, ensure you have the following installed:

- Python 3.x
- IBM CPLEX (for solving LP and MIP problems)
- Required Python libraries: `numpy`, `pandas`, `matplotlib`, and `cplex`.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Grandediw/digital-production-logistics-system.git
   cd digital-production-logistics-system
   ```

2. Install the required dependencies:
   ```bash
   pip install -r requirements.txt
   ```

3. Ensure that CPLEX is properly installed and set up in your environment.
