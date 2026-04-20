# Fraud Detection System

A comprehensive Fraud Detection project utilizing Apache Airflow for workflow orchestration, MLflow for model tracking/management, and a streaming producer for real-time data ingestion.

## Project Structure

- `airflow/`: Contains the Dockerfile and requirements for the Airflow environment.
- `mlflow/`: Contains the Dockerfile and requirements for the MLflow tracking server.
- `producer/`: A Python-based data producer (e.g., Kafka producer) responsible for generating/simulating stream data for fraud detection.
- `dags/`: Stores Airflow Directed Acyclic Graphs (DAGs) defining the data pipelines.
- `models/`: Directory for storing machine learning models.
- `plugins/`: Custom Airflow plugins.
- `docker-compose.yaml`: Orchestrates the deployment of Airflow, MLflow, and related services.
- `init-multiple-dbs.sh`: Script to initialize multiple databases (e.g., Postgres) required by Airflow and MLflow.
- `wait-for-it.sh`: Utility script to wait on the availability of a host and TCP port.

## Prerequisites

- [Docker](https://docs.docker.com/get-docker/)
- [Docker Compose](https://docs.docker.com/compose/install/)

## Getting Started

1. **Clone the repository:**

   ```bash
   git clone https://github.com/gunottam/fraud-detection.git
   cd fraud-detection/src
   ```

2. **Environment Variables:**
   Make sure to configure your `.env` file based on the configurations required in `docker-compose.yaml`.

3. **Start the Infrastructure:**
   Run the following command to bring up Airflow, MLflow, and any other services defined in your stack:

   ```bash
   docker-compose up -d --build
   ```

4. **Accessing the Services:**
   - **Airflow Web UI:** Typically accessible at `http://localhost:8080` (Check docker-compose for exact port mappings).
   - **MLflow UI:** Typically accessible at `http://localhost:5000`.

## Architecture Overview

This project simulates a real-world MLOps pipeline for fraud detection:

- The **Producer** streams real-time data.
- **Airflow** schedules and orchestrates ETL tasks, model training, and batch evaluation.
- **MLflow** tracks experiments, registers models, and manages the model lifecycle.

## License

MIT
