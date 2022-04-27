use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s : [Chars; 3],
        t : Chars,
    }
    let mut ans: Vec<char> = Vec::new();

    for x in t {
       if x == '1' {
        ans.extend(&s[0])
       } else
       if x == '2' {
        ans.extend(&s[1])
       } else
       if x == '3' {
        ans.extend(&s[2])
       }

    }
    for x in ans{
        print!("{}", x)
    }

    println!();

}