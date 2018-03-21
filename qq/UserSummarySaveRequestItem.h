//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMLBSRequestItem.h>

@class NSArray, UserSummaryModel;

@interface UserSummarySaveRequestItem : SAMLBSRequestItem
{
    UserSummaryModel *_model;
    _Bool _haveNecessaryInfo;
    int _xo;
    _Bool _isImportSummary;
    NSArray *_faceList;
}

@property(retain) NSArray *faceList; // @synthesize faceList=_faceList;
@property(nonatomic) _Bool isImportSummary; // @synthesize isImportSummary=_isImportSummary;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)initWithModel:(id)arg1 faceList:(id)arg2 existKeyInfo:(_Bool)arg3;

// Remaining properties
@property(nonatomic) _Bool haveNecessaryInfo; // @dynamic haveNecessaryInfo;
@property(retain, nonatomic) UserSummaryModel *model; // @dynamic model;

@end

