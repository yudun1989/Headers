//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZonePullingTableViewController.h>

#import <QQMainProject/MQZonePhotoDescriptionDelegate-Protocol.h>
#import <QQMainProject/PhotoEditDelegate-Protocol.h>
#import <QQMainProject/QZPhotoAlbumEventViewCellDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QZPhotoEventImageManager;

@interface QZPhotoAlbumEventViewController : MQZonePullingTableViewController <QZPhotoAlbumEventViewCellDelegate, MQZonePhotoDescriptionDelegate, PhotoEditDelegate>
{
    NSMutableArray *_eventPhotos;
    NSMutableArray *_cacheEventPhotos;
    NSMutableArray *_exposuredArray;
    NSMutableArray *_hideArray;
    NSMutableArray *_reportExposedArray;
    NSDictionary *_currentEventDict;
    NSMutableDictionary *_eventDescIDDict;
    NSArray *_updatedEventPhotos;
    NSMutableArray *_preloadAssetsEvents;
    NSMutableArray *_hintedBigEvents;
    long long _clipPhotosMaxNum;
    _Bool _hasMore;
    _Bool _shouldLoadMore;
    _Bool _shouldRequest;
    NSString *_operationID;
    QZPhotoEventImageManager *_imageManager;
    _Bool _shouldUpdatePreview;
    double _enterTime;
    _Bool _requestInList;
    CDUnknownBlockType _onEventPhotoChange;
    CDUnknownBlockType _onWillExit;
    CDUnknownBlockType _onExposuredEventChange;
    CDUnknownBlockType _scanCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType scanCompletionBlock; // @synthesize scanCompletionBlock=_scanCompletionBlock;
@property(nonatomic) _Bool requestInList; // @synthesize requestInList=_requestInList;
@property(retain, nonatomic) NSMutableArray *hintedBigEvents; // @synthesize hintedBigEvents=_hintedBigEvents;
@property(retain, nonatomic) NSMutableArray *preloadAssetsEvents; // @synthesize preloadAssetsEvents=_preloadAssetsEvents;
@property(copy, nonatomic) CDUnknownBlockType onExposuredEventChange; // @synthesize onExposuredEventChange=_onExposuredEventChange;
@property(copy, nonatomic) CDUnknownBlockType onWillExit; // @synthesize onWillExit=_onWillExit;
@property(copy, nonatomic) CDUnknownBlockType onEventPhotoChange; // @synthesize onEventPhotoChange=_onEventPhotoChange;
- (id)filterArrayByIdentifiler:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cacheEventPhotos; // @dynamic cacheEventPhotos;
@property(nonatomic) long long clipPhotosMaxNum; // @dynamic clipPhotosMaxNum;
@property(retain, nonatomic) NSDictionary *currentEventDict; // @dynamic currentEventDict;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableDictionary *eventDescIDDict; // @dynamic eventDescIDDict;
@property(retain, nonatomic) NSMutableArray *eventPhotos; // @dynamic eventPhotos;
@property(retain, nonatomic) NSMutableArray *exposuredArray; // @dynamic exposuredArray;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *hideArray; // @dynamic hideArray;
@property(retain, nonatomic) QZPhotoEventImageManager *imageManager; // @dynamic imageManager;
@property(retain, nonatomic) NSString *operationID; // @dynamic operationID;
@property(retain, nonatomic) NSMutableArray *reportExposedArray; // @dynamic reportExposedArray;
@property(nonatomic) _Bool shouldLoadMore; // @dynamic shouldLoadMore;
@property(nonatomic) _Bool shouldRequest; // @dynamic shouldRequest;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *updatedEventPhotos; // @dynamic updatedEventPhotos;

@end

