/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection  {
}

@property(copy) NSString * artist;
@property(copy) NSArray * preferredPlayOrder;
@property(copy) NSString * sortArtist;
@property(copy) NSNumber * subscribed;

+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)podcastCollection;

- (void)setSubscribed:(id)arg1;
- (id)subscribed;
- (void)setPreferredPlayOrder:(id)arg1;
- (id)preferredPlayOrder;
- (void)setSortArtist:(id)arg1;
- (id)sortArtist;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setArtist:(id)arg1;
- (id)artist;
- (id)groupIdentifier;

@end