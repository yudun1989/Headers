//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CSChannelDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol NBShortVideoLogicDelegate;

@interface NBShortVideoLogic : NSObject <CSChannelDelegate>
{
    _Bool _enableDirection;
    _Bool _isRequesting;
    _Bool _isDeleting;
    unsigned long long _isEnd;
    unsigned long long _total;
    NSMutableArray *_mediaInfoArray;
    unsigned long long _direction;
    NSDictionary *_param;
    NSString *_currentPlayJumpUrl;
    id <NBShortVideoLogicDelegate> _delegate;
    NSString *_queryStr;
    unsigned long long _currentPageIndex;
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(copy, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(nonatomic) __weak id <NBShortVideoLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentPlayJumpUrl; // @synthesize currentPlayJumpUrl=_currentPlayJumpUrl;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool enableDirection; // @synthesize enableDirection=_enableDirection;
@property(retain, nonatomic) NSMutableArray *mediaInfoArray; // @synthesize mediaInfoArray=_mediaInfoArray;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(nonatomic) unsigned long long isEnd; // @synthesize isEnd=_isEnd;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onReceviceData:(struct LCMessage *)arg1;
- (void)decodeMediaDetailRsp:(struct LCMessage *)arg1;
- (void)fireMediaDetailRequestFailed:(int)arg1 errMsg:(id)arg2;
- (void)internalRequest:(unsigned long long)arg1;
- (id)currentQueryString;
- (id)firstShortVideo;
- (id)lastShortVideo;
- (void)requestNextPage;
- (void)requestFirstPage;
- (id)initWithQeuryString:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

