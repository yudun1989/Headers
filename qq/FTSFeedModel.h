//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface FTSFeedModel : NSObject
{
    int _xo;
    NSString *_ftsFeedId;
    long long _ftsFeedType;
    long long _ftsFeedSortId;
    long long _ftsSearchState;
    _Bool _isNetReturn;
    NSString *_ftsFeedClassForString;
    NSString *_ftsKeyword;
    NSMutableArray *_ftsFeedList;
    _Bool _isAIBlurSearch;
    _Bool _isSearchTimeout;
    _Bool _dontShowDescTitle;
    _Bool _rdmIsCalced;
    unsigned long long _rdmSearchElapse;
}

@property(nonatomic) _Bool rdmIsCalced; // @synthesize rdmIsCalced=_rdmIsCalced;
@property(nonatomic) unsigned long long rdmSearchElapse; // @synthesize rdmSearchElapse=_rdmSearchElapse;
@property(nonatomic) _Bool dontShowDescTitle; // @synthesize dontShowDescTitle=_dontShowDescTitle;
@property(nonatomic) _Bool isSearchTimeout; // @synthesize isSearchTimeout=_isSearchTimeout;
@property(nonatomic) _Bool isAIBlurSearch; // @synthesize isAIBlurSearch=_isAIBlurSearch;
- (void).cxx_destruct;
- (long long)compareBySortIdAsc:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *ftsFeedClassForString; // @dynamic ftsFeedClassForString;
@property(retain, nonatomic) NSString *ftsFeedId; // @dynamic ftsFeedId;
@property(retain, nonatomic) NSMutableArray *ftsFeedList; // @dynamic ftsFeedList;
@property(nonatomic) long long ftsFeedSortId; // @dynamic ftsFeedSortId;
@property(nonatomic) long long ftsFeedType; // @dynamic ftsFeedType;
@property(retain, nonatomic) NSString *ftsKeyword; // @dynamic ftsKeyword;
@property(nonatomic) long long ftsSearchState; // @dynamic ftsSearchState;
@property(nonatomic) _Bool isNetReturn; // @dynamic isNetReturn;

@end

