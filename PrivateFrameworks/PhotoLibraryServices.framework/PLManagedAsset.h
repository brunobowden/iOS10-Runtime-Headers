/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class UIImage, NSNumber, CLLocation, NSData, NSMutableOrderedSet, NSError, NSDate, NSMutableSet, NSSet, NSDictionary, <PLCloudSharedAlbumProtocol>, PLCloudFeedAssetsEntry, NSOrderedSet, NSArray, NSString, PLManagedAsset, NSURL;

@interface PLManagedAsset : _PLManagedAsset <UIActivityItemSource> {
    BOOL _didPrepareForDeletion;
    BOOL _isRegisteredForChanges;
    BOOL _needsMomentUpdate;
    BOOL _disableDupeAnalysis;
    NSURL *cachedNonPersistedVideoPlaybackURL;
    NSDate *cachedNonPersistedVideoPlaybackURLExpiration;
    NSError *cachedNonPersistedVideoPlaybackURLError;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

@property(retain) NSString * cloudBatchID;
@property(retain) NSDate * cloudBatchPublishDate;
@property(retain) NSString * cloudAssetGUID;
@property(retain) NSString * cloudCollectionGUID;
@property(retain) NSDictionary * cloudMetadata;
@property(retain) NSNumber * cloudHasUnseenComments;
@property BOOL cloudHasUnseenCommentsBoolValue;
@property(retain) NSNumber * cloudHasCommentsByMe;
@property BOOL cloudHasCommentsByMeBoolValue;
@property(retain) NSDate * cloudLastViewedCommentDate;
@property(retain) PLCloudFeedAssetsEntry * cloudFeedAssetsEntry;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(retain) NSNumber * cloudIsDeletable;
@property BOOL cloudIsDeletableBoolValue;
@property(retain) NSNumber * cloudIsMyAsset;
@property BOOL cloudIsMyAssetBoolValue;
@property(readonly) NSString * cloudOwnerEmail;
@property(readonly) NSString * cloudOwnerFullName;
@property(readonly) NSString * cloudOwnerFirstName;
@property(readonly) NSString * cloudOwnerLastName;
@property(retain) NSNumber * cloudHasCommentsConversation;
@property BOOL cloudHasCommentsConversationBoolValue;
@property(retain) NSOrderedSet * cloudComments;
@property(retain) NSOrderedSet * likeComments;
@property(readonly) unsigned int totalCommentsCount;
@property int cloudPlaceholderKindValue;
@property BOOL userCloudSharedLiked;
@property int highDynamicRangeTypeValue;
@property int savedAssetTypeValue;
@property(retain) CLLocation * location;
@property unsigned int effectiveThumbnailIndex;
@property(readonly) NSMutableOrderedSet * adjustments;
@property(retain) PLManagedAsset * originalAsset;
@property BOOL isInFlight;
@property(readonly) UIImage * inflightImage;
@property(retain) UIImage * inflightImageInMemory;
@property(retain) NSString * inflightImagePath;
@property(retain) UIImage * inflightIndexSheetImage;
@property(retain) NSDictionary * inflightMetadata;
@property int lastSelectionTypeValue;
@property(readonly) BOOL hasEmbeddedThumbnail;
@property(readonly) NSData * embeddedThumbnailData;
@property(retain) NSNumber * embeddedThumbnailOffset;
@property int embeddedThumbnailOffsetValue;
@property(retain) NSNumber * embeddedThumbnailLength;
@property int embeddedThumbnailLengthValue;
@property(retain) NSNumber * embeddedThumbnailWidth;
@property short embeddedThumbnailWidthValue;
@property(retain) NSNumber * embeddedThumbnailHeight;
@property short embeddedThumbnailHeightValue;
@property(retain) NSMutableSet * faces;
@property short assetKind;
@property short assetKindSubtype;
@property double captureTime;
@property struct CGSize { float x1; float x2; } imageSize;
@property double recordModDate;
@property struct { double x1; double x2; } gpsCoordinate;
@property(readonly) BOOL hasLocationInfo;
@property(readonly) NSDate * date;
@property(readonly) BOOL isPhotoStreamPhoto;
@property(readonly) BOOL supportsDistributedPhotoStreamDeletion;
@property(readonly) BOOL isCloudSharedAsset;
@property(readonly) <PLCloudSharedAlbumProtocol> * cloudShareAlbum;
@property(readonly) BOOL isVideo;
@property(readonly) BOOL isStreamedVideo;
@property(readonly) BOOL isHDVideo;
@property(readonly) BOOL isMogul;
@property(readonly) BOOL isPhoto;
@property(readonly) BOOL isAudio;
@property short visibilityStateValue;
@property(readonly) BOOL allowsWallpaperEditing;
@property BOOL needsMomentUpdate;
@property BOOL disableDupeAnalysis;
@property(readonly) NSArray * sortedSidecarFiles;
@property(copy) NSString * utiType;
@property(readonly) NSString * mimeType;
@property(readonly) BOOL isJPEG;
@property(readonly) NSURL * mainFileURL;
@property(readonly) NSString * pathForImageFile;
@property(readonly) NSSet * allFileURLs;
@property(readonly) NSSet * filePathsWithoutThumbs;
@property(readonly) NSString * pathForLargeThumbnailFile;
@property(readonly) NSString * pathForOriginalFile;
@property(readonly) NSURL * fileURLForLargeThumbnailFile;
@property(readonly) NSArray * allUniformTypeIdentifiers;
@property(readonly) NSString * fileExtension;
@property(readonly) NSString * pathForMetadataDirectory;
@property(readonly) NSURL * fileURLForThumbnailFile;
@property(readonly) NSString * pathForPrebakedThumbnail;
@property(readonly) NSString * pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSURL * fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSURL * fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSString * pathForPrebakedWildcatThumbnailsFile;
@property(readonly) NSString * pathForTrimmedVideoFile;
@property(readonly) NSString * pathForVideoPreviewFile;
@property(readonly) NSString * pathForVideoFile;
@property(readonly) NSString * pathForLargeDisplayableImageFile;
@property(readonly) NSString * pathForMediumThumbnailFile;
@property(readonly) NSString * pathForXMPFile;
@property(readonly) NSString * pathForFlattenedVideoFile;
@property(readonly) NSString * pathForSlalomRegionsArchive;
@property(readonly) BOOL hasSlalomRegions;
@property(readonly) NSArray * slalomRegions;
@property(readonly) NSString * textBadgeString;
@property(retain) NSURL * cachedNonPersistedVideoPlaybackURL;
@property(retain) NSDate * cachedNonPersistedVideoPlaybackURLExpiration;
@property(retain) NSError * cachedNonPersistedVideoPlaybackURLError;
@property(readonly) UIImage * wallpaperFullScreenImage;
@property(readonly) NSURL * assetURL;
@property int thumbnailIndex;

+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (id)sortedCloudSharedAssetsWithDerivativesInLibrary:(id)arg1;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
+ (id)persistedRecentlyUsedGUIDS;
+ (id)recentlyUsedGUIDsPath;
+ (id)uuidFromAssetURL:(id)arg1;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (int)wildcatPhotoScrubberFormat;
+ (int)formatForThumbnailGeneration;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)portraitScrubberThumbnailFormat;
+ (int)feedEntryThumbnailFormat;
+ (int)seaOfPhotosLargeThumbnailFormat;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingMimeType;
+ (id)keyPathsForValuesAffectingUtiType;
+ (id)keyPathsForValuesAffectingIsAudio;
+ (id)keyPathsForValuesAffectingIsPhoto;
+ (id)keyPathsForValuesAffectingIsVideo;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (id)keyPathsForValuesAffectingDate;
+ (id)keyPathsForValuesAffectingHasLocationInfo;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingRecordModDate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingCaptureTime;
+ (id)keyPathsForValuesAffectingAssetKind;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)pathsForAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithSavedAssetType:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6 isPlaceholder:(BOOL)arg7;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id*)arg2 sidecarIndex:(id*)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id*)arg3;
+ (id)extensionForLargeThumbnailFile;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id*)arg2 creationDateString:(id*)arg3;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6 isPlaceholder:(BOOL)arg7;
+ (id)locationFromLocationData:(id)arg1;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (int)indexSheetUnbakedFormat;
+ (int)posterThumbnailFormat;
+ (int)fullSizeImageFormat;
+ (int)wildcatCachedStackImageFormat;
+ (int)masterThumbnailFormat;
+ (int)wildcatIndexSheetFormat;
+ (id)slalomRegionsPathForMainFilePath:(id)arg1;
+ (short)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2;
+ (id)extensionForMediumThumbnailFile;
+ (void)extractDirectory:(id*)arg1 andFilename:(id*)arg2 fromMainFileURL:(id)arg3;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (int)wildcatStackFormat;
+ (int)thumbnailFormat;
+ (int)indexSheetBakedFormat;
+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countUsedAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void)copyToPasteboard;
- (BOOL)isPhoto;
- (void)setUserCloudSharedLiked:(BOOL)arg1;
- (void)userReadAllCloudSharedComments;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (BOOL)cloudHasSameOwnerAsAsset:(id)arg1;
- (int)cloudCommentsStatusForOwnedAsset:(BOOL)arg1;
- (void)addComment:(id)arg1;
- (void)setCloudHasUnseenCommentsBoolValue:(BOOL)arg1;
- (void)setCloudIsMyAssetBoolValue:(BOOL)arg1;
- (void)setCloudIsDeletableBoolValue:(BOOL)arg1;
- (void)setCloudPlaceholderKindValue:(int)arg1;
- (BOOL)userCloudSharedLiked;
- (void)deleteComment:(id)arg1;
- (BOOL)cloudHasUnseenCommentsBoolValue;
- (void)setCloudHasCommentsByMeBoolValue:(BOOL)arg1;
- (void)setCloudHasCommentsConversationBoolValue:(BOOL)arg1;
- (BOOL)cloudHasCommentsConversationBoolValue;
- (BOOL)cloudHasCommentsByMeBoolValue;
- (BOOL)cloudIsDeletableBoolValue;
- (unsigned int)totalCommentsCount;
- (void)_computePreCropThumbnailSize:(struct CGSize { float x1; float x2; }*)arg1 andPostCropSize:(struct CGSize { float x1; float x2; }*)arg2 forOrientedOriginalSize:(struct CGSize { float x1; float x2; })arg3 andCroppedSize:(struct CGSize { float x1; float x2; })arg4 isLargeThumbnail:(BOOL)arg5;
- (void)setDisableDupeAnalysis:(BOOL)arg1;
- (BOOL)disableDupeAnalysis;
- (BOOL)needsMomentUpdate;
- (void)setCachedNonPersistedVideoPlaybackURLError:(id)arg1;
- (id)cachedNonPersistedVideoPlaybackURLError;
- (void)setCachedNonPersistedVideoPlaybackURLExpiration:(id)arg1;
- (void)setCachedNonPersistedVideoPlaybackURL:(id)arg1;
- (id)shortenedFilePath;
- (BOOL)isInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)previewFrameImageFromDatabase;
- (id)wallpaperFullScreenImage;
- (id)textBadgeString;
- (id)newLowResolutionFullScreenImage;
- (id)newFullSizeImage;
- (id)mimeTypeForService:(id)arg1;
- (id)fileExtensionForService:(id)arg1;
- (id)slalomRegions;
- (BOOL)hasSlalomRegions;
- (id)pathForFlattenedVideoFile;
- (id)pathForXMPFile;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForPrebakedThumbnail;
- (id)allFileURLs;
- (id)filePathsWithoutThumbs;
- (BOOL)isSavedPhotosAsset;
- (BOOL)couldBeStoredInDCIM;
- (BOOL)hasImageFile;
- (BOOL)hasJustBeenHidden;
- (BOOL)hasJustBeenShown;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
- (BOOL)canPerformSharingActions;
- (BOOL)allowsWallpaperEditing;
- (BOOL)isHDVideo;
- (BOOL)supportsDistributedPhotoStreamDeletion;
- (BOOL)hasLocationInfo;
- (struct { double x1; double x2; })gpsCoordinate;
- (void)setRecordModDate;
- (void)setRecordModDate:(double)arg1;
- (double)recordModDate;
- (void)setCaptureTime:(double)arg1;
- (double)captureTime;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (void)setEmbeddedThumbnailHeightValue:(short)arg1;
- (short)embeddedThumbnailHeightValue;
- (void)setEmbeddedThumbnailWidthValue:(short)arg1;
- (short)embeddedThumbnailWidthValue;
- (void)setEmbeddedThumbnailLengthValue:(int)arg1;
- (void)setEmbeddedThumbnailOffsetValue:(int)arg1;
- (id)embeddedThumbnailData;
- (BOOL)hasEmbeddedThumbnail;
- (id)faceWithIdentifier:(short)arg1;
- (void)setPersistedFileSystemAttributes;
- (void)updateFromPersistedFileSystemAttributes;
- (id)_prettyDescription;
- (id)_compactDebugDescription;
- (id)pathToOriginalVideoFile;
- (id)cachedNonPersistedVideoPlaybackURL;
- (BOOL)hasGPS;
- (void)deleteFromDatabaseOnly;
- (void)setLastSelectionTypeValue:(int)arg1;
- (int)lastSelectionTypeValue;
- (BOOL)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (BOOL)hasThumbnail;
- (id)pasteBoardRepresentation;
- (id)fileExtension;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)allFileExtensions;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (void)getLargestAvailableDataRepresentation:(id*)arg1 type:(id*)arg2;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)inflightImage;
- (BOOL)_isValidUTI:(id)arg1 forService:(id)arg2;
- (id)pathForSlalomRegionsArchive;
- (BOOL)isMogul;
- (void)_generateLargeThumbnailFile;
- (id)pathForMediumThumbnailFile;
- (id)sortedSidecarFiles;
- (id)fileURLForMediumThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForLargeThumbnailFile;
- (void)setUtiType:(id)arg1;
- (int)cloudPlaceholderKindValue;
- (BOOL)cloudIsMyAssetBoolValue;
- (short)assetKindSubtype;
- (void)generateThumbnailsWithImageSource:(struct CGImageSource { }*)arg1 imageData:(id)arg2 updateExistingLargePreview:(BOOL)arg3 allowMediumPreview:(BOOL)arg4 outSmallThumbnail:(id*)arg5 outLargeThumbnail:(id*)arg6;
- (void)setGpsCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)isAudio;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(int)arg2 imageSource:(struct CGImageSource {}**)arg3 imageData:(id*)arg4;
- (void)setEmbeddedThumbnailHeight:(id)arg1;
- (id)embeddedThumbnailHeight;
- (void)setEmbeddedThumbnailWidth:(id)arg1;
- (id)embeddedThumbnailWidth;
- (void)setEmbeddedThumbnailLength:(id)arg1;
- (id)embeddedThumbnailLength;
- (void)setEmbeddedThumbnailOffset:(id)arg1;
- (id)embeddedThumbnailOffset;
- (int)embeddedThumbnailOffsetValue;
- (int)embeddedThumbnailLengthValue;
- (BOOL)_isSavedAssetTypeValueValid:(int)arg1;
- (id)_highDynamicRangeTypeDescription;
- (id)_savedAssetTypeDescription;
- (id)_kindDescription;
- (int)highDynamicRangeTypeValue;
- (id)inflightIndexSheetImage;
- (void)setInflightIndexSheetImage:(id)arg1;
- (id)cachedNonPersistedVideoPlaybackURLExpiration;
- (id)addAdjustment;
- (id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_settingsDictionaryFromFilter:(id)arg1;
- (id)_serializedPropertyDataFromFilter:(id)arg1;
- (BOOL)_hasPanoramaDimensions;
- (BOOL)isPanorama;
- (void)setThumbnailIndex:(int)arg1;
- (int)thumbnailIndex;
- (void)setHighDynamicRangeTypeValue:(int)arg1;
- (void)setIsInFlight:(BOOL)arg1;
- (BOOL)isCloudPlaceholder;
- (BOOL)isStreamedVideo;
- (id)thumbnailIdentifier;
- (id)indexSheetImage;
- (BOOL)isJPEG;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1;
- (id)imageWithFormat:(int)arg1;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)inflightMetadata;
- (id)inflightImageInMemory;
- (void)setInflightImagePath:(id)arg1;
- (id)inflightImagePath;
- (BOOL)isInFlight;
- (void)setInflightMetadata:(id)arg1;
- (void)setInflightImageInMemory:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (void)setAssetKindSubtype:(short)arg1;
- (void)setAssetKind:(short)arg1;
- (void)setSavedAssetTypeValue:(int)arg1;
- (id)pathForImageFile;
- (BOOL)setVideoInfoFromFileAtURL:(id)arg1;
- (id)utiType;
- (id)pathForLargeDisplayableImageFile;
- (void)setNeedsMomentUpdate:(BOOL)arg1;
- (void)setVisibilityStateValue:(short)arg1;
- (short)visibilityStateValue;
- (id)pathForVideoFile;
- (unsigned int)effectiveThumbnailIndex;
- (id)addFaceWithRelativeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)mainFileURL;
- (void)persistMetadataToFilesystem;
- (void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(struct CGImageSource { }*)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(struct __CFDictionary { }*)arg5;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (id)fileURLForSidecarFile:(id)arg1;
- (void)setOriginalAsset:(id)arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (id)pathForOriginalFile;
- (void)registerForChanges;
- (void)unregisterForChanges;
- (void)setEffectiveThumbnailIndex:(unsigned int)arg1;
- (id)pathForLargeThumbnailFile;
- (id)fileURLForThumbnailFile;
- (id)pathForVideoPreviewFile;
- (id)pathForMetadataDirectory;
- (id)assetURLWithExtension:(id)arg1;
- (int)savedAssetTypeValue;
- (id)cloudShareAlbum;
- (BOOL)isCloudSharedAsset;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)canPerformEditOperation:(int)arg1;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerFirstName;
- (id)adjustmentsXMPRepresentation;
- (id)originalAsset;
- (id)allUniformTypeIdentifiers;
- (id)assetURL;
- (void)delete;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)location;
- (void)willSave;
- (void)prepareForDeletion;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)awakeFromInsert;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (BOOL)isEditable;
- (short)assetKind;
- (BOOL)isVideo;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setLocation:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)mimeType;

@end