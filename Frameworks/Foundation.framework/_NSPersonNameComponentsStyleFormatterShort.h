/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {
    BOOL  _forceShortNameEnabled;
    int  _shortNameFormat;
    _NSPersonNameComponentsStyleFormatter * _subFormatter;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral * _variantFormatter;
}

@property BOOL forceShortNameEnabled;
@property int shortNameFormat;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *subFormatter;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;

- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)alterations;
- (void)dealloc;
- (id)fallbackStyleFormatter;
- (BOOL)forceShortNameEnabled;
- (id)initWithMasterFormatter:(id)arg1;
- (id)keysOfInterest;
- (id)orderedKeysOfInterest;
- (void)setForceShortNameEnabled:(BOOL)arg1;
- (void)setShortNameFormat:(int)arg1;
- (int)shortNameFormat;
- (BOOL)shouldFallBack;
- (id)subFormatter;
- (id)variantFormatter;

@end