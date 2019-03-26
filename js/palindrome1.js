let string = 'Eesohp3kaixohHottoHhoxiak3phoseE'
function is_palindrome(string) {
    if ((string.length == 0) || (string.length == 1)) {
        return true
    } else if (string[0] == string[string.length - 1]) {
        string = string.substr(1)
        return is_palindrome(string.substr(0, string.length - 1))
    } else return false
}
console.log(is_palindrome(string))
