function is_palindrome(string) {
    if (string.length <= 1) {
        return true
    } else if ( discard(string[0]) == true ) {
        return is_palindrome(string.substr(1))
    } else if (discard(string[string.length - 1]) == true) {
        return is_palindrome(string.substr(0, string.length - 1))
    } else if (string.toLowerCase()[0] == string.toLowerCase()[string.length - 1]) {
        string = string.substr(1)
        return is_palindrome(string.substr(0, string.length - 1))
    } else return false
}
function discard(a) {
    if ( a == " " || a == "." || a == "," || a == "'" )
    return true
}
console.log(is_palindrome("Madam, I'm Adam"))
