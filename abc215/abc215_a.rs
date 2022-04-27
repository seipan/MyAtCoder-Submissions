use proconio::input;

fn main() {
    input! {
        S: String,
    }
    if S == "Hello,World!" {
        println!("AC");
    }
    else {
        println!("WA");
    }

}