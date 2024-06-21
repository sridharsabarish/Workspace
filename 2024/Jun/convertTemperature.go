// Converting Temperatures using Go
func convertTemperature(celsius float64) []float64 {
	var b []float64
	b = append(b, (float64)(celsius+273.15), (float64)(celsius*1.80+32.00))
	return b

}