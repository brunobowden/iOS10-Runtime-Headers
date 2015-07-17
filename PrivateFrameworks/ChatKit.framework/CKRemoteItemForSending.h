/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRemoteItemForSending : NSObject <NSSecureCoding> {
    NSURL * _appendedBundleURL;
    NSURL * _appendedVideoURL;
    NSString * _attachmentDescription;
    NSURL * _attachmentURL;
    struct CGImageBlockSet { } * _blockSet;
    NSObject<OS_dispatch_semaphore> * _outstandingWork;
    struct __IOSurface { } * _previewImage;
    BOOL  _previewIsFullyRealizedByChatKit;
}

@property (nonatomic, retain) NSURL *appendedBundleURL;
@property (nonatomic, retain) NSURL *appendedVideoURL;
@property (nonatomic, retain) NSString *attachmentDescription;
@property (nonatomic, retain) NSURL *attachmentURL;
@property (nonatomic) struct CGImageBlockSet { }*blockSet;
@property (nonatomic) struct __IOSurface { }*previewImage;
@property (nonatomic) BOOL previewIsFullyRealizedByChatKit;

+ (BOOL)supportsSecureCoding;

- (void)_setPreviewUIImage:(id)arg1;
- (id)appendedBundleURL;
- (id)appendedVideoURL;
- (id)attachmentDescription;
- (id)attachmentURL;
- (void)beginPreviewCreation;
- (struct CGImageBlockSet { }*)blockSet;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2;
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (struct __IOSurface { }*)previewImage;
- (BOOL)previewIsFullyRealizedByChatKit;
- (id)previewUIImage;
- (void)setAppendedBundleURL:(id)arg1;
- (void)setAppendedVideoURL:(id)arg1;
- (void)setAttachmentDescription:(id)arg1;
- (void)setAttachmentURL:(id)arg1;
- (void)setBlockSet:(struct CGImageBlockSet { }*)arg1;
- (void)setPreviewImage:(struct __IOSurface { }*)arg1;
- (void)setPreviewIsFullyRealizedByChatKit:(BOOL)arg1;
- (void)waitForPreviewCreation;

@end