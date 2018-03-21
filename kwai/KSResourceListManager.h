//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol KSResourceListManagerDelegate, KSResourceManager;

@interface KSResourceListManager : NSObject
{
    id <KSResourceListManagerDelegate> _delegate;
    id <KSResourceManager> _currentIndexedResource;
    CDUnknownBlockType _didAddResourceManager;
    NSMutableArray *_resources;
    unsigned long long _size;
    unsigned long long _cursorIndex;
    id <KSResourceManager> _currentDownloadingResource;
    Class _resourceClass;
    CDUnknownBlockType _currentDownloadCompletion;
    CDUnknownBlockType _downloadCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion=_downloadCompletion;
@property(copy, nonatomic) CDUnknownBlockType currentDownloadCompletion; // @synthesize currentDownloadCompletion=_currentDownloadCompletion;
@property(nonatomic) Class resourceClass; // @synthesize resourceClass=_resourceClass;
@property(retain, nonatomic) id <KSResourceManager> currentDownloadingResource; // @synthesize currentDownloadingResource=_currentDownloadingResource;
@property(nonatomic) unsigned long long cursorIndex; // @synthesize cursorIndex=_cursorIndex;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) CDUnknownBlockType didAddResourceManager; // @synthesize didAddResourceManager=_didAddResourceManager;
@property(retain, nonatomic) id <KSResourceManager> currentIndexedResource; // @synthesize currentIndexedResource=_currentIndexedResource;
@property(nonatomic) __weak id <KSResourceListManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commonInit;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)markCurrentIndexedResourceAsPlaying:(_Bool)arg1;
- (void)updateIndexOfResources;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)cancelDownLoading;
- (void)pauseDownloadingCompletion:(CDUnknownBlockType)arg1;
- (void)pauseDownloading;
- (void)startDownLoading;
- (void)startDownLoadingResource:(id)arg1;
- (void)bringResourceFromIndexToFront:(unsigned long long)arg1;
- (void)removeResourceAtIndex:(unsigned long long)arg1;
- (_Bool)insertResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)appendResource:(id)arg1;
- (unsigned long long)indexOfResource:(id)arg1;
- (unsigned long long)innerIndexOfResource:(id)arg1;
- (_Bool)containsResource:(id)arg1;
- (id)unavailableResourceOfIndex:(unsigned long long)arg1 advancedBy:(long long)arg2;
- (id)availableResourceOfIndex:(unsigned long long)arg1 advancedBy:(long long)arg2;
- (unsigned long long)circularIndex:(unsigned long long)arg1 advancedBy:(long long)arg2;
- (void)moveCursorToResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)indexToPreviousAvailableResource;
- (id)indexToNextAvailableResource;
- (id)init;
- (void)dealloc;
- (id)initFromPersistentStoreWithResourceClass:(Class)arg1;
- (void)saveToPersistentStore;
- (void)clearPersistentStore;

@end

