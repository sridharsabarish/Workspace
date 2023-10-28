import requests
from bs4 import BeautifulSoup
import nltk
from collections import Counter

def get_most_common_word(query):
    # Send GET request to Google search page
    url = f"https://www.google.com/search?q={query}"
    response = requests.get(url)

    # Parse HTML response and extract text content
    soup = BeautifulSoup(response.content, "html.parser")
    text = soup.get_text()

    # Tokenize text into words
    words = nltk.word_tokenize(text)

    # Count frequency of each word
    word_counts = Counter(words)

    # Return most common word
    print(word_counts.most_common(1)[0][0])
    return word_counts.most_common(1)[0][0]

print(get_most_common_word("IKIGAI"));