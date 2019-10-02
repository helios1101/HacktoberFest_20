const fs = require('fs');

// The path of the file the application reads should be provided as a command-line argument.
const filePath = process.argv[2];

fs.readFile(filePath, 'utf-8', (error, data) => {
  if (error) return console.error('The application could not read the file.');

  // Splits the file based on newlines and splits the lines based on semicolon.

  const lines = data.split(/\n/);
  const fileDataSplitted = lines.map(line => {
    return line.split(';');
  });

  // The column names become item object properties
  const [header, ...fileData] = fileDataSplitted;
  const mainObject = {};

  // Iterates over the data to create sub-objects.
  fileData.forEach((item, index) => {
    const obj = {};
    item.forEach((field, index) => {
      obj[header[index]] = field;
    });

    mainObject[`ITEM_${index + 1}`] = obj;
  });

  return JSON.stringify(mainObject, null, 2);
});
