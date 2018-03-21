//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QZEventPhotoModel;

@interface QZPhotoTimeLineView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_headerList;
    NSMutableDictionary *_eventDic;
    NSMutableArray *_timeLineArray;
    long long _owner;
    NSString *_albumId;
    long long _albumType;
    NSString *_password;
    _Bool _topHasMore;
    long long _startTimeRangeIndex;
    long long _startOffset;
    long long _endTimeRangeIndex;
    long long _endOffset;
    _Bool _isOpen;
    unsigned char _isRefresh;
    _Bool _bottomHasMore;
    id _timeLineDelegate;
    QZEventPhotoModel *_visitingModel;
    long long _refreshType;
    long long _startTime;
    long long _endTime;
}

@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool bottomHasMore; // @synthesize bottomHasMore=_bottomHasMore;
@property(nonatomic) _Bool topHasMore; // @synthesize topHasMore=_topHasMore;
@property(nonatomic) long long refreshType; // @synthesize refreshType=_refreshType;
@property(nonatomic) unsigned char isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) QZEventPhotoModel *visitingModel; // @synthesize visitingModel=_visitingModel;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id timeLineDelegate; // @synthesize timeLineDelegate=_timeLineDelegate;
- (void).cxx_destruct;
- (void)closeTimeLineView;
- (void)openTimeLineViewWithVisitingEventModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

