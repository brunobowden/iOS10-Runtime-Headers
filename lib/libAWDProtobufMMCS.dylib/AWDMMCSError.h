/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libAWDProtobufMMCS.dylib
 */

@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable  {
    int _code;
    NSString *_domain;
    NSMutableArray *_underlyingErrors;
    struct { 
        unsigned int code : 1; 
    } _has;
}

@property(readonly) BOOL hasDomain;
@property(retain) NSString * domain;
@property BOOL hasCode;
@property int code;
@property(retain) NSMutableArray * underlyingErrors;


- (id)underlyingErrors;
- (void)setHasCode:(BOOL)arg1;
- (id)underlyingErrorsAtIndex:(unsigned int)arg1;
- (void)clearUnderlyingErrors;
- (unsigned int)underlyingErrorsCount;
- (BOOL)hasCode;
- (BOOL)hasDomain;
- (void)addUnderlyingErrors:(id)arg1;
- (void)setUnderlyingErrors:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setCode:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)code;
- (id)domain;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setDomain:(id)arg1;

@end