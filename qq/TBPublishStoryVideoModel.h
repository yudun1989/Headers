//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSObject, NSString, TBAddressModel, TBGPSModel, TBStoryVideoDesModel, TBVideoReaderConfModel, TBVideoSpreadGroupListModel, TBVideoTagInfoBase;

@interface TBPublishStoryVideoModel : QQModel <NSCopying>
{
    _Bool _isLocal;
    _Bool _isPicture;
    _Bool _isGroupVideo;
    _Bool _isPublishTaskCancel;
    _Bool _isPublishFail;
    _Bool _isPostureDancePendant;
    int _timezoneOffset;
    unsigned int _ignoreInSelfStory;
    unsigned int _groupSendSource;
    NSString *_title;
    NSString *_videoPath;
    NSString *_doodlePath;
    NSString *_doodleText;
    NSString *_videoCover;
    NSString *_label;
    unsigned long long _videoTime;
    NSString *_locationEmojiText;
    NSString *_geographyFilter;
    TBAddressModel *_address;
    NSArray *_mentionList;
    unsigned long long _createTime;
    unsigned long long _localMediaCaptureTime;
    TBGPSModel *_localMediaGPSModel;
    NSString *_localMediaCaptureLocation;
    TBVideoReaderConfModel *_readerConf;
    TBVideoSpreadGroupListModel *_groupList;
    NSString *_groupID;
    NSObject *_userExtInfo;
    NSNumber *_uploadedFileOffset;
    NSString *_uploadedIP;
    unsigned long long _uin;
    NSString *_vid;
    TBVideoTagInfoBase *_videoTagInfo;
    TBStoryVideoDesModel *_videoModel;
}

+ (id)getVideoSpreadGroupListFromEditInfo:(id)arg1;
+ (id)getReaderConfFromEditInfo:(id)arg1;
+ (id)getVideoPathFromEditInfo:(id)arg1;
+ (id)createModelFromEditInfo:(id)arg1;
+ (id)createModel:(id)arg1 withVideoPath:(id)arg2 withVideoCover:(id)arg3 withDoodlePath:(id)arg4 withLabel:(id)arg5 withVideoTime:(unsigned long long)arg6;
@property(retain, nonatomic) TBStoryVideoDesModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) _Bool isPostureDancePendant; // @synthesize isPostureDancePendant=_isPostureDancePendant;
@property(retain, nonatomic) TBVideoTagInfoBase *videoTagInfo; // @synthesize videoTagInfo=_videoTagInfo;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *uploadedIP; // @synthesize uploadedIP=_uploadedIP;
@property(retain, nonatomic) NSNumber *uploadedFileOffset; // @synthesize uploadedFileOffset=_uploadedFileOffset;
@property(nonatomic) _Bool isPublishFail; // @synthesize isPublishFail=_isPublishFail;
@property(retain, nonatomic) NSObject *userExtInfo; // @synthesize userExtInfo=_userExtInfo;
@property(nonatomic) _Bool isPublishTaskCancel; // @synthesize isPublishTaskCancel=_isPublishTaskCancel;
@property(nonatomic) unsigned int groupSendSource; // @synthesize groupSendSource=_groupSendSource;
@property(nonatomic) unsigned int ignoreInSelfStory; // @synthesize ignoreInSelfStory=_ignoreInSelfStory;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) _Bool isGroupVideo; // @synthesize isGroupVideo=_isGroupVideo;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) TBVideoSpreadGroupListModel *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) TBVideoReaderConfModel *readerConf; // @synthesize readerConf=_readerConf;
@property(retain, nonatomic) NSString *localMediaCaptureLocation; // @synthesize localMediaCaptureLocation=_localMediaCaptureLocation;
@property(retain, nonatomic) TBGPSModel *localMediaGPSModel; // @synthesize localMediaGPSModel=_localMediaGPSModel;
@property(nonatomic) unsigned long long localMediaCaptureTime; // @synthesize localMediaCaptureTime=_localMediaCaptureTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool isPicture; // @synthesize isPicture=_isPicture;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) NSArray *mentionList; // @synthesize mentionList=_mentionList;
@property(retain, nonatomic) TBAddressModel *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *geographyFilter; // @synthesize geographyFilter=_geographyFilter;
@property(retain, nonatomic) NSString *locationEmojiText; // @synthesize locationEmojiText=_locationEmojiText;
@property(nonatomic) unsigned long long videoTime; // @synthesize videoTime=_videoTime;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
@property(retain, nonatomic) NSString *doodleText; // @synthesize doodleText=_doodleText;
@property(retain, nonatomic) NSString *doodlePath; // @synthesize doodlePath=_doodlePath;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (_Bool)isPublishShareGroup;
- (id)getVideoBasicInfoModel;
- (id)getStoryVideoDesModel;
- (void)converReqPublishModelToSelf:(id)arg1;
- (id)converToReqPublishModel;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

