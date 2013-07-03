/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityMetadataFactoryFilePresenter, NSPersistentStoreCoordinator, NSPersistentStore, PFUbiquityLocation;

@interface PFUbiquityMetadataFactoryEntry : NSObject  {
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

@property(readonly) PFUbiquityLocation * metadataStoreFileLocation;
@property(readonly) PFUbiquityMetadataFactoryFilePresenter * filePresenter;
@property(readonly) NSPersistentStoreCoordinator * psc;
@property(readonly) NSPersistentStore * store;


- (BOOL)initializePersistentStoreCoordinator:(id*)arg1;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)filePresenter;
- (id)metadataStoreFileLocation;
- (id)psc;
- (id)store;
- (id)init;
- (void)dealloc;
- (id)description;

@end