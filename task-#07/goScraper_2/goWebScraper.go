package main

import (
	"fmt"
	"log"
	"os"

	"github.com/gocarina/gocsv"
	"github.com/gocolly/colly"
)

type Richest struct {
	Net_worth        string `csv:"NET WORTH"`
	Age              string `csv:"AGE"`
	Country          string `csv:"COUNTRY/TERRITORY"`
	Source_of_income string `csv:"SOURCE OF INCOME"`
}

func Scraper() {
	richest := []Richest{}
	c := colly.NewCollector(
		colly.AllowedDomains("forbes.com", "www.forbes.com"),
	)
	c.OnHTML("tr.base ng-scope", func(e *colly.HTMLElement) {

		for i := 0; i < 10; i++ {

			rich := Richest{
				Net_worth:        e.DOM.Find("td.Net Worth").Find("div.ng-scope").Find("span.ng-binding").Text(),
				Age:              e.DOM.Find("td.age").Find("div.ng-scope").Find("span.ng-binding").Text(),
				Country:          e.DOM.Find("td.source").Find("div.ng-scope").Find("span.ng-binding").Text(),
				Source_of_income: e.DOM.Find("td.Country/Territory").Find("div.ng-scope").Find("span.ng-binding").Text(),
			}
			richest = append(richest, rich)
		}
	})

	c.OnRequest(func(r *colly.Request) {
		fmt.Println("Visiting", r.URL)
	})

	c.Visit("https://www.forbes.com/real-time-billionaires/#274507ff3d78")

	toCSV(richest)

}

func toCSV(data []Richest) {

	fName := "list.csv"
	file, err := os.Create(fName)

	if err != nil {
		log.Fatal("Could not create file, err :%q", err)
		return
	}
	gocsv.MarshalFile(data, file)

}

func main() {

	Scraper()
}
