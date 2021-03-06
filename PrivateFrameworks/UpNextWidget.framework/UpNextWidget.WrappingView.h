/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.WrappingView : UIView {
    void persistentConstraints;
    void wrappedView;
}

@property (nonatomic, retain) UIView *wrappedView;

+ (bool)requiresConstraintBasedLayout;

- (id /* block */).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWrappedView:(id)arg1;
- (void)updateConstraints;
- (id)wrappedView;

@end
