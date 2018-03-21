//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSMagicFaceGroup, KSMagicFaceResource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSSet, NSString, _KSMagicFaceResourceFilterConditionBasicMagicFace;
@protocol KSMagicFacePickModel, KSMagicFacePickViewModelDelegate, KSMagicFacePickViewModelPresentation;

@interface KSMagicFacePickViewModel : NSObject
{
    _Bool _basicMagicFacesOnly;
    _KSMagicFaceResourceFilterConditionBasicMagicFace *_basicMagicFaceCondition;
    id <KSMagicFacePickModel> _model;
    id <KSMagicFacePickViewModelDelegate> _delegate;
    id <KSMagicFacePickViewModelPresentation> _presentation;
    NSString *_pageURL;
    NSIndexPath *_indexPathForSelectedMagicFace;
    KSMagicFaceResource *_selectedMagicFace;
    KSMagicFaceGroup *_groupOfSelectedMagicFace;
    long long _lastSelectedDownloadMagicFaceId;
    NSSet *_filterConditions;
    NSMutableArray *_groups;
    NSMutableDictionary *_magicFacesByGroupId;
}

@property(readonly, nonatomic) NSMutableDictionary *magicFacesByGroupId; // @synthesize magicFacesByGroupId=_magicFacesByGroupId;
@property(readonly, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSSet *filterConditions; // @synthesize filterConditions=_filterConditions;
@property(nonatomic) _Bool basicMagicFacesOnly; // @synthesize basicMagicFacesOnly=_basicMagicFacesOnly;
@property(nonatomic) long long lastSelectedDownloadMagicFaceId; // @synthesize lastSelectedDownloadMagicFaceId=_lastSelectedDownloadMagicFaceId;
@property(retain, nonatomic) KSMagicFaceGroup *groupOfSelectedMagicFace; // @synthesize groupOfSelectedMagicFace=_groupOfSelectedMagicFace;
@property(retain, nonatomic) KSMagicFaceResource *selectedMagicFace; // @synthesize selectedMagicFace=_selectedMagicFace;
@property(retain, nonatomic) NSIndexPath *indexPathForSelectedMagicFace; // @synthesize indexPathForSelectedMagicFace=_indexPathForSelectedMagicFace;
@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(nonatomic) __weak id <KSMagicFacePickViewModelPresentation> presentation; // @synthesize presentation=_presentation;
@property(nonatomic) __weak id <KSMagicFacePickViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <KSMagicFacePickModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_handleDownloadCompletedForMagicFaceResource:(id)arg1 error:(id)arg2;
- (void)_didSelectedForMagicFaceResource:(id)arg1;
- (_Bool)_selectMagicFacePassingTest:(CDUnknownBlockType)arg1;
- (void)deselectMagicFace;
- (void)selectMagicFaceIdenticalTo:(id)arg1;
- (void)selectMagicFaceWithID:(long long)arg1 inGroupWithID:(id)arg2;
- (_Bool)selectMagicFaceWithID:(long long)arg1;
- (void)cancelAllDownloaders;
- (void)markAllMagicFacesAsSeen;
- (void)markMagicFacesAsSeen:(id)arg1;
- (void)selectMagicFaceAtIndexPath:(id)arg1;
- (_Bool)shouldFilterOutMagicFaceResource:(id)arg1 accordingToConditions:(id)arg2;
- (void)filterMagicFaces;
@property(readonly, nonatomic) _KSMagicFaceResourceFilterConditionBasicMagicFace *basicMagicFaceCondition; // @synthesize basicMagicFaceCondition=_basicMagicFaceCondition;
- (void)_applyConditions:(id)arg1;
- (_Bool)willCurrentMagicFaceBeFilteredOutAfterRestrictingBasicMagicFacesOnly;
- (id)magicFaceAtIndexPath:(id)arg1;
- (long long)numberOfMagicFacesInGroup:(long long)arg1;
- (id)magicFaceGroupAtIndex:(long long)arg1;
- (long long)numberOfMagicFaceGroups;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end

