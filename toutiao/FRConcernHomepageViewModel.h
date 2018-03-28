//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FRConcernEntity, FRForumEntity, FRThreadListStructModel, NSArray, NSString;

@interface FRConcernHomepageViewModel : NSObject
{
    _Bool _showDescribe;
    _Bool _isDescribeExpand;
    NSString *_concernID;
    FRConcernEntity *_concernEntity;
    unsigned long long _showEtStatus;
    NSString *_postContentHint;
    NSArray *_tabs;
    FRThreadListStructModel *_firstBatchThreadsOfThreadTab;
    FRForumEntity *_relativeForum;
    unsigned long long _describeMaxLineNumber;
    NSString *_concernAndDiscussDescribe;
    long long _hashTagType;
    NSString *_displayTitle;
    NSArray *_publishConfigModels;
    long long _read_count;
    NSString *_banner_url;
    NSString *_schema;
}

@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *banner_url; // @synthesize banner_url=_banner_url;
@property(nonatomic) long long read_count; // @synthesize read_count=_read_count;
@property(copy, nonatomic) NSArray *publishConfigModels; // @synthesize publishConfigModels=_publishConfigModels;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(nonatomic) _Bool isDescribeExpand; // @synthesize isDescribeExpand=_isDescribeExpand;
@property(nonatomic) long long hashTagType; // @synthesize hashTagType=_hashTagType;
@property(copy, nonatomic) NSString *concernAndDiscussDescribe; // @synthesize concernAndDiscussDescribe=_concernAndDiscussDescribe;
@property(nonatomic) unsigned long long describeMaxLineNumber; // @synthesize describeMaxLineNumber=_describeMaxLineNumber;
@property(nonatomic) _Bool showDescribe; // @synthesize showDescribe=_showDescribe;
@property(retain, nonatomic) FRForumEntity *relativeForum; // @synthesize relativeForum=_relativeForum;
@property(retain, nonatomic) FRThreadListStructModel *firstBatchThreadsOfThreadTab; // @synthesize firstBatchThreadsOfThreadTab=_firstBatchThreadsOfThreadTab;
@property(copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(copy, nonatomic) NSString *postContentHint; // @synthesize postContentHint=_postContentHint;
@property(nonatomic) unsigned long long showEtStatus; // @synthesize showEtStatus=_showEtStatus;
@property(retain, nonatomic) FRConcernEntity *concernEntity; // @synthesize concernEntity=_concernEntity;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
- (void).cxx_destruct;
- (id)validateTabsOfOriginalTabs:(id)arg1;
- (void)requestConcernHomepageHeadWithCallback:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConcernID:(id)arg1;

@end

