const fs = require('fs')
const readline = require('readline')
const Stream = require('stream')
const random = require('random-number-csprng')

async function processFile(inputFile) {
  const instream = fs.createReadStream(inputFile)
  const outstream = new Stream()
  rl = readline.createInterface(instream, outstream)

  const trainStream = fs.createWriteStream('_train.csv', { flags: 'a' })
  const testStream = fs.createWriteStream('_test.csv', { flags: 'a' })

  var firstline = null

  rl.on('line', async function (line) {
    if (!firstline) {
      firstline = line
      return
    }
    const useAsTest = await random(1, 100) <= 10
    // console.log(useAsTest, line)
    if (useAsTest) {
      testStream.write(line + "\n")
    } else {
      trainStream.write(line + "\n")
    }
  })

  rl.on('close', async function (line) {
    // console.log(line)
    // console.log('done reading file.')
  })
}

processFile(process.argv[2])
