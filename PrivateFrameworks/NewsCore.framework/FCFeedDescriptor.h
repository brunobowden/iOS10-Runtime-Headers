/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedDescriptor : NSObject <FCFeedAdMetadataProviding, FCFeedHeadlineSource, NSCopying> {
    <FCContentContext> * _context;
    long long  _feedType;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *backingChannelID;
@property (nonatomic, readonly) NSString *backingSectionID;
@property (nonatomic, readonly) <FCTagProviding> *backingTag;
@property (nonatomic, readonly) NSString *backingTopicID;
@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long feedFilterOptions;
@property (nonatomic, readonly, copy) NSArray *feedGroupEmitters;
@property (nonatomic, readonly) <FCFeedPaginating> *feedPaginator;
@property (nonatomic, readonly) long long feedSortMethod;
@property (nonatomic) long long feedType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) long long iAdContentProvider;
@property (nonatomic, readonly) NSString *iAdFeedID;
@property (nonatomic, readonly) NSString *iAdIdentifier;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly) NSString *iAdPrimaryAudience;
@property (nonatomic, readonly) NSString *iAdSectionID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isSubscribable;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <FCFeedTheming> *theme;

- (void).cxx_destruct;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(bool)arg3 personalize:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)description;
- (bool)enableNotificationsWithSubscriptionController:(id)arg1 error:(id*)arg2;
- (long long)feedFilterOptions;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (long long)feedSortMethod;
- (long long)feedType;
- (void)fetchHeadlinesWithContext:(id)arg1 forIdentifiers:(id)arg2 downloadAssets:(bool)arg3 qualityOfService:(long long)arg4 completion:(id /* block */)arg5;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1 context:(id)arg2;
- (bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (unsigned long long)hash;
- (id)iAdCategories;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdIdentifier;
- (id)iAdKeywords;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSubscribable;
- (bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (id)latestHeadlineResultsWithContext:(id)arg1;
- (id)name;
- (void)setContext:(id)arg1;
- (void)setFeedType:(long long)arg1;
- (id)streamOfHeadlinesWithIDs:(id)arg1 context:(id)arg2 cachedOnly:(bool)arg3 maxCachedAge:(double)arg4;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (bool)subscribeToWithSubscriptionController:(id)arg1 error:(id*)arg2;
- (id)theme;
- (void)unsubscribeToWithSubscriptionController:(id)arg1;

@end
