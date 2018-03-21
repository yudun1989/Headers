//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GYModelObject.h"

@class NSData, NSDate, NSString;

@interface AWEVideoDraftModel : GYModelObject
{
    _Bool _backup;
    _Bool _videoMuted;
    _Bool _needShowBonusView;
    _Bool _isPrivate;
    float _voiceVolume;
    float _musicVolume;
    NSString *_createVersion;
    NSString *_draftID;
    NSString *_uuid;
    NSDate *_saveDate;
    double _maxDuration;
    NSString *_title;
    NSData *_titleExtraInfoData;
    NSData *_musicJson;
    NSData *_challengeJson;
    NSData *_fragmentInfoJson;
    NSString *_challengeName;
    NSString *_challengeItemID;
    NSString *_videoFilePath;
    NSString *_musicID;
    NSString *_uploadFileMusicID;
    double _musicLocation;
    double _musicLength;
    long long _filterID;
    NSString *_filterName;
    double _effectBeginTime;
    long long _videoSource;
    long long _step;
    unsigned long long _privacyType;
    long long _videoType;
    NSString *_referString;
    NSString *_poiID;
    NSString *_poiName;
    long long _bodydanceScore;
    double _dynamicCoverStartTime;
    NSString *_blessWords;
    double _bonusRecordStart;
    double _bonusRecordEnd;
    NSData *_coverImageData;
    long long _preferViewType;
    NSString *_usedStickers;
    long long _effectType;
}

+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)tableName;
+ (id)dbName;
@property(nonatomic) long long effectType; // @synthesize effectType=_effectType;
@property(retain, nonatomic) NSString *usedStickers; // @synthesize usedStickers=_usedStickers;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) long long preferViewType; // @synthesize preferViewType=_preferViewType;
@property(retain, nonatomic) NSData *coverImageData; // @synthesize coverImageData=_coverImageData;
@property(nonatomic) _Bool needShowBonusView; // @synthesize needShowBonusView=_needShowBonusView;
@property(nonatomic) double bonusRecordEnd; // @synthesize bonusRecordEnd=_bonusRecordEnd;
@property(nonatomic) double bonusRecordStart; // @synthesize bonusRecordStart=_bonusRecordStart;
@property(copy, nonatomic) NSString *blessWords; // @synthesize blessWords=_blessWords;
@property(nonatomic) double dynamicCoverStartTime; // @synthesize dynamicCoverStartTime=_dynamicCoverStartTime;
@property(nonatomic) long long bodydanceScore; // @synthesize bodydanceScore=_bodydanceScore;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) unsigned long long privacyType; // @synthesize privacyType=_privacyType;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic) long long videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) double effectBeginTime; // @synthesize effectBeginTime=_effectBeginTime;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(nonatomic) long long filterID; // @synthesize filterID=_filterID;
@property(nonatomic) float musicVolume; // @synthesize musicVolume=_musicVolume;
@property(nonatomic) float voiceVolume; // @synthesize voiceVolume=_voiceVolume;
@property(nonatomic) double musicLength; // @synthesize musicLength=_musicLength;
@property(nonatomic) double musicLocation; // @synthesize musicLocation=_musicLocation;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(retain, nonatomic) NSString *uploadFileMusicID; // @synthesize uploadFileMusicID=_uploadFileMusicID;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
@property(retain, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(retain, nonatomic) NSString *challengeItemID; // @synthesize challengeItemID=_challengeItemID;
@property(retain, nonatomic) NSString *challengeName; // @synthesize challengeName=_challengeName;
@property(retain, nonatomic) NSData *fragmentInfoJson; // @synthesize fragmentInfoJson=_fragmentInfoJson;
@property(retain, nonatomic) NSData *challengeJson; // @synthesize challengeJson=_challengeJson;
@property(retain, nonatomic) NSData *musicJson; // @synthesize musicJson=_musicJson;
@property(retain, nonatomic) NSData *titleExtraInfoData; // @synthesize titleExtraInfoData=_titleExtraInfoData;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) _Bool backup; // @synthesize backup=_backup;
@property(retain, nonatomic) NSDate *saveDate; // @synthesize saveDate=_saveDate;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *draftID; // @synthesize draftID=_draftID;
@property(retain, nonatomic) NSString *createVersion; // @synthesize createVersion=_createVersion;
- (void).cxx_destruct;

@end

