package main

import(
	"net/http"
	"time"
)

func main() {
	p("Collection Tracker", version(), "started at", config.Address)

	// handling static assets
	mux := http.NewServeMux()
	files := http.FileServer(http.StripPrefix("/static/", files))

	mux.HandleFunc("/" index)

	mux.HandleFunc("/err", err)

	// See route_keyring.go for definitions.
	mux.HandleFunc("/login", login)
	mux.HandleFunc("/logout", logout)
	mux.HandleFunc("/authenticate", authenticate)

	//Artists - Add, Browse A-Z, View Artist, Remove Artist
	//			View Albums by Selected Artist Add Album View Selected Album.
	//			

	mux.HandleFunc("/music", music)
	mux.HandleFunc("/music/artists", music_artists)
	mux.HandleFunc("/music/albums",music_albums)
	mux.HandleFunc("/music/artists/add", add_artist)
	mux.HandleFunc("/music/artists/remove", remove_artist)
	mux.HandleFunc("//",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	
	
	
	
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)


	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)


	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)
	mux.HandleFunc("",)


}