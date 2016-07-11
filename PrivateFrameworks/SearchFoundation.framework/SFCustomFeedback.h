/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCustomFeedback : SFFeedback {
    unsigned long long  _feedbackType;
    NSDictionary * _jsonFeedback;
}

@property (nonatomic) unsigned long long feedbackType;
@property (nonatomic, copy) NSDictionary *jsonFeedback;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feedbackType;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2;
- (id)jsonFeedback;
- (void)setFeedbackType:(unsigned long long)arg1;
- (void)setJsonFeedback:(id)arg1;

@end