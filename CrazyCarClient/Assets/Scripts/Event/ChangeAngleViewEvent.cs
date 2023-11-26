public enum AngleView {
    FirstAngle = 0,
    ThirdAngle
}

class ChangeAngleViewEvent {
    public AngleView angleView;

    public ChangeAngleViewEvent(AngleView angleView) {
        this.angleView = angleView;
    }
}