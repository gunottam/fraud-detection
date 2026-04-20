FROM apache/airflow:2.10.5

#Create models directory and set ownership
USER root
RUN mkdir -p /app/models
#Copy requirement file
COPY requirements.txt /tmp/requirements.txt

# Switch back to airflow user
USER airflow

#Install Python packages as airflow user
RUN pip install -r /tmp/requirements.txt