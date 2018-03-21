//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportMainFrameTaskBarActionItem : WAReportBaseItem
{
    unsigned int _openTime;
    unsigned int _appCountWhenOpen;
    unsigned int _appCountWhenClose;
    unsigned int _closeReason;
    unsigned int _scrollCount;
    unsigned int _deleteAppCount;
    unsigned int _whyDragMeCountWhenClose;
    NSString *_openAppIdList;
    NSString *_deleteAppIdList;
}

@property(nonatomic) unsigned int whyDragMeCountWhenClose; // @synthesize whyDragMeCountWhenClose=_whyDragMeCountWhenClose;
@property(copy, nonatomic) NSString *deleteAppIdList; // @synthesize deleteAppIdList=_deleteAppIdList;
@property(nonatomic) unsigned int deleteAppCount; // @synthesize deleteAppCount=_deleteAppCount;
@property(copy, nonatomic) NSString *openAppIdList; // @synthesize openAppIdList=_openAppIdList;
@property(nonatomic) unsigned int scrollCount; // @synthesize scrollCount=_scrollCount;
@property(nonatomic) unsigned int closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned int appCountWhenClose; // @synthesize appCountWhenClose=_appCountWhenClose;
@property(nonatomic) unsigned int appCountWhenOpen; // @synthesize appCountWhenOpen=_appCountWhenOpen;
@property(nonatomic) unsigned int openTime; // @synthesize openTime=_openTime;
- (void).cxx_destruct;
- (id)reportString;

@end

