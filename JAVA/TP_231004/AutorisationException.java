class AutorisationException extends Exception {
    public AutorisationException(String message) {
        super(message);
    }
    
    public String getMessage() {
        return "Op impossible : découvert trop grand";
    }
}