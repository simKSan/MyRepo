from bs4 import BeautifulSoup
import re

# Function to extract links with 'https' and containing 'business'
def extract_links_with_keyword(html_file, output_file):
    with open(html_file, 'r', encoding='utf-8') as file:
        soup = BeautifulSoup(file, 'html.parser')
        links = soup.find_all('a', href=re.compile(r'https.*example.*'))

    with open(output_file, 'w', encoding='utf-8') as output:
        for link in links:
            output.write(link.get('href') + '\n')

# Replace 'input.html' with your HTML file and 'output.txt' with your desired output file
extract_links_with_keyword('input.html', 'output.txt')
