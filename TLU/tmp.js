// var fs = require('fs');
// const tmp = fs.readFileSync('D:\\Desktop\\Github\\Competitive-Programming\\TLU\\test.txt','utf-8')

// let IP = ['210.211.126.214', '210.211.126.221', '210.211.126.242', '210.211.126.243', '210.211.126.244',
//         '210.211.126.249', '210.211.126.252', '210.211.126.229', '210.211.126.218', '210.211.126.209']
// let IPPicked = [Object(),Object(),Object(),Object(),Object(),Object()]

// VLAN_TOTAL = 6
// Picked = tmp.split(' ')
// if (Picked.length >= 24) {
//     fs.open('D:\\Desktop\\Github\\Competitive-Programming\\TLU\\test.txt', 'w', function (err, file) {
//         if (err) throw err;
//         console.log('Saved!');
//     });
//     Picked = ""
// }
// if (Picked != "")
//     for (let i = 0; i < Picked.length; ++i) {
//         let x = Picked[i]
//         IPPicked[i%VLAN_TOTAL][x] = 1;
//     }
// console.log(IPPicked)
// let row = []
// let rowChecked = {}

// for (let j = 0; j < VLAN_TOTAL; ++j) {
//     while (true) {
//         let x = Math.floor(Math.random() * IP.length)
//         if (!rowChecked[IP[x]] && !IPPicked[j][IP[x]]) {
//             IPPicked[j][IP[x]] += 1
//             rowChecked[IP[x]] = 1
//             row.push(IP[x])
//             break
//         }
//     }
// }
// fs.appendFile('D:\\Desktop\\Github\\Competitive-Programming\\TLU\\test.txt', row[0] + ' ' + row[1] + ' ' + row[2] + ' ' + row[3] + ' ' + row[4] + ' ' + row[5] + ' ', function (err) {
//     if (err) throw err;
//     console.log('Saved!');
//     });

// console.log(row[0])
// console.log(row[1])
// console.log(row[2])
// console.log(row[3])
// console.log(row[4])
// console.log(row[5])

var fs = require('fs');
function test() {
    const tmp = fs.readFileSync('D:\\Desktop\\Github\\Competitive-Programming\\TLU\\test.txt', 'utf-8')

    let IP = ['210.211.126.214', '210.211.126.221', '210.211.126.242', '210.211.126.243', '210.211.126.244',
        '210.211.126.249', '210.211.126.252', '210.211.126.229', '210.211.126.218', '210.211.126.209']
    let IPPicked = [Object(),Object(),Object(),Object(),Object(),Object()]
    
    VLAN_TOTAL = 6

    Picked = tmp.split(' ')
    if (Picked.length >= 24) {
        fs.open('test.txt', 'w', function (err, file) {
            if (err) throw err;
            console.log('Saved!');
        });
        Picked = ""
    }
    if (Picked != "")
        for (let i = 0; i < Picked.length; ++i) {
            let x = Picked[i]
            IPPicked[i%VLAN_TOTAL][x] = 1;
        }
    
    let row = []
    let rowChecked = {}

    for (let j = 0; j < VLAN_TOTAL; ++j) {
        while (true) {
            let x = Math.floor(Math.random() * IP.length)
            if (!rowChecked[IP[x]] && !IPPicked[j][IP[x]]) {
                IPPicked[j][IP[x]] = 1
                rowChecked[IP[x]] = 1
                row.push(IP[x])
                break
            }
        }
    }
    fs.appendFile('test.txt', row[0] + ' ' + row[1] + ' ' + row[2] + ' ' + row[3] + ' ' + row[4] + ' ' + row[5] + ' ', function (err) {
        if (err) throw err;
        console.log('Saved!');
        setIP_SrcNAT('VLAN1', row[0])
        setIP_SrcNAT('VLAN2', row[1])
        setIP_SrcNAT('VLAN3', row[2])
        setIP_SrcNAT('VLAN4', row[3])
        setIP_SrcNAT('VLAN5', row[4])
        setIP_SrcNAT('VLAN6', row[5])
    });
}

async function setIP_SrcNAT(VLAN, IP) {
    console.log(VLAN + ':' + IP)
}

test()