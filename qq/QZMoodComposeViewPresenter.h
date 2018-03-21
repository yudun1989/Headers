//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/QZModelObject.h>

@class NSArray, NSDate, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, QZJFeedsSEventTag, QZJOperationOperationGetEggskeywordRsp, QZPreviewVideoModel, QZUGCLBSModel;

@interface QZMoodComposeViewPresenter : QZModelObject
{
    unsigned long long _easterEggRequestID;
    QZJOperationOperationGetEggskeywordRsp *_easterEggImageInfo;
    _Bool _isAllowToSaveSyncOptions;
    _Bool _havePhoto;
    _Bool _supportsSyncToWechat;
    _Bool _syncToQQ;
    unsigned long long _composerType;
    NSIndexPath *_videoQuality;
    NSString *_advIconUrl;
    QZPreviewVideoModel *_microVideoModel;
    NSDate *_postDate;
    long long _privateFlag;
    QZUGCLBSModel *_LBSModel;
    QZJFeedsSEventTag *_tag;
    long long _uploadEntrance;
    SEL _leftButtonSelector;
    NSDictionary *_thirdShareExtMap;
    NSMutableArray *_photoList;
    NSMutableSet *_triggedEasterEggInfos;
}

+ (id)excludedPropertyKeys;
@property(retain, nonatomic) NSMutableSet *triggedEasterEggInfos; // @synthesize triggedEasterEggInfos=_triggedEasterEggInfos;
@property(retain, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
@property(nonatomic) _Bool syncToQQ; // @synthesize syncToQQ=_syncToQQ;
@property(nonatomic) _Bool supportsSyncToWechat; // @synthesize supportsSyncToWechat=_supportsSyncToWechat;
@property(retain, nonatomic) NSDictionary *thirdShareExtMap; // @synthesize thirdShareExtMap=_thirdShareExtMap;
@property(nonatomic) SEL leftButtonSelector; // @synthesize leftButtonSelector=_leftButtonSelector;
@property(nonatomic) long long uploadEntrance; // @synthesize uploadEntrance=_uploadEntrance;
@property(retain, nonatomic) QZJFeedsSEventTag *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) QZUGCLBSModel *LBSModel; // @synthesize LBSModel=_LBSModel;
@property(nonatomic) long long privateFlag; // @synthesize privateFlag=_privateFlag;
@property(retain, nonatomic) NSDate *postDate; // @synthesize postDate=_postDate;
@property(retain, nonatomic) QZPreviewVideoModel *microVideoModel; // @synthesize microVideoModel=_microVideoModel;
@property(retain, nonatomic) NSString *advIconUrl; // @synthesize advIconUrl=_advIconUrl;
@property(retain, nonatomic) NSIndexPath *videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) _Bool havePhoto; // @synthesize havePhoto=_havePhoto;
@property(nonatomic) unsigned long long composerType; // @synthesize composerType=_composerType;
- (void).cxx_destruct;
- (id)pictureListFromModelList:(id)arg1 exif:(id *)arg2 quality:(long long)arg3;
- (id)pictureFromPhotoModel:(id)arg1;
- (void)traceReportVideo;
- (long long)maxPhotoNum;
- (void)reportSeleteEasterEggWithKeyword:(id)arg1 imageID:(id)arg2;
- (void)reportShowEasterEggWithKeyword:(id)arg1 imageIDs:(id)arg2;
- (void)reportEnterEasterEggImagePicker:(long long)arg1 reserve:(long long)arg2;
- (void)fetchEasterEggImageInfo;
- (void)addEasterEggImageInfo:(id)arg1;
- (_Bool)showRedDot:(id)arg1;
- (id)hitKeyWordsForCurrentTextContent:(id)arg1;
- (id)easterEggImageInfosForCurrentTextContent;
- (_Bool)shouldShowEasterEggImagePickerEntrance;
- (_Bool)shouldShowEasterEggImageCell;
- (_Bool)reachesPhotoUploadLimit;
- (_Bool)supportQualityOptions;
- (long long)reportEntranceType;
- (_Bool)isVideoMode;
- (void)saveSyncOptions;
- (void)loadSyncOptions;
- (_Bool)validateVideoDraft:(id)arg1;
- (void)checkVideoDraft;
- (_Bool)hasFooterView;
- (void)convertDataFromLBSModel:(id)arg1;
- (long long)maxInputLength;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *appID; // @dynamic appID;
@property(copy, nonatomic) NSDictionary *atDictionary; // @dynamic atDictionary;
@property(nonatomic) _Bool autoShowKeyboard; // @dynamic autoShowKeyboard;
@property(copy, nonatomic) NSArray *cameraPhotos; // @dynamic cameraPhotos;
@property(nonatomic) long long compressBatchID; // @dynamic compressBatchID;
@property(nonatomic) unsigned long long deleTime; // @dynamic deleTime;
@property(nonatomic) _Bool easterEggDisabled; // @dynamic easterEggDisabled;
@property(nonatomic) _Bool fromThirdParty; // @dynamic fromThirdParty;
@property(retain, nonatomic) NSMutableArray *imageList; // @dynamic imageList;
@property(copy, nonatomic) NSArray *imageModels; // @dynamic imageModels;
@property(copy, nonatomic) NSArray *imageSources; // @dynamic imageSources;
@property(nonatomic) id leftButtonTarget; // @dynamic leftButtonTarget;
@property(nonatomic) _Bool needsLoadDraft; // @dynamic needsLoadDraft;
@property(nonatomic) _Bool needsLoadVideoDraft; // @dynamic needsLoadVideoDraft;
@property(retain, nonatomic) NSString *noImgTips; // @dynamic noImgTips;
@property(retain, nonatomic) NSMutableArray *originalPhotoUUIDs; // @dynamic originalPhotoUUIDs;
@property(retain, nonatomic) NSMutableDictionary *param; // @dynamic param;
@property(retain, nonatomic) NSIndexPath *photoQuality; // @dynamic photoQuality;
@property(copy, nonatomic) NSString *placeholderText; // @dynamic placeholderText;
@property(nonatomic) _Bool requireImg; // @dynamic requireImg;
@property(retain, nonatomic) NSMutableOrderedSet *selectedEasterEggImageInfos; // @dynamic selectedEasterEggImageInfos;
@property(nonatomic, getter=isShareMode) _Bool shareMode; // @dynamic shareMode;
@property(nonatomic) _Bool supportDraft; // @dynamic supportDraft;
@property(nonatomic) _Bool supportsAddPhotos; // @dynamic supportsAddPhotos;
@property(nonatomic) _Bool supportsRemovePhotos; // @dynamic supportsRemovePhotos;
@property(nonatomic) _Bool supportsSyncToQQ; // @dynamic supportsSyncToQQ;
@property(nonatomic) _Bool supportsSyncToWeibo; // @dynamic supportsSyncToWeibo;
@property(nonatomic) _Bool syncToWechat; // @dynamic syncToWechat;
@property(nonatomic) _Bool syncToWeibo; // @dynamic syncToWeibo;
@property(copy, nonatomic) NSString *textContent; // @dynamic textContent;
@property(retain, nonatomic) NSMutableArray *uinList; // @dynamic uinList;

@end

