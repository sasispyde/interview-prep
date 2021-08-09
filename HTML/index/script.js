var numberOfTimeImageClicked = 0;
const imageClickFunction = () => {
	numberOfTimeImageClicked++;
	alert('image was clicked' + " : " + numberOfTimeImageClicked);
	return true;
}

