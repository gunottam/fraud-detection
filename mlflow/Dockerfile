FROM python:3.10-slim
WORKDIR /app
COPY requirements.txt /app/requirements.txt

# Install dependencies
RUN pip install -r /app/requirements.txt

# Copy the application code
COPY . .

# Set the command to run your application
EXPOSE 5000