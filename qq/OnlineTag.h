//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSMutableSet, NSString, QRBookInfo;

@interface OnlineTag : NSObject <NSCopying>
{
    QRBookInfo *_onlineBookInfo;
    QRBookInfo *_bookshelfBookinfo;
    int _toReadingCharpterId;
    NSString *_toReadingCharpterTitle;
    int _toReadingType;
    int _rightParameter;
    NSString *_chapterFileUrl;
    NSMutableSet *_gettingTagsSet;
    _Bool _cancelled;
    _Bool _isCloudProgressSync;
    _Bool _isBuy;
    long long _direction;
}

@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool isBuy; // @synthesize isBuy=_isBuy;
@property(nonatomic) _Bool isCloudProgressSync; // @synthesize isCloudProgressSync=_isCloudProgressSync;
@property(retain, nonatomic) NSMutableSet *gettingTagsSet; // @synthesize gettingTagsSet=_gettingTagsSet;
@property(retain, nonatomic) NSString *chapterFileUrl; // @synthesize chapterFileUrl=_chapterFileUrl;
@property(nonatomic) int rightParameter; // @synthesize rightParameter=_rightParameter;
@property(nonatomic) int toReadingType; // @synthesize toReadingType=_toReadingType;
@property(retain, nonatomic) NSString *toReadingCharpterTitle; // @synthesize toReadingCharpterTitle=_toReadingCharpterTitle;
@property(nonatomic) int toReadingCharpterId; // @synthesize toReadingCharpterId=_toReadingCharpterId;
@property(retain, nonatomic) QRBookInfo *bookshelfBookinfo; // @synthesize bookshelfBookinfo=_bookshelfBookinfo;
@property(retain, nonatomic) QRBookInfo *onlineBookInfo; // @synthesize onlineBookInfo=_onlineBookInfo;
- (_Bool)isFininshed;
- (void)resetProgress;
- (void)setReadTime;
- (void)refreshDate;
- (void)addCharpterRequestId:(id)arg1;
- (_Bool)removeCharpterRequestId:(id)arg1;
- (_Bool)containCharpterRequestId:(id)arg1;
- (id)getBookInfoForDownload;
- (id)getBookInfoFromTag;
- (id)getCurrentChapterFilePath;
- (_Bool)saveProgressToOnlineDB:(id)arg1;
- (int)getTheChapterIdToReading:(int)arg1;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBookInfo:(id)arg1;
- (id)initWithOnlineTag:(id)arg1;

@end

