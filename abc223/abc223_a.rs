use proconio::input;

fn main() {
    input! {
        X: i32,
    }
    if X == 0 {
        println!("No");
      	return ;
    }
    if X%100 == 0 {
        println!("Yes");
      	return ;
    }
    println!("No");
}