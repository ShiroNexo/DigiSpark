Add-Type -AssemblyName System.speech
$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer
$speak.Speak("error, error, error, error, error, error, error, error. playing a music.")
start "https://www.youtube.com/watch?v=oHg5SJYRHA0"
exit