const fs = require("fs");
const input = fs.readFileSync(0, "utf-8").trim().split("\n");

let n = parseInt(input[0]);
let L = [];
for (let i = 1; i <= n; i++) {
    L.push(input[i].split(" ").map(Number));
}

for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
        if (L[i][j] !== 1) {
            let good = false;
            for (let k = 0; k < n; k++) {
                for (let l = 0; l < n; l++) {
                    if (k !== j && l !== i && L[i][k] + L[l][j] === L[i][j]) {
                        good = true;
                        break;
                    }
                }
                if (good) break;
            }
            if (!good) {
                console.log("No");
                process.exit(0);
            }
        }
    }
}

console.log("Yes");

