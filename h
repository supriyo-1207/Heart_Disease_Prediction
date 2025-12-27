# Heart Disease Prediction using Machine Learning

## 📌 Overview
This project predicts the presence of heart disease in patients using a **Logistic Regression** model. It analyzes medical factors such as Chest Pain Type, Cholesterol, and Maximum Heart Rate to classify patients as "Healthy" or "Heart Disease."

The goal is to assist medical professionals in early diagnosis by minimizing false negatives (missing a sick patient).

## 📂 Dataset
The dataset consists of 270 patient records with 13 features, including:
- Age, Sex, Blood Pressure, Cholesterol
- Chest Pain Type, EKG Results
- Thallium Stress Test results
- **Target:** Presence (1) or Absence (0) of Heart Disease

## 🛠️ Tech Stack
- **Language:** Python
- **Libraries:** Pandas, NumPy, Scikit-Learn, Matplotlib, Seaborn
- **Model:** Logistic Regression

## 📊 Key Results
- **Accuracy:** ~91%
- **Recall (Sensitivity):** Optimized to minimize missed diagnoses.
- **Optimization:** Applied **StandardScaler** to normalize features and adjusted the classification threshold to improve Recall.

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone [https://github.com/YOUR_USERNAME/Heart-Disease-Prediction.git](https://github.com/YOUR_USERNAME/Heart-Disease-Prediction.git)
