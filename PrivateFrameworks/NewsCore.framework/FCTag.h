/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTag : NSObject <FCChannelProviding, FCFeedTheming, FCSectionProviding, FCTagProviding, FCTopicProviding> {
    NSArray * _allowedStorefrontIDs;
    NSString * _backgroundColorHexString;
    double  _bannerImageBaselineOffsetPercentage;
    FCTagBanner * _bannerImageForMask;
    FCTagBanner * _bannerImageForThemeBackground;
    FCTagBanner * _bannerImageForWhiteBackground;
    double  _bannerImageScale;
    NSArray * _blockedStorefrontIDs;
    long long  _contentProvider;
    FCAssetHandle * _coverImageAssetHandle;
    FCHeadlineTemplate * _defaultHeadlineTemplate;
    NSString * _defaultSectionID;
    NTPBFeedConfiguration * _feedConfiguration;
    double  _forYouCutoffTime;
    unsigned long long  _forYouMaximumArticleCount;
    NSString * _foregroundColorHexString;
    NSString * _groupTitleColorHexString;
    FCTextInfo * _headlineBylineTextInfo;
    FCTextInfo * _headlineExcerptTextInfo;
    FCTextInfo * _headlineTitleTextInfo;
    bool  _hideAccessoryText;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSString * _identifier;
    bool  _isDeprecated;
    bool  _isExplicitContent;
    bool  _isNotificationEnabled;
    bool  _isPublic;
    NSDate * _loadDate;
    FCAssetHandle * _logoImageAssetHandle;
    NSString * _minimumNewsVersion;
    NSString * _name;
    FCAssetHandle * _nameImageAssetHandle;
    FCAssetHandle * _nameImageForDarkBackgroundAssetHandle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _nameImageForDarkBackgroundInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameImageForDarkBackgroundSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _nameImageInsets;
    FCAssetHandle * _nameImageMaskAssetHandle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _nameImageMaskInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameImageMaskSize;
    FCAssetHandle * _nameImageMaskWidgetAssetHandle;
    FCAssetHandle * _nameImageMaskWidgetHQAssetHandle;
    FCAssetHandle * _nameImageMaskWidgetLQAssetHandle;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameImageSize;
    NSString * _parentID;
    NSArray * _pinnedArticleIDs;
    NSString * _pptFeedIDOverride;
    NSString * _primaryAudience;
    NSString * _publisherPaidAuthorizationURL;
    NSArray * _publisherPaidFeldsparablePurchaseIDs;
    bool  _publisherPaidLeakyPaywallOptOut;
    NSArray * _publisherPaidOfferableConfigurations;
    NSString * _publisherPaidVerificationURL;
    bool  _publisherPaidWebAccessOptIn;
    NSString * _publisherPaidWebAccessURL;
    NSArray * _relatedChannelIDs;
    NSArray * _relatedChannelIDsForOnboarding;
    NSArray * _relatedTopicIDs;
    NSArray * _relatedTopicIDsForOnboarding;
    NSString * _replacementID;
    long long  _score;
    NSArray * _sectionIDs;
    NTPBTagRecord * _tagRecord;
    FCInterestToken * _tagRecordInterestToken;
    unsigned long long  _tagType;
    NSString * _versionKey;
}

@property (nonatomic, readonly) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) <FCChannelProviding> *asChannel;
@property (nonatomic, readonly) <FCSectionProviding> *asSection;
@property (nonatomic, readonly) <FCTopicProviding> *asTopic;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, copy) NSString *backgroundColorHexString;
@property (nonatomic) double bannerImageBaselineOffsetPercentage;
@property (nonatomic, readonly) FCTagBanner *bannerImageForMask;
@property (nonatomic, readonly) FCTagBanner *bannerImageForThemeBackground;
@property (nonatomic, readonly) FCTagBanner *bannerImageForWhiteBackground;
@property (nonatomic) double bannerImageScale;
@property (nonatomic, readonly) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly) long long contentProvider;
@property (nonatomic, readonly) FCAssetHandle *coverImageAssetHandle;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FCTagBanner *defaultBannerImage;
@property (nonatomic, readonly) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (nonatomic, readonly, copy) NSString *defaultSectionID;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NTPBFeedConfiguration *feedConfiguration;
@property (nonatomic, readonly) long long feedType;
@property (nonatomic, readonly) double forYouCutoffTime;
@property (nonatomic, readonly) unsigned long long forYouMaximumArticleCount;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, copy) NSString *foregroundColorHexString;
@property (nonatomic, readonly) UIColor *groupTitleColor;
@property (nonatomic, copy) NSString *groupTitleColorHexString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FCTextInfo *headlineBylineTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineExcerptTextInfo;
@property (nonatomic, readonly, copy) FCTextInfo *headlineTitleTextInfo;
@property (nonatomic, readonly) bool hideAccessoryText;
@property (nonatomic, readonly) NSArray *iAdCategories;
@property (nonatomic, readonly) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isBlockedExplicitContent;
@property (nonatomic, readonly) bool isDeprecated;
@property (nonatomic, readonly) bool isExplicitContent;
@property (nonatomic, readonly) bool isNotificationEnabled;
@property (nonatomic, readonly) bool isPublic;
@property (nonatomic, readonly) bool isSubscribable;
@property (nonatomic, readonly) bool isWhite;
@property (nonatomic, readonly) bool isWhitelisted;
@property (nonatomic, retain) NSDate *loadDate;
@property (nonatomic, readonly) NSArray *loadableFonts;
@property (nonatomic, readonly) FCAssetHandle *logoImageAssetHandle;
@property (nonatomic, readonly, copy) NSString *minimumNewsVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) FCAssetHandle *nameImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } nameImageForDarkBackgroundInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageForDarkBackgroundSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } nameImageInsets;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskAssetHandle;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } nameImageMaskInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageMaskSize;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nameImageSize;
@property (nonatomic, readonly, copy) NSString *parentID;
@property (nonatomic, readonly) NSArray *pinnedArticleIDs;
@property (nonatomic, copy) NSString *pptFeedIDOverride;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSString *publisherPaidAuthorizationURL;
@property (nonatomic, readonly) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (nonatomic, readonly) bool publisherPaidLeakyPaywallOptOut;
@property (nonatomic, readonly) NSArray *publisherPaidOfferableConfigurations;
@property (nonatomic, readonly, copy) NSString *publisherPaidVerificationURL;
@property (nonatomic, readonly) bool publisherPaidWebAccessOptIn;
@property (nonatomic, readonly, copy) NSString *publisherPaidWebAccessURL;
@property (nonatomic, readonly) NSArray *relatedChannelIDs;
@property (nonatomic, readonly) NSArray *relatedChannelIDsForOnboarding;
@property (nonatomic, readonly) NSArray *relatedTopicIDs;
@property (nonatomic, readonly) NSArray *relatedTopicIDsForOnboarding;
@property (nonatomic, readonly, copy) NSString *replacementID;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly, copy) NSArray *sectionIDs;
@property (nonatomic, readonly) long long statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsNotifications;
@property (nonatomic, readonly) NTPBTagRecord *tagRecord;
@property (nonatomic, readonly) FCInterestToken *tagRecordInterestToken;
@property (nonatomic, readonly) unsigned long long tagType;
@property (nonatomic, readonly, copy) <FCFeedTheming> *theme;
@property (nonatomic, readonly, copy) NSString *versionKey;

- (void).cxx_destruct;
- (id)_feedIDForBin:(long long)arg1 paid:(bool)arg2;
- (void)_inflateFromJSONDictionary:(id)arg1;
- (void)_inflateFromJSONDictionary:(id)arg1 withVersion:(long long)arg2;
- (void)_inflateFromVersionlessJSONDictionary:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)asChannel;
- (id)asSection;
- (id)asTopic;
- (id)authorizationURL;
- (id)backgroundColor;
- (id)backgroundColorHexString;
- (double)bannerImageBaselineOffsetPercentage;
- (id)bannerImageForMask;
- (id)bannerImageForThemeBackground;
- (id)bannerImageForWhiteBackground;
- (double)bannerImageScale;
- (id)blockedStorefrontIDs;
- (long long)contentProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverImageAssetHandle;
- (id)data;
- (id)defaultBannerImage;
- (id)defaultHeadlineTemplate;
- (id)defaultSectionID;
- (id)description;
- (id)feedConfiguration;
- (id)feedIDForBin:(long long)arg1;
- (long long)feedType;
- (double)forYouCutoffTime;
- (unsigned long long)forYouMaximumArticleCount;
- (id)foregroundColor;
- (id)foregroundColorHexString;
- (id)freeFeedIDForBin:(long long)arg1;
- (id)groupTitleColor;
- (id)groupTitleColorHexString;
- (unsigned long long)hash;
- (id)headlineBylineTextInfo;
- (id)headlineExcerptTextInfo;
- (id)headlineTitleTextInfo;
- (bool)hideAccessoryText;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)identifier;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4;
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3;
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)initWithData:(id)arg1 context:(id)arg2;
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;
- (id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (bool)isAuthenticationSetup;
- (bool)isBlockedExplicitContent;
- (bool)isDeprecated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTag:(id)arg1;
- (bool)isExplicitContent;
- (bool)isNoLongerAvailable;
- (bool)isNotificationEnabled;
- (bool)isPublic;
- (bool)isPurchaseSetup;
- (bool)isSubscribable;
- (bool)isWhite;
- (bool)isWhitelisted;
- (id)loadDate;
- (id)loadableFonts;
- (id)logoImageAssetHandle;
- (id)minimumNewsVersion;
- (id)name;
- (id)nameImageAssetHandle;
- (id)nameImageForDarkBackgroundAssetHandle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })nameImageForDarkBackgroundInsets;
- (struct CGSize { double x1; double x2; })nameImageForDarkBackgroundSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })nameImageInsets;
- (id)nameImageMaskAssetHandle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })nameImageMaskInsets;
- (struct CGSize { double x1; double x2; })nameImageMaskSize;
- (id)nameImageMaskWidgetAssetHandle;
- (id)nameImageMaskWidgetHQAssetHandle;
- (id)nameImageMaskWidgetLQAssetHandle;
- (struct CGSize { double x1; double x2; })nameImageSize;
- (id)paidFeedIDForBin:(long long)arg1;
- (id)parentID;
- (id)pinnedArticleIDs;
- (id)pptFeedIDOverride;
- (void)ppt_overrideFeedID:(id)arg1;
- (id)primaryAudience;
- (id)publisherPaidAuthorizationURL;
- (id)publisherPaidFeldsparablePurchaseIDs;
- (bool)publisherPaidLeakyPaywallOptOut;
- (id)publisherPaidOfferableConfigurations;
- (id)publisherPaidVerificationURL;
- (bool)publisherPaidWebAccessOptIn;
- (id)publisherPaidWebAccessURL;
- (id)purchaseOfferableConfigurationsFromProtobufList:(id)arg1;
- (id)relatedChannelIDs;
- (id)relatedChannelIDsForOnboarding;
- (id)relatedTopicIDs;
- (id)relatedTopicIDsForOnboarding;
- (id)replacementID;
- (long long)score;
- (id)sectionIDs;
- (void)setBackgroundColorHexString:(id)arg1;
- (void)setBannerImageBaselineOffsetPercentage:(double)arg1;
- (void)setBannerImageScale:(double)arg1;
- (void)setFeedConfiguration:(id)arg1;
- (void)setForegroundColorHexString:(id)arg1;
- (void)setGroupTitleColorHexString:(id)arg1;
- (void)setLoadDate:(id)arg1;
- (void)setPptFeedIDOverride:(id)arg1;
- (long long)statusBarStyle;
- (bool)supportsNotifications;
- (id)tagRecord;
- (id)tagRecordInterestToken;
- (unsigned long long)tagType;
- (id)theme;
- (id)versionKey;

@end
