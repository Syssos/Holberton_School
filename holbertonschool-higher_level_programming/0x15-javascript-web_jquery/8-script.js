$.get('https://swapi.co/api/films/?format=json', function (data, textStatus) {
  if (textStatus === 'success') {
    let movie = data.results;
    for (let x in movie) {
	    $('#list_movies').append('<li>' + movie[x].title + '</li>');
    }
  }
});
