//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface GameLibraryAppInfo : MMObject <PBCoding>
{
    _Bool _needBaseInfo;
    unsigned int isInternalDownload;
    unsigned int remainingCount;
    unsigned int showMoreGame;
    unsigned int nextOffset;
    NSMutableArray *adList;
    NSMutableArray *aNewAppList;
    NSMutableArray *allAppList;
    NSMutableArray *sortOptionList;
    NSString *moreNewGameH5Url;
    NSString *moreNewGameEntranceTitle;
    NSMutableArray *classifyList;
    NSString *moreGameURL;
    NSString *moreGameTitle;
    NSString *classifyTitle;
}

+ (void)initialize;
@property(nonatomic) _Bool needBaseInfo; // @synthesize needBaseInfo=_needBaseInfo;
@property(nonatomic) unsigned int nextOffset; // @synthesize nextOffset;
@property(retain, nonatomic) NSString *classifyTitle; // @synthesize classifyTitle;
@property(retain, nonatomic) NSString *moreGameTitle; // @synthesize moreGameTitle;
@property(retain, nonatomic) NSString *moreGameURL; // @synthesize moreGameURL;
@property(nonatomic) unsigned int showMoreGame; // @synthesize showMoreGame;
@property(retain, nonatomic) NSMutableArray *classifyList; // @synthesize classifyList;
@property(retain, nonatomic) NSString *moreNewGameEntranceTitle; // @synthesize moreNewGameEntranceTitle;
@property(retain, nonatomic) NSString *moreNewGameH5Url; // @synthesize moreNewGameH5Url;
@property(nonatomic) unsigned int remainingCount; // @synthesize remainingCount;
@property(retain, nonatomic) NSMutableArray *sortOptionList; // @synthesize sortOptionList;
@property(retain, nonatomic) NSMutableArray *allAppList; // @synthesize allAppList;
@property(retain, nonatomic) NSMutableArray *aNewAppList; // @synthesize aNewAppList;
@property(retain, nonatomic) NSMutableArray *adList; // @synthesize adList;
@property(nonatomic) unsigned int isInternalDownload; // @synthesize isInternalDownload;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

