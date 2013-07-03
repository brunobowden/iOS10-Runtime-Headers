/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUFrameAdjustmentImageModifier : SUImageModifier  {
    BOOL _shouldSizeDownToFit;
    unsigned int _sizingMask;
}

@property BOOL shouldSizeDownToFit;
@property unsigned int sizingMask;


- (void)setShouldSizeDownToFit:(BOOL)arg1;
- (BOOL)shouldSizeDownToFit;
- (void)setSizingMask:(unsigned int)arg1;
- (unsigned int)sizingMask;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)scalesImage;
- (BOOL)isEqual:(id)arg1;

@end