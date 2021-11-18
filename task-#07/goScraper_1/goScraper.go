package main

import (
	"encoding/csv"
	"log"
	"os"

	"github.com/gocolly/colly"
)

func main() {
	fName := "list.csv"
	file, err := os.Create(fName)
	if err != nil {
		log.Fatalf("Cannot create file %q: %s\n", fName, err)
		return
	}
	defer file.Close()
	writer := csv.NewWriter(file)
	defer writer.Flush()

	// Write CSV header
	writer.Write([]string{"Net Worth", "Age", "Source", "Country/Territory"})

	// Instantiate default collector
	c := colly.NewCollector()

	c.OnHTML(".base ng-scope", func(e *colly.HTMLElement) {

		e.ForEachWithBreak("tr", func(i int, tr *colly.HTMLElement) bool {
			if i == 10 {
				return false

			}

			writer.Write([]string{
				e.ChildText("span"),
				e.ChildText("span"),
				e.ChildText("span"),
				e.ChildText("span"),
			})

			return true

		})
	})

	c.Visit("https://www.forbes.com/real-time-billionaires/#59420b843d78")

	log.Printf("Scraping finished, check file %q for results\n", fName)
}
