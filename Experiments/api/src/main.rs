use std::io::Read;
// use serde_json::Value;
// use reqwest::blocking::Client;


    fn main() {

        let temperature = 20.0;
        let description = "Sunny";
        println!("Temperature: {:.2}°C", temperature);
        println!("Description: {}", description);
        
        let runningAverage = 0.0;
        for i in 0..10 {
            
        // Execution time
        let start = std::time::Instant::now();
        println!("WeatherAPI");

        // // Define the URL of the weather API you want to use.
        // let url = "https://api.openweathermap.org/data/2.5/weather?q=Stockholm,uk&appid=YOUR_API_KEY";

        // // Make a GET request to the API using the URL.
        // let client = Client::new();
        // let mut response = client.get(url).send().unwrap();

        // // Read the response body into a string.
        // let mut body = String::new();
        // response.read_to_string(&mut body).unwrap();

        // // Parse the JSON response from the API.
        // let json: Value = serde_json::from_str(&body).unwrap();

        // // Extract the relevant weather information from the parsed JSON.
        // let temperature = json["main"]["temp"].as_f64().unwrap() - 273.15;
        // let description = json["weather"][0]["description"].as_str().unwrap();

        // // Print the weather information to the console.


        let end = start.elapsed();
       
        runningAverage += end.as_secs_f64();
        }
        println!("Execution time: {:?}", runningAverage/10.0);
    }
    // Parse JSON

    // Path: Experiments/api/src/main.rs
