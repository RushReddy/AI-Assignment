Here is your **README with the Folder Structure section removed** and keeping the larger headings and clean formatting.

---

# Artificial Intelligence Programming Assignments

This repository contains implementations of three Artificial Intelligence assignments using the C programming language.

# Question 1: Turing Test and CAPTCHA Architecture

## Objective

To understand how systems distinguish between human users and automated programs using the concepts of the Turing Test and CAPTCHA.

## Turing Test

The **Turing Test**, proposed by **Alan Turing**, is a method used to determine whether a machine can exhibit intelligent behavior that is indistinguishable from human behavior.

### Architecture

User → Interface → AI System → Response Generator → Output

### Components

User Interface
AI Processing Unit
Knowledge Base
Response Generator

The AI system processes user input and generates responses that imitate human conversation.

## CAPTCHA

CAPTCHA stands for **Completely Automated Public Turing Test to Tell Computers and Humans Apart**.

### Purpose

CAPTCHA is used to prevent automated bots from accessing systems such as websites or login portals.

### Architecture

User → CAPTCHA Generator → Challenge Display → User Response → Verification

### Components

CAPTCHA Generator
Challenge Display
Verification System

### Examples

Distorted text recognition
Image selection
Puzzle solving

# Question 2: Simple Reflex Agent for Air Quality Index (AQI)

## Objective

To design a **Simple Reflex Agent** that reads environmental parameters from sensors and determines the **Air Quality Index (AQI)** of a region.

## Agent Architecture

Environment → Sensors → Simple Reflex Agent → Rules → Output

### Components

**Environment**
Air pollution data stored in a file.

**Sensors**
The program reads pollutant values such as PM2.5 from the input file.

**Agent**
The C program acts as the agent that processes the input data.

**Rules**
The AQI category is determined based on PM2.5 concentration ranges.

**Actuator**
The system displays the AQI category.

## Input File

Example sensor data stored in `data.txt`

```
PM25 180
PM10 220
NO2 40
SO2 20
CO 1
```

## AQI Classification

| PM2.5 Range | AQI Category |
| ----------- | ------------ |
| 0 – 50      | Good         |
| 51 – 100    | Satisfactory |
| 101 – 200   | Moderate     |
| 201 – 300   | Poor         |
| 301 – 400   | Very Poor    |
| 401+        | Severe       |

The agent reads the PM2.5 value and determines the AQI category using conditional rules.

# Question 3: Uninformed Search Algorithms

## Objective

To implement uninformed search algorithms and compare their performance.

### Algorithms Implemented

Breadth First Search (BFS)
Depth First Search (DFS)

These algorithms are commonly used to solve classical Artificial Intelligence problems.

## Example Problem Implemented

Milk and Water Jug Problem

### Problem Description

Two jugs with different capacities are given. The objective is to measure a specific amount of water using the jugs.

### State Representation

Each state represents the amount of water in each jug.

Example:
(0,0) → both jugs empty

### Possible Operations

Fill jug
Empty jug
Pour water from one jug to another

## BFS Implementation

Breadth First Search explores nodes **level by level**.

### Characteristics

Uses Queue
Guarantees shortest path
Higher memory usage

## DFS Implementation

Depth First Search explores nodes **deep into the state space before backtracking**.

### Characteristics

Uses Stack or Recursion
Lower memory usage
Does not guarantee shortest path

# Tools Used

Programming Language: C
Compiler: GCC / CodeBlocks
Version Control: Git
Repository Hosting: GitHub

---

If you want, I can also show you **one small trick that makes your GitHub README look much more professional than your classmates' repositories**.
